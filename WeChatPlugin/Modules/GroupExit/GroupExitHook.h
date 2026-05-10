#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface GroupExitHook : NSObject

+ (void)install;
+ (void)startMonitoring;
+ (void)stopMonitoring;
+ (BOOL)isMonitoring;

@end
