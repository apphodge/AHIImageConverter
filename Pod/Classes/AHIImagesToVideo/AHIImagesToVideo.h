//
//  AHIImagesToVideo.h
//  Pods
//
//  Created by Harrison Jackson on 2/9/15.
//
//

#import <AVFoundation/AVFoundation.h>
#import <CoreVideo/CoreVideo.h>
#import <CoreFoundation/CoreFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import <AssetsLibrary/AssetsLibrary.h>

/**
 *  Determines defaults for transitions
 */
FOUNDATION_EXPORT BOOL const DefaultTransitionShouldAnimate;

/**
 *  Determines default frame size for videos
 */
FOUNDATION_EXPORT CGSize const DefaultFrameSize;

/**
 *  Determines default FPS of video - 10 Images at 10FPS results in a 1 second video clip.
 */
FOUNDATION_EXPORT NSInteger const DefaultFrameRate;

/**
 *  Number of frames to use in transition
 */
FOUNDATION_EXPORT NSInteger const TransitionFrameCount;

/**
 *  Number of frames to hold each image before beginning alpha fade into the next
 */
FOUNDATION_EXPORT NSInteger const FramesToWaitBeforeTransition;



typedef void(^SuccessBlock)(BOOL success);

@interface AHIImagesToVideo : NSObject

+ (void)videoFromImages:(NSArray *)images
                 toPath:(NSString *)path
               withSize:(CGSize)size
                withFPS:(int)fps
     animateTransitions:(BOOL)animate
      withCallbackBlock:(SuccessBlock)callbackBlock;

+ (void)videoFromImages:(NSArray *)images
                 toPath:(NSString *)path
                withFPS:(int)fps
     animateTransitions:(BOOL)animate
      withCallbackBlock:(SuccessBlock)callbackBlock;

+ (void)videoFromImages:(NSArray *)images
                 toPath:(NSString *)path
               withSize:(CGSize)size
     animateTransitions:(BOOL)animate
      withCallbackBlock:(SuccessBlock)callbackBlock;

+ (void)videoFromImages:(NSArray *)images
                 toPath:(NSString *)path
     animateTransitions:(BOOL)animate
      withCallbackBlock:(SuccessBlock)callbackBlock;

+ (void)videoFromImages:(NSArray *)images
                 toPath:(NSString *)path
      withCallbackBlock:(SuccessBlock)callbackBlock;

+ (void)saveVideoToPhotosWithImages:(NSArray *)images
                           withSize:(CGSize)size
                            withFPS:(int)fps
                 animateTransitions:(BOOL)animate
                  withCallbackBlock:(SuccessBlock)callbackBlock;

+ (void)saveVideoToPhotosWithImages:(NSArray *)images
                           withSize:(CGSize)size
                 animateTransitions:(BOOL)animate
                  withCallbackBlock:(SuccessBlock)callbackBlock;

+ (void)saveVideoToPhotosWithImages:(NSArray *)images
                            withFPS:(int)fps
                 animateTransitions:(BOOL)animate
                  withCallbackBlock:(SuccessBlock)callbackBlock;

+ (void)saveVideoToPhotosWithImages:(NSArray *)images
                 animateTransitions:(BOOL)animate
                  withCallbackBlock:(SuccessBlock)callbackBlock;

+ (void)saveVideoToPhotosWithImages:(NSArray *)images
                  withCallbackBlock:(SuccessBlock)callbackBlock;


@end
