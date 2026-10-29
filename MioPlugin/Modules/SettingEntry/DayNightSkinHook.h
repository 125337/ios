//
//  DayNightSkinHook.h
//  MioPlugin
//
//  日月开关：把微信内的 UISwitch 换成 DayNightSwitch（太阳/月亮切换动画）。
//  配置 key: dayNightSkinEnabled（ConfigManager）。
//  入口: 界面定制 → 开关UI 卡片 → 日月开关 cell。
//

#import <Foundation/Foundation.h>

@interface DayNightSkinHook : NSObject

+ (void)install;

@end
