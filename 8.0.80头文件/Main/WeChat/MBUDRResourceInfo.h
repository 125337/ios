@interface MBUDRResourceInfo : NSObject
{
    NSString * _path; // +0x8
    unsigned long long _version; // +0x10
}
- (id)initWithPath:(id)arg1 version:(unsigned long long)arg2;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
