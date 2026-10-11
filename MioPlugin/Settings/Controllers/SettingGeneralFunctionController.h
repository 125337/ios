#import "SettingCategoryController.h"

@interface SettingGeneralFunctionController : SettingCategoryController
- (void)wpBuildRows;   // 行构建钩子（外部刷新一律调 wpReloadUI）
@end