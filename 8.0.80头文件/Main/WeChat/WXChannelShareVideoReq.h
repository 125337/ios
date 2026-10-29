@interface WXChannelShareVideoReq : BaseReq
{
    NSString * _localIdentifier; // +0x18
    NSData * _extData; // +0x20
}
+ (id)object;
- (id)localIdentifier;
- (void)setLocalIdentifier:(id)arg1;
- (id)extData;
- (void)setExtData:(id)arg1;
- (void).cxx_destruct;
@end
