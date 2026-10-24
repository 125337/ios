#import "SettingCategoryController.h"

// 点歌卡片来源 appid 选择页（复刻 SettingMomentTailController 的预设点选 UI，去掉开关/输入行/PostSession）
// 数据源直接用 Moments 内置预设池 builtinTailPresets；「自动」= 跟随音源官方真身
@interface SettingMusicCardSourceController : SettingCategoryController
@end
