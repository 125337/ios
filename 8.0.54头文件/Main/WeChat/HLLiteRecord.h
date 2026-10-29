@interface HLLiteRecord : NSObject
{
    unsigned long long _rid; // +0x8
    NSString * _data; // +0x10
}
- (unsigned long long)rid;
- (void)setRid:(unsigned long long)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end

