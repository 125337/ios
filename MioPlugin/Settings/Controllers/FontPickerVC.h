#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// 字体选择页（WCR"选择字体"同款）：默认字体 + 自定义字体列表（预览文本用字体本身渲染）。
// 右上"添加"弹系统文件选择器批量导入，长按自定义行删除。
// 点击行写回 FontBeautify 配置（只存文件名）并返回上一页。
@interface FontPickerVC : UIViewController
@end

NS_ASSUME_NONNULL_END
