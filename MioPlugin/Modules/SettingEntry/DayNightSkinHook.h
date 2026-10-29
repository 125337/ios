//
//  DayNightSkinHook.h
//  MioPlugin
//
//  日月开关：WCR 同款全局 UISwitch 换肤（反编译实锤机制照抄）。
//  WCR 机制：hook UISwitch layoutSubviews（挂/摘皮肤）+ setOn:animated:（程序化同步），
//  皮肤 = 自绘 DayNightSwitch 盖在原生开关上，changeAction 回写原生 setOn:animated:。
//  配置 key: dayNightSkinEnabled（ConfigManager）。
//  入口: 界面定制 → 开关UI 卡片 → 日月开关 cell。
//

#import <Foundation/Foundation.h>

@interface DayNightSkinHook : NSObject

@end
