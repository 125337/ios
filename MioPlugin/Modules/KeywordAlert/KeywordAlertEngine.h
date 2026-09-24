#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 关键词匹配引擎 —— 算法逐条对齐 WCR 反编译实现：
/// keywordAlertRegexPatternFromKeyword: / keywordAlertMatchRangesInContent:keyword:
/// / keywordAlertContent:matchesKeyword: 以及禁用词豁免逻辑。
@interface KeywordAlertEngine : NSObject

/// 换行分隔的多行关键词文本 → trim 后的非空词条数组
+ (NSArray<NSString *> *)parseKeywordList:(nullable NSString *)text;

/// 提取正则 pattern：/…/ 或 ／…／ 包裹（长度≥3）取内部；pattern 为 nil 且词条含 \ 时整体作 pattern。
/// 返回 nil 表示非正则词条（进行字面匹配）；返回空串表示无效正则词条（跳过）。
+ (nullable NSString *)regexPatternFromKeyword:(NSString *)keyword;

/// 单词条在单文本中的全部命中区间（字面模式双方 lowercase；正则大小写不敏感 options=1）
+ (NSArray<NSValue *> *)matchRangesInContent:(nullable NSString *)content keyword:(nullable NSString *)keyword;

/// 文本组 × 关键词组：任一命中即 YES，outMatched 输出去重后的命中词条
+ (BOOL)matchesAnyKeyword:(NSArray<NSString *> *)keywords
                  inTexts:(NSArray<NSString *> *)texts
                  matched:(NSArray<NSString *> * _Nullable * _Nullable)outMatched;

/// 禁用词豁免（WCR 规则）：内容命中禁用词，且删掉禁用词命中区间后仍命中任一关键词 → 保留（不抑制）；
/// 删掉后不再命中 → 抑制整条消息。任一禁用词判定为抑制即返回 YES。
+ (BOOL)isSuppressedByDisabledKeywords:(NSArray<NSString *> *)disabledKeywords
                             keywords:(NSArray<NSString *> *)keywords
                              inTexts:(NSArray<NSString *> *)texts;

/// type49 引用消息拆解：从 XML content 提取 <title> 与 <refermsg> 内 <content>（剥离 CDATA），供分别匹配
+ (NSArray<NSString *> *)extractQuotedTexts:(nullable NSString *)xmlContent;

@end

NS_ASSUME_NONNULL_END
