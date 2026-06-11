#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, ConfigValueType) {
    ConfigValueTypeBool,
    ConfigValueTypeInteger,
    ConfigValueTypeFloat,
    ConfigValueTypeString,
    ConfigValueTypeArray,
};

@interface ConfigDescriptor : NSObject
@property (nonatomic, copy)   NSString       *key;
@property (nonatomic, assign) ConfigValueType type;
@property (nonatomic, strong) id              defaultValue;

/// 统一工厂方法
/// @param key          配置键名
/// @param type         值类型枚举
/// @param defaultValue 默认值
+ (instancetype)itemWithKey:(NSString *)key
                       type:(ConfigValueType)type
                    default:(id)defaultValue;
@end