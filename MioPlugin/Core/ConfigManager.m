#import "ConfigManager.h"

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

@end