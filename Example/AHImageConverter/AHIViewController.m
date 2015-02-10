//
//  AHIViewController.m
//  AHImageConverter
//
//  Created by Harrison Jackson on 02/09/2015.
//  Copyright (c) 2014 Harrison Jackson. All rights reserved.
//

#import "AHIViewController.h"
#import <AHImageConverter/AHIImagesToVideo.h>
#import <AHImageConverter/AHIImagesToGIF.h>

@interface AHIViewController ()

@end

@implementation AHIViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    /*
     NSString *path = [NSHomeDirectory() stringByAppendingPathComponent:
     [NSString stringWithFormat:@"Documents/movie.mp4"]];

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
    
    [[NSFileManager defaultManager] removeItemAtPath:path error:NULL];
    
    
    
    
    [AHIImagesToVideo saveVideoToPhotosWithImages:testImageArray
                              animateTransitions:YES
                               withCallbackBlock:^(BOOL success) {
                                   if (success) {
                                       NSLog(@"Success");
                                   } else {
                                       NSLog(@"Failed");
                                   }
                               }];
     [[NSFileManager defaultManager] removeItemAtPath:path error:NULL];

    */
    NSArray * testImageArray2 = @[ [UIImage imageNamed:@"frame1.png"],
                                  [UIImage imageNamed:@"frame2.png"],
                                  [UIImage imageNamed:@"frame3.png"],
                                  [UIImage imageNamed:@"frame4.png"],
                                  [UIImage imageNamed:@"frame5.png"],
                                  [UIImage imageNamed:@"frame6.png"]];
    
    
    
    [AHIImagesToGIF saveGIFToPhotosWithImages:testImageArray2
                                          withFPS:10
                               animateTransitions:NO
                               withCallbackBlock:^(BOOL success) {
                                   if (success) {
                                       NSLog(@"Success");
                                   } else {
                                       NSLog(@"Failed");
                                   }
                                   
                               }];

    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
