//
//  MCPanelViewController.h
//  GSX
//
//  Created by Matthew Cheok on 2/10/13.
//  Copyright (c) 2013 Matthew Cheok. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, MCPanelAnimationDirection) {
    MCPanelAnimationDirectionLeft = UIViewContentModeLeft,
    MCPanelAnimationDirectionRight = UIViewContentModeRight
};

typedef NS_ENUM(NSInteger, MCPanelBackgroundStyle) {
    MCPanelBackgroundStyleLight = 0,
    MCPanelBackgroundStyleExtraLight,
    MCPanelBackgroundStyleDark,
    MCPanelBackgroundStyleTinted
};

@interface MCPanelViewController : UIViewController

@property (strong, nonatomic, readonly) UIViewController *rootViewController;
@property (strong, nonatomic) UIColor *tintColor;
@property (assign, nonatomic) MCPanelBackgroundStyle backgroundStyle;
@property (assign, nonatomic, getter = isMasking) BOOL masking;

- (id)initWithRootViewController:(UIViewController *)controller;
- (void)presentInViewController:(UIViewController *)controller withDirection:(MCPanelAnimationDirection)direction;
- (void)dismiss;

- (UIScreenEdgePanGestureRecognizer *)gestureRecognizerForScreenEdgeGestureInViewController:(UIViewController *)controller withDirection:(MCPanelAnimationDirection)direction;

@end
