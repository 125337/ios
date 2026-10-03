#import "../../Settings/Common/SettingCategoryController.h"

@interface SessionGroupManagerVC : SettingCategoryController
/// 弹窗形态左上「关闭」（独立 present 无返回栈时的关闭入口，WCR dismissHostedPage 同位）
- (void)sgCloseModal:(id)sender;
@end
