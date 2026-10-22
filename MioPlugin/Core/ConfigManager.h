#import <Foundation/Foundation.h>
#import "ConfigModule.h"

extern NSString *const kPluginPrefix;

@interface ConfigManager : NSObject
+ (void)registerModule:(Class<ConfigModule>)moduleClass;
+ (void)loadAll;
+ (void)saveAll;
+ (void)resetAll;

/// 根据 key 找到对应的 Config 模块并设置值
/// @param value 要设置的值
/// @param key 配置项的 key（不带模块前缀）
+ (void)setValue:(id)value forKey:(NSString *)key;

/// 根据 key 从对应的 Config 模块获取值
/// @param key 配置项的 key（不带模块前缀）
+ (id)valueForKey:(NSString *)key;

/// 导出全部插件配置为 JSON 兼容字典（MioPlugin_ 管辖键 + Mio*/com.mio.*/WPColorPickerHistory 散落键；
/// NSData 归档值转 base64 包裹 {"__data": ...}）。外层带 app/format/version/exportedAt 元信息。
+ (NSDictionary *)exportConfig;
/// 从 exportConfig 产物恢复配置：校验格式 → 写回 NSUserDefaults → loadAll 重载内存值。成功返回 YES
+ (BOOL)importConfig:(NSDictionary *)config;
@end