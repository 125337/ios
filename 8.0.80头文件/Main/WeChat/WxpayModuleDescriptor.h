@interface WxpayModuleDescriptor : NSObject
{
    NSDictionary * _methodsByName; // +0x8
    NSString * _name; // +0x10
    NSArray * _methods; // +0x18
}
+ (id)descriptorWithName:(id)arg1 methods:(id)arg2;
- (id)initInternal;
- (id)methodNamed:(id)arg1;
- (id)name;
- (id)methods;
- (void).cxx_destruct;
@end
