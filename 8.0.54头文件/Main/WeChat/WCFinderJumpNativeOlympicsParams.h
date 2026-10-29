@interface WCFinderJumpNativeOlympicsParams : NSObject
{
    NSString * _liveNickname; // +0x8
    NSString * _liveUsername; // +0x10
    NSString * _byPassInfoString; // +0x18
    NSData * _byPassInfo; // +0x20
    long long _relayIndex; // +0x28
    NSString * _liveHeadUrl; // +0x30
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)byPassInfo;
- (id)liveNickname;
- (void)setLiveNickname:(id)arg1;
- (id)liveUsername;
- (void)setLiveUsername:(id)arg1;
- (id)byPassInfoString;
- (void)setByPassInfoString:(id)arg1;
- (void)setByPassInfo:(id)arg1;
- (long long)relayIndex;
- (void)setRelayIndex:(long long)arg1;
- (id)liveHeadUrl;
- (void)setLiveHeadUrl:(id)arg1;
- (void).cxx_destruct;
@end

