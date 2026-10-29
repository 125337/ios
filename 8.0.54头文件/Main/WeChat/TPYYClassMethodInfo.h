@interface TPYYClassMethodInfo : NSObject
{
    objc_method * _method; // +0x8
    NSString * _name; // +0x10
    SEL _sel; // +0x18
    void * * _imp; // +0x20
    NSString * _typeEncoding; // +0x28
    NSString * _returnTypeEncoding; // +0x30
    NSArray * _argumentTypeEncodings; // +0x38
}
- (id)initWithMethod:(objc_method *)arg1;
- (objc_method *)method;
- (id)name;
- (SEL)sel;
- (void * *)imp;
- (id)typeEncoding;
- (id)returnTypeEncoding;
- (id)argumentTypeEncodings;
- (void).cxx_destruct;
@end

