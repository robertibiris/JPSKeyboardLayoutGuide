//
//  JPSKeyboardLayoutGuideViewController.h
//  JPSKeyboardLayoutGuide
//
//  Created by JP Simard on 2014-03-26.
//  Copyright (c) 2014 JP Simard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (JPSKeyboardLayoutGuideViewController)

- (void)jps_viewDidLoad;
- (void)jps_viewWillAppear:(BOOL)animated;
- (void)jps_viewDidDisappear:(BOOL)animated;

#pragma mark - Utilities

//generic method to anchor (by using a constraint) the bottom of the provided UIView instance to the keyboardLayoutGuide (automatically creates and adds the constraint into the UIVIewController's 'view' property)
- (void)jps_anchorViewBottomToKeyboardLayoutGuide:(UIView *)view scale:(CGFloat)scale offset:(CGFloat)offset;

@property (nonatomic, strong) id<UILayoutSupport> keyboardLayoutGuide;

@end
