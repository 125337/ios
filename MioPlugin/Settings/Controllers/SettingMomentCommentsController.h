#import <UIKit/UIKit.h>
#import "../Common/SettingCategoryController.h"

// 评论文本管理页（微信原生表渲染）：每条评论一行，点行弹菜单编辑/删除
// 不注入 textsKey 时默认管理伪集赞评论文本（fakeCommentTexts）
@interface SettingMomentCommentsController : SettingCategoryController
@property (nonatomic, copy) NSString *textsKey;     // MomentsConfig 数组属性名
@property (nonatomic, copy) NSString *pageTitle;    // 导航栏标题
@property (nonatomic, copy) NSString *footerText;   // 页面底部说明
@end
