#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 多行关键词编辑器（关键词列表 / 禁用词共用）
/// 一行一个词条；/…/ 或 ／…／ 包裹 = 正则；含 \ 的词条整体作正则
@interface KeywordListEditorVC : UIViewController
@property (nonatomic, copy, nullable) NSString *initialText;
@property (nonatomic, copy, nullable) NSString *editorTitle;
@property (nonatomic, copy, nullable) void (^saveBlock)(NSString *text);
@end

NS_ASSUME_NONNULL_END
