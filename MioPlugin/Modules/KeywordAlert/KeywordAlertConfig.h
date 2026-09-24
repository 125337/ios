#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

/// 关键词提醒配置（逻辑对齐 WCR keywordAlert* 配置族）
/// - Keywords / DisabledKeywords：换行分隔，每行一个词条；/…/ 或 ／…／ 包裹 = 正则，含 \ 也按正则处理
/// - 历史记录直接存于 keywordAlertHistoryRecords（dict 数组，上限 200 条，最新在前）
@interface KeywordAlertConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL keywordAlertEnabled;
@property (nonatomic, copy, nullable) NSString *keywordAlertKeywords;
@property (nonatomic, copy, nullable) NSString *keywordAlertDisabledKeywords;
@property (nonatomic, assign) BOOL keywordAlertGroupOnlyEnabled;   // 仅群聊生效
@property (nonatomic, assign) BOOL keywordAlertPrivateOnlyEnabled; // 仅私聊生效
@property (nonatomic, copy, nullable) NSArray<NSString *> *keywordAlertSelectedGroups; // 指定群范围（空=不限）
@property (nonatomic, assign) BOOL keywordAlertBannerEnabled;      // 前台横幅
@property (nonatomic, assign) BOOL keywordAlertNotifyEnabled;      // 后台系统通知
@property (nonatomic, copy, nullable) NSArray *keywordAlertHistoryRecords;

/// 命中记录上限
+ (NSUInteger)historyLimit;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
