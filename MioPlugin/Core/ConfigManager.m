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

// JSON 安全化：NSUserDefaults 值可能含 JSON 不兼容类型（NSDate/NSURL/嵌套 NSData 等——
// 外层类型白名单查不到藏在 NSArray/NSDictionary 内部的漏网），递归深拷贝为可序列化类型；
// 导入侧按 __ts/__data 标记还原
static id WPJSONSafeValue(id value) {
    if ([value isKindOfClass:[NSDate class]]) {
        return @{ @"__ts": @(((NSDate *)value).timeIntervalSince1970) };
    }
    if ([value isKindOfClass:[NSURL class]]) {
        return ((NSURL *)value).absoluteString;
    }
    if ([value isKindOfClass:[NSData class]]) {
        // 归档数据（如撤回格式字典）→ base64 包裹，导入还原为 NSData
        return @{ @"__data": [(NSData *)value base64EncodedStringWithOptions:0] };
    }
    if ([value isKindOfClass:[NSArray class]]) {
        NSMutableArray *arr = [NSMutableArray array];
        for (id item in value) {
            id safe = WPJSONSafeValue(item);
            if (safe) [arr addObject:safe];
        }
        return arr;
    }
    if ([value isKindOfClass:[NSDictionary class]]) {
        NSMutableDictionary *dic = [NSMutableDictionary dictionary];
        for (id key in value) {
            id safe = WPJSONSafeValue(value[key]);
            if (safe) dic[key] = safe;
        }
        return dic;
    }
    if ([value isKindOfClass:[NSNumber class]] || [value isKindOfClass:[NSString class]]) {
        return value;
    }
    return nil; // 其余类型（插件配置未使用）跳过
}

+ (NSDictionary *)exportConfig {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    NSMutableDictionary *config = [NSMutableDictionary dictionary];
    for (NSString *key in [self wpBackupKeys]) {
        id safe = WPJSONSafeValue([d objectForKey:key]);
        if (safe) config[key] = safe;
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
        // 导出侧安全化标记还原：__data→NSData（归档），__ts→NSDate（时间戳）
        id toStore = nil;
        if ([value isKindOfClass:[NSDictionary class]]) {
            NSString *dataB64 = [value[@"__data"] isKindOfClass:[NSString class]] ? value[@"__data"] : nil;
            NSNumber *ts = [value[@"__ts"] isKindOfClass:[NSNumber class]] ? value[@"__ts"] : nil;
            if (dataB64) toStore = [[NSData alloc] initWithBase64EncodedString:dataB64 options:0];
            else if (ts) toStore = [NSDate dateWithTimeIntervalSince1970:ts.doubleValue];
            else toStore = value; // 普通字典
        } else if ([value isKindOfClass:[NSNumber class]] ||
                   [value isKindOfClass:[NSString class]] ||
                   [value isKindOfClass:[NSArray class]]) {
            toStore = value;
        }
        if (!toStore) continue;
        [d setObject:toStore forKey:key];
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