@interface WCMomentsJumpData : NSObject
{
    long long _jumpDst; // +0x8
    long long _feedFoldType; // +0x10
    long long _jumpScene; // +0x18
    long long _isWsBlock; // +0x20
    long long _isWs; // +0x28
    NSString * _snsSessionId; // +0x30
    NSString * _snsObjectType; // +0x38
    NSString * _snsUserName; // +0x40
    NSString * _snsPublishId; // +0x48
}
- (long long)jumpDst;
- (void)setJumpDst:(long long)arg1;
- (long long)feedFoldType;
- (void)setFeedFoldType:(long long)arg1;
- (long long)jumpScene;
- (void)setJumpScene:(long long)arg1;
- (long long)isWsBlock;
- (void)setIsWsBlock:(long long)arg1;
- (long long)isWs;
- (void)setIsWs:(long long)arg1;
- (id)snsSessionId;
- (void)setSnsSessionId:(id)arg1;
- (id)snsObjectType;
- (void)setSnsObjectType:(id)arg1;
- (id)snsUserName;
- (void)setSnsUserName:(id)arg1;
- (id)snsPublishId;
- (void)setSnsPublishId:(id)arg1;
- (void).cxx_destruct;
@end
