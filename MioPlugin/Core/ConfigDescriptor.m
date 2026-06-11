#import "ConfigDescriptor.h"

@implementation ConfigDescriptor

+ (instancetype)itemWithKey:(NSString *)key
                       type:(ConfigValueType)type
                    default:(id)defaultValue {
    ConfigDescriptor *desc = [[ConfigDescriptor alloc] init];
    desc.key = key;
    desc.type = type;
    desc.defaultValue = defaultValue;
    return desc;
}

@end