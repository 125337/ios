#import "ConfigManager.h"
#import "LogManager.h"
#import "../Config/Constants.h"

NSString *const kPluginPrefix = @"MioPlugin_";

static NSMutableArray<Class<ConfigModule>> *s_registeredModules = nil;

@implementation ConfigManager

+ (void)registerModule:(Class<ConfigModule>)moduleClass {
    if (!s_registeredModules) {
        s_registeredModules = [NSMutableArray array];
    }
    if (![s_registeredModules containsObject:moduleClass]) {
        [s_registeredModules addObject:moduleClass];
    }
}

+ (void)loadAll {
    for (Class<ConfigModule> cls in s_registeredModules) {
        id instance = [cls shared];
        for (ConfigDescriptor *desc in [cls descriptors]) {
            NSString *fullKey = [kPluginPrefix stringByAppendingFormat:@"%@%@", [cls modulePrefix], desc.key];
            NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
            id raw = [d objectForKey:fullKey];
            
            if (raw) {
                switch (desc.type) {
                    case ConfigValueTypeBool:
                        [instance setValue:@([raw boolValue]) forKey:desc.key];
                        break;
                    case ConfigValueTypeInteger:
                        [instance setValue:@([raw integerValue]) forKey:desc.key];
                        break;
                    case ConfigValueTypeFloat:
                        [instance setValue:@([raw floatValue]) forKey:desc.key];
                        break;
                    case ConfigValueTypeString:
                        [instance setValue:([(NSString *)raw length] > 0 ? raw : desc.defaultValue) forKey:desc.key];
                        break;
                    case ConfigValueTypeArray:
                        [instance setValue:(raw ?: desc.defaultValue) forKey:desc.key];
                        break;
                }
            } else {
                [instance setValue:desc.defaultValue forKey:desc.key];
            }
        }
        
        // 扩展点：支持模块自定义归档（@optional 协议方法）
        if ([cls respondsToSelector:@selector(loadArchivedData)]) {
            [cls loadArchivedData];
        }
    }
}

+ (void)saveAll {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    
    for (Class<ConfigModule> cls in s_registeredModules) {
        id instance = [cls shared];
        for (ConfigDescriptor *desc in [cls descriptors]) {
            NSString *fullKey = [kPluginPrefix stringByAppendingFormat:@"%@%@", [cls modulePrefix], desc.key];
            id value = [instance valueForKey:desc.key];
            
            if (value) {
                switch (desc.type) {
                    case ConfigValueTypeBool:
                        [d setBool:[value boolValue] forKey:fullKey];
                        break;
                    case ConfigValueTypeInteger:
                        [d setInteger:[value integerValue] forKey:fullKey];
                        break;
                    case ConfigValueTypeFloat:
                        [d setFloat:[value floatValue] forKey:fullKey];
                        break;
                    case ConfigValueTypeString:
                        [d setObject:value forKey:fullKey];
                        break;
                    case ConfigValueTypeArray:
                        [d setObject:value forKey:fullKey];
                        break;
                }
            } else {
                [d removeObjectForKey:fullKey];
            }
        }
        
        // 扩展点：支持模块自定义归档（@optional 协议方法）
        if ([cls respondsToSelector:@selector(saveArchivedData)]) {
            [cls saveArchivedData];
        }
    }
    
    [d synchronize];
}

+ (void)resetAll {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    NSDictionary *all = [d dictionaryRepresentation];
    for (NSString *key in all) {
        if ([key hasPrefix:kPluginPrefix]) {
            [d removeObjectForKey:key];
        }
    }
    [d synchronize];
    [self loadAll];
}

+ (void)setValue:(id)value forKey:(NSString *)key {
    for (Class<ConfigModule> cls in s_registeredModules) {
        id instance = [cls shared];
        for (ConfigDescriptor *desc in [cls descriptors]) {
            if ([desc.key isEqualToString:key]) {
                [instance setValue:value forKey:key];
                return;
            }
        }
    }
}

+ (id)valueForKey:(NSString *)key {
    for (Class<ConfigModule> cls in s_registeredModules) {
        id instance = [cls shared];
        for (ConfigDescriptor *desc in [cls descriptors]) {
            if ([desc.key isEqualToString:key]) {
                return [instance valueForKey:key];
            }
        }
    }
    return nil;
}

#pragma mark - 配置导入/导出（备份用）

// 备份键收集规则：插件全部配置键。Mio 前缀覆盖 MioPlugin_ 管辖键与散落键
// （卡片联系人 MioContactSaved*/日历 MioCal*/分组折叠 MioSg·MioSd 等），
// com.mio. 前缀 = 朋友圈定时任务，WPColorPickerHistory = 取色历史散落键
+ (NSArray<NSString *> *)wpBackupKeys {
    NSDictionary *all = [[NSUserDefaults standardUserDefaults] dictionaryRepresentation];
    NSMutableArray *keys = [NSMutableArray array];
    for (NSString *key in all) {
        if ([key hasPrefix:@"Mio"] ||
            [key hasPrefix:@"com.mio."] ||
            [key isEqualToString:@"WPColorPickerHistory"]) {
            [keys addObject:key];
        }
    }
    return keys;
}

+ (NSDictionary *)exportConfig {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    NSMutableDictionary *config = [NSMutableDictionary dictionary];
    for (NSString *key in [self wpBackupKeys]) {
        id value = [d objectForKey:key];
        if (!value) continue;
        if ([value isKindOfClass:[NSData class]]) {
            // NSKeyedArchiver 归档值（如撤回格式字典）JSON 不兼容：base64 包裹标记还原
            config[key] = @{ @"__data": [value base64EncodedStringWithOptions:0] };
        } else if ([value isKindOfClass:[NSNumber class]] ||
                   [value isKindOfClass:[NSString class]] ||
                   [value isKindOfClass:[NSArray class]] ||
                   [value isKindOfClass:[NSDictionary class]]) {
            config[key] = value;
        }
        // 其它类型（插件配置未使用）不收
    }
    return @{ @"app": @"Mio助手",
              @"format": @1,
              @"version": kPluginVersion,
              @"exportedAt": [NSDate date],
              @"config": config };
}

+ (BOOL)importConfig:(NSDictionary *)config {
    if (![config isKindOfClass:[NSDictionary class]]) return NO;
    if (![config[@"app"] isEqualToString:@"Mio助手"]) return NO;
    NSDictionary *values = config[@"config"];
    if (![values isKindOfClass:[NSDictionary class]]) return NO;

    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    // exportedAt 经 JSON 序列化已是 ISO 字符串，仅日志记录用
    NSString *exportedAt = [config[@"exportedAt"] isKindOfClass:[NSString class]]
        ? config[@"exportedAt"] : @"";

    NSUInteger count = 0;
    for (NSString *key in values) {
        id value = values[key];
        if (![key isKindOfClass:[NSString class]] || !value) continue;
        // 防御：只写备份规则内的键，JSON 文件不可写任意 NSUserDefaults 键
        if (![self wpBackupKeysContains:key]) continue;
        if ([value isKindOfClass:[NSDictionary class]] && value[@"__data"]) {
            NSData *data = [[NSData alloc] initWithBase64EncodedString:value[@"__data"] options:0];
            if (!data) continue;
            [d setObject:data forKey:key];
        } else if ([value isKindOfClass:[NSNumber class]] ||
                   [value isKindOfClass:[NSString class]] ||
                   [value isKindOfClass:[NSArray class]] ||
                   [value isKindOfClass:[NSDictionary class]]) {
            [d setObject:value forKey:key];
        }
        count++;
    }
    if (count == 0) return NO;
    [d synchronize];
    [self loadAll];
    WPLog(@"Config", @"[Backup] import ok: %lu keys (exportedAt %@)", (unsigned long)count, exportedAt);
    return YES;
}

+ (BOOL)wpBackupKeysContains:(NSString *)key {
    return [key hasPrefix:@"Mio"] ||
           [key hasPrefix:@"com.mio."] ||
           [key isEqualToString:@"WPColorPickerHistory"];
}

@end