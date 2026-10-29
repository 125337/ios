@interface LiteEffectItem : NSObject
{
    long long _type; // +0x8
    NSString * _url; // +0x10
    MMITransmitKvData * _data; // +0x18
}
- (long long)type;
- (void)setType:(long long)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
