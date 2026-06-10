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
@end