@interface SessionDataStruct : NSObject
{
    NSString * _sid; // +0x8
    unsigned long long _enterTimeMs; // +0x10
}
- (id)sid;
- (void)setSid:(id)arg1;
- (unsigned long long)enterTimeMs;
- (void)setEnterTimeMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

