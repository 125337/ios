#import <UIKit/UIKit.h>

@interface WPAlert : NSObject

+ (void)showTip:(NSString *)title message:(NSString *)message from:(UIViewController *)vc;

+ (void)showTip:(NSString *)title message:(NSString *)message buttonTitle:(NSString *)buttonTitle from:(UIViewController *)vc;

+ (void)showInput:(NSString *)title placeholder:(NSString *)placeholder defaultValue:(NSString *)defaultValue confirmTitle:(NSString *)confirmTitle from:(UIViewController *)vc handler:(void (^)(NSString *text))handler;

+ (void)showCustom:(NSString *)title message:(NSString *)message buttonTitle:(NSString *)buttonTitle from:(UIViewController *)vc;

@end
