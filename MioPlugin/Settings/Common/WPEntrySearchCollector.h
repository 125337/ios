#import <Foundation/Foundation.h>

// 搜索条目自收集器（零声明架构）：
// 设置页每构建一行（addCell:）就自动登记 {title, key, 说明}，搜索清单是行构建的副产品，
// 与页面实际内容永远一致。未打开过的页面在首次搜索时空跑一次构建流程补齐登记。
// 条目结构：@{ title, kw(行说明), py(全拼), pysm(拼音首字母), vc(页类名), cat(页标题), key(行key) }
@interface WPEntrySearchCollector : NSObject

// WPWGroup addCell: 调用：从 cellMgr 的行载荷（WPRowAssocKey 关联）登记一条搜索条目
+ (void)registerRowFromCell:(id)cellMgr page:(id)page;

// 首页搜索汇总：已登记条目 + 惰性空跑未打开页面补齐；结果缓存（进程内一次）
+ (NSArray<NSDictionary *> *)allSearchItems;
@end
