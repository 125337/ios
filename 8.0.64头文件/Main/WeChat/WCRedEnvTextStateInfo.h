@interface WCRedEnvTextStateInfo : NSObject
{
    BOOL _isExclusive; // +0x8
    BOOL _enableSetState; // +0x9
    NSString * _senderUsername; // +0x10
    NSString * _receiverUsername; // +0x18
    long long _amount; // +0x20
    NSString * _wishing; // +0x28
    NSString * _pagName; // +0x30
    NSString * _videoUrl; // +0x38
    NSString * _videoThumbUrl; // +0x40
    long long _videoWidth; // +0x48
    long long _videoHeight; // +0x50
    NSString * _verifyInfo; // +0x58
    NSString * _sourceName; // +0x60
}
- (id)senderUsername;
- (void)setSenderUsername:(id)arg1;
- (id)receiverUsername;
- (void)setReceiverUsername:(id)arg1;
- (BOOL)isExclusive;
- (void)setIsExclusive:(BOOL)arg1;
- (long long)amount;
- (void)setAmount:(long long)arg1;
- (id)wishing;
- (void)setWishing:(id)arg1;
- (id)pagName;
- (void)setPagName:(id)arg1;
- (BOOL)enableSetState;
- (void)setEnableSetState:(BOOL)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)videoThumbUrl;
- (void)setVideoThumbUrl:(id)arg1;
- (long long)videoWidth;
- (void)setVideoWidth:(long long)arg1;
- (long long)videoHeight;
- (void)setVideoHeight:(long long)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (id)sourceName;
- (void)setSourceName:(id)arg1;
- (void).cxx_destruct;
@end
