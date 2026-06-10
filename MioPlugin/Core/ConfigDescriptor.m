#import "ConfigDescriptor.h"

@implementation ConfigDescriptor

+ (instancetype)boolItem:(NSString *)key default:(NSNumber *)defaultValue {
    ConfigDescriptor *desc = [[ConfigDescriptor alloc] init];
    desc.key = key;
    desc.type = ConfigValueTypeBool;
    desc.defaultValue = defaultValue;
    return desc;
}

+ (instancetype)integerItem:(NSString *)key default:(NSNumber *)defaultValue {
    ConfigDescriptor *desc = [[ConfigDescriptor alloc] init];
    desc.key = key;
    desc.type = ConfigValueTypeInteger;
    desc.defaultValue = defaultValue;
    return desc;
}

+ (instancetype)floatItem:(NSString *)key default:(NSNumber *)defaultValue {
    ConfigDescriptor *desc = [[ConfigDescriptor alloc] init];
    desc.key = key;
    desc.type = ConfigValueTypeFloat;
    desc.defaultValue = defaultValue;
    return desc;
}

+ (instancetype)stringItem:(NSString *)key default:(NSString *)defaultValue {
    ConfigDescriptor *desc = [[ConfigDescriptor alloc] init];
    desc.key = key;
    desc.type = ConfigValueTypeString;
    desc.defaultValue = defaultValue;
    return desc;
}

+ (instancetype)arrayItem:(NSString *)key default:(NSArray *)defaultValue {
    ConfigDescriptor *desc = [[ConfigDescriptor alloc] init];
    desc.key = key;
    desc.type = ConfigValueTypeArray;
    desc.defaultValue = defaultValue;
    return desc;
}

@end