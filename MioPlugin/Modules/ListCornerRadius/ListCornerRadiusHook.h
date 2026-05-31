#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ListCornerRadiusHook : NSObject

+ (void)initListCornerRadiusHook;
+ (void)applyBorderToView:(UIView *)view radius:(NSInteger)radius position:(NSInteger)position isFTSHome:(BOOL)isFTSHome;

@end