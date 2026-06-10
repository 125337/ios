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

+ (instancetype)boolItem:(NSString *)key default:(NSNumber *)defaultValue;
+ (instancetype)integerItem:(NSString *)key default:(NSNumber *)defaultValue;
+ (instancetype)floatItem:(NSString *)key default:(NSNumber *)defaultValue;
+ (instancetype)stringItem:(NSString *)key default:(NSString *)defaultValue;
+ (instancetype)arrayItem:(NSString *)key default:(NSArray *)defaultValue;
@end