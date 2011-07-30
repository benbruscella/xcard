//
//  xcardAppDelegate.h
//  xcard
//
//  Created by Ben Bruscella on 30/07/11.
//  Copyright 2011 SPK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface xcardAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
