# AHImageConverter

[![CI Status](http://img.shields.io/travis/Harrison Jackson/AHImageConverter.svg?style=flat)](https://travis-ci.org/Harrison Jackson/AHImageConverter)
[![Version](https://img.shields.io/cocoapods/v/AHImageConverter.svg?style=flat)](http://cocoadocs.org/docsets/AHImageConverter)
[![License](https://img.shields.io/cocoapods/l/AHImageConverter.svg?style=flat)](http://cocoadocs.org/docsets/AHImageConverter)
[![Platform](https://img.shields.io/cocoapods/p/AHImageConverter.svg?style=flat)](http://cocoadocs.org/docsets/AHImageConverter)

## Usage

To run the example project, clone the repo, and run `pod install` from the Example directory first.

###Images to video

```
NSArray * testImageArray = @[ [UIImage imageNamed:@"frame1.JPG"],
                              [UIImage imageNamed:@"frame2.JPG"],
                              [UIImage imageNamed:@"frame3.JPG"],
                              [UIImage imageNamed:@"frame4.JPG"],
                              [UIImage imageNamed:@"frame5.JPG"],
                              [UIImage imageNamed:@"frame6.JPG"],
                              [UIImage imageNamed:@"frame7.JPG"],
                              [UIImage imageNamed:@"frame8.JPG"],
                              [UIImage imageNamed:@"frame9.JPG"],
                              [UIImage imageNamed:@"frame10.JPG"],
                              [UIImage imageNamed:@"frame11.JPG"]];

[AHIImagesToVideo saveVideoToPhotosWithImages:testImageArray
                          animateTransitions:YES
                           withCallbackBlock:^(BOOL success) {
                               if (success) {
                                   NSLog(@"Success");
                               } else {
                                   NSLog(@"Failed");
                               }
                           }];

```

###Images to gif

```
NSArray * testImageArray = @[ [UIImage imageNamed:@"frame1.png"],
                                  [UIImage imageNamed:@"frame2.png"],
                                  [UIImage imageNamed:@"frame3.png"],
                                  [UIImage imageNamed:@"frame4.png"],
                                  [UIImage imageNamed:@"frame5.png"],
                                  [UIImage imageNamed:@"frame6.png"]];
    
    
    
[AHIImagesToGIF saveGIFToPhotosWithImages:testImageArray
                                      withFPS:10
                           animateTransitions:NO
                           withCallbackBlock:^(BOOL success) {
                               if (success) {
                                   NSLog(@"Success");
                               } else {
                                   NSLog(@"Failed");
                               }
                               
                           }];

```

## Requirements

```
'CoreVideo', 
'AVFoundation', 
'CoreFoundation', 
'CoreMedia', 
'AssetsLibrary', 
'MobileCoreServices', 
'ImageIO', 
'UIKit'
```

## Installation

Pending submission to cocoapods - need to add tests and usage gifs 

AHImageConverter is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

    pod "AHImageConverter"

## Author

Harrison Jackson, harrison@doityourselfharry.com

## License

AHImageConverter is available under the MIT license. See the LICENSE file for more info.

