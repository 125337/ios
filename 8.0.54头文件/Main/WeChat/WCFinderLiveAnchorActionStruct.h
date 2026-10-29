@interface WCFinderLiveAnchorActionStruct : NSObject
{
    BOOL _isPrivateAccount; // +0x8
    int _screenType; // +0xc
    NSString * _finderUserName; // +0x10
    NSString * _finderWxAppInfo; // +0x18
    NSString * _sessionId; // +0x20
    unsigned long long _actionTS; // +0x28
    unsigned long long _liveId; // +0x30
    NSString * _finderFeedId; // +0x38
    NSString * _liveTopic; // +0x40
    unsigned long long _liveTime; // +0x48
    unsigned long long _likeCount; // +0x50
    unsigned long long _onlineCount; // +0x58
    unsigned long long _actionType; // +0x60
    NSString * _actionResult; // +0x68
    NSMutableDictionary * _actionResults; // +0x70
    unsigned long long _startSourceScene; // +0x78
    NSString * _chnlExtra; // +0x80
}
- (id)actionResults;
- (id)toReport;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)finderWxAppInfo;
- (void)setFinderWxAppInfo:(id)arg1;
- (BOOL)isPrivateAccount;
- (void)setIsPrivateAccount:(BOOL)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)actionTS;
- (void)setActionTS:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)finderFeedId;
- (void)setFinderFeedId:(id)arg1;
- (id)liveTopic;
- (void)setLiveTopic:(id)arg1;
- (unsigned long long)liveTime;
- (void)setLiveTime:(unsigned long long)arg1;
- (unsigned long long)likeCount;
- (void)setLikeCount:(unsigned long long)arg1;
- (unsigned long long)onlineCount;
- (void)setOnlineCount:(unsigned long long)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (id)actionResult;
- (void)setActionResult:(id)arg1;
- (void)setActionResults:(id)arg1;
- (unsigned long long)startSourceScene;
- (void)setStartSourceScene:(unsigned long long)arg1;
- (id)chnlExtra;
- (void)setChnlExtra:(id)arg1;
- (int)screenType;
- (void)setScreenType:(int)arg1;
- (void).cxx_destruct;
@end

