@interface TPYYClassPropertyInfo : NSObject
{
    objc_property * _property; // +0x8
    NSString * _name; // +0x10
    unsigned long long _type; // +0x18
    NSString * _typeEncoding; // +0x20
    NSString * _ivarName; // +0x28
    Class _cls; // +0x30
    NSArray * _protocols; // +0x38
    SEL _getter; // +0x40
    SEL _setter; // +0x48
}
- (id)initWithProperty:(objc_property *)arg1;
- (objc_property *)property;
- (id)name;
- (unsigned long long)type;
- (id)typeEncoding;
- (id)ivarName;
- (Class)cls;
- (id)protocols;
- (SEL)getter;
- (SEL)setter;
- (void).cxx_destruct;
@end
