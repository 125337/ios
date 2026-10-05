#import "../../Settings/Common/SettingCategoryController.h"

// 侧边分组管理页（对齐电报 SessionGroupManagerVC 的 UI 形态，独立 VC 不耦合电报模块；
// 数据走侧边独立引擎 SideGroupsTab（sdTabs，与电报 sgTabs 完全解耦）
@interface SideGroupsManagerVC : SettingCategoryController
/// 弹窗形态左上「关闭」（独立 present 无返回栈时的关闭入口）
- (void)sgCloseModal:(id)sender;
@end
