#import <UIKit/UIKit.h>
#import "../Common/SettingCategoryController.h"
#import "MioTweakGroupSelectsController.h"

// 定额自动拉群规则管理页（微信原生表渲染）：每条规则一行，点行弹菜单编辑金额/更换群聊/删除
@interface SettingFixedInviteRulesController : SettingCategoryController <MioTweakGroupSelectsDelegate>
@end
