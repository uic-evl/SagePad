//
//  SagePadAppDelegate.h
//  SagePad
//
//  Created by Jakub Misterka on 11/9/11.
//  Copyright 2011 UIC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SagePadViewController;

@interface SagePadAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UIViewController *viewController;

@end
