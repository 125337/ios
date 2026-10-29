@interface TPYYClassIvarInfo : NSObject
{
    objc_ivar * _ivar; // +0x8
    NSString * _name; // +0x10
    long long _offset; // +0x18
    NSString * _typeEncoding; // +0x20
    unsigned long long _type; // +0x28
}
- (id)initWithIvar:(objc_ivar *)arg1;
- (objc_ivar *)ivar;
- (id)name;
- (long long)offset;
- (id)typeEncoding;
- (unsigned long long)type;
- (void).cxx_destruct;
@end

