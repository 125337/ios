#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MioPluginSwitchHandler : NSObject
+ (instancetype)sharedInstance;
- (void)switchChanged:(UISwitch *)sender;
- (void)onEditRowTap:(UIButton *)sender;
@end

@interface SettingEntryHook : NSObject
+ (void)install;
@end