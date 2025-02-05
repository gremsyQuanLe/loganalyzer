# LogAnalyzer 

[Changelog](CHANGELOG.md) | 
[Issues](https://github.com/pbek/loganalyzer/issues) | 
[Installation](INSTALLATION.md)

[![Build Status Linux / OS X](https://travis-ci.org/pbek/loganalyzer.svg?branch=develop)](https://travis-ci.org/pbek/loganalyzer)
[![Build Status Windows](https://ci.appveyor.com/api/projects/status/github/pbek/LogAnalyzer)](https://ci.appveyor.com/project/pbek/loganalyzer)
[![Snap Status](https://build.snapcraft.io/badge/pbek/loganalyzer.svg)](https://build.snapcraft.io/user/pbek/loganalyzer)

**LogAnalyzer** is a tool that helps you to analyze your log files by reducing 
the content with regular expression patterns you define.

There is an extension for eZ Publish (legacy) to download log files 
directly from the server.

## Screenshot

![Screenhot](screenshots/screenshot.png)

## Features

- adding log files via drag and drop
- finding text in the log file with <kbd>Ctrl</kbd> + <kbd>F</kbd>
    - navigate with <kbd>F3</kbd> and <kbd>⇧</kbd> + <kbd>F3</kbd>
- adding of ignore patterns from selected text
    - use the shortcut <kbd>Ctrl</kbd> + <kbd>I</kbd>
    - use regular expressions as patterns
- adding of report patterns from selected text
    - use the shortcut <kbd>Ctrl</kbd> + <kbd>E</kbd>
    - use regular expressions as patterns
- searching for matching text of ignore patterns if you select them
- removing all matches of ignore patterns from the text
    - empty lines will be removed by default
- exporting and importing of ignore and report patterns
- moving of patterns via drag and drop
- reloading of current file with <kbd>Ctrl</kbd> + <kbd>R</kbd>
- filtering of patterns 
- generation of reports from the report patterns
- exporting of the report as PDF
- printing of the report

## Installation

See 
[Installation](INSTALLATION.md)
for installation instructions on Linux, OS X and Windows.

## Building LogAnalyzer

To get the most current features you can build the application from the 
source code. Download the latest source here: 
[LogAnalyzer Source on GitHub as ZIP](https://github.com/pbek/loganalyzer/archive/develop.zip)

Alternatively you can also checkout the code directly from the git repository:

```shell
git clone https://github.com/pbek/loganalyzer.git -b develop
cd loganalyzer
```

Then download [Qt Creator](http://www.qt.io/download-open-source), 
open the project file `src/LogAnalyzer.pro` and click on 
*Build / Build Project LogAnalyzer*.

Or you can build it directly in your terminal:

```shell
cd src
qmake
make
```

## Minimum software requirements
- A desktop operating system, that supports [Qt](http://www.qt.io/)
- Qt 5.3+
- gcc 4.8+

## Disclaimer
This SOFTWARE PRODUCT is provided by THE PROVIDER "as is" and "with all faults." THE PROVIDER makes no representations or warranties of any kind concerning the safety, suitability, lack of viruses, inaccuracies, typographical errors, or other harmful components of this SOFTWARE PRODUCT. 

There are inherent dangers in the use of any software, and you are solely responsible for determining whether this SOFTWARE PRODUCT is compatible with your equipment and other software installed on your equipment. You are also solely responsible for the protection of your equipment and backup of your data, and THE PROVIDER will not be liable for any damages you may suffer in connection with using, modifying, or distributing this SOFTWARE PRODUCT.
