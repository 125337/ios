#import <UIKit/UIKit.h>
#import "../Common/SettingCategoryController.h"
#import "MioContactPicker.h"

NS_ASSUME_NONNULL_BEGIN

/// 关键词提醒设置页（入口：通用功能页 - 常用功能卡片）
@interface SettingKeywordAlertController : SettingCategoryController <MioContactPickerDelegate>
@end

NS_ASSUME_NONNULL_END
