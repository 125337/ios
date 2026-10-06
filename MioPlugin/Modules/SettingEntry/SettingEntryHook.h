#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MioPluginSwitchHandler : NSObject
+ (instancetype)sharedInstance;
- (void)onEditRowTap:(id)sender;
@end

@interface SettingEntryHook : NSObject
+ (void)install;
@end