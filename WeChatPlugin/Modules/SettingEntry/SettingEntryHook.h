#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface WeChatPluginSwitchHandler : NSObject
+ (instancetype)sharedInstance;
- (void)switchChanged:(UISwitch *)sender;
@end

@interface SettingEntryHook : NSObject
+ (void)install;
@end