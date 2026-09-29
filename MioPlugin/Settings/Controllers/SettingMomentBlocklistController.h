#import <UIKit/UIKit.h>
#import "../Common/SettingCategoryController.h"

// 联系人名单管理页（微信原生表渲染）：通用名单编辑（黑名单/评论生效范围等）
// 添加好友走微信原生 SessionSelectController 选人页（WCR 2.1.8 同款，01c8bfc0 实锤）
// 不注入时默认管理自动点赞黑名单（autoLikeBlocklist）
@interface SettingMomentBlocklistController : SettingCategoryController
@property (nonatomic, copy) NSString *pageTitle;    // 导航栏标题
@property (nonatomic, copy) NSString *configKey;    // MomentsConfig 数组属性名（wxid 列表）
@property (nonatomic, copy) NSString *footerText;   // 页面底部说明
@property (nonatomic, copy) NSString *pickerTitle;  // 选人页标题
@end
