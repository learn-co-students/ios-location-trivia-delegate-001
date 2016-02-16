//
//  FISAddLocationViewController.h
//  ios-location-trivia-delegate
//
//  Created by Timothy Clem on 6/23/15.
//  Copyright (c) 2015 The Flatiron School. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FISAddLocationViewController;

@protocol FISAddLocationViewControllerDelegate <NSObject>
- (void)addLocationViewControllerDidCancel:(FISAddLocationViewController *)viewController;
- (BOOL)addLocationViewController:(FISAddLocationViewController *)viewController shouldAllowLocationNamed:(NSString *)locationName;
- (void)addLocationViewController:(FISAddLocationViewController *)viewController didAddLocationNamed:(NSString *)locationName;
@end

@interface FISAddLocationViewController : UIViewController
@property (nonatomic, weak) id <FISAddLocationViewControllerDelegate> delegate;
@end
