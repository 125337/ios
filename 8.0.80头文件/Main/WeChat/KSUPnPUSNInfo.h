@interface KSUPnPUSNInfo : NSObject
{
    NSString * _USN; // +0x8
    NSString * _UUID; // +0x10
    long long _category; // +0x18
    NSString * _type; // +0x20
    NSString * _version; // +0x28
}
- (id)initWithUSN:(id)arg1;
- (BOOL)parseUSN:(id)arg1;
- (BOOL)_parseComponent:(id)arg1 prefix:(id)arg2 valueParts:(id *)arg3;
- (id)USN;
- (id)UUID;
- (long long)category;
- (id)type;
- (id)version;
- (void).cxx_destruct;
@end
