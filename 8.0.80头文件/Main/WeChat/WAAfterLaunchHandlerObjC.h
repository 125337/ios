@interface WAAfterLaunchHandlerObjC : NSObject
{
    BOOL _waitingResponse; // +0x8
    unsigned int _wxaagentEntranceFlag; // +0xc
    unsigned int _debugModeType; // +0x10
    unsigned int _appVersion; // +0x14
    id <WAAfterLaunchHandlerDelegate> _delegate; // +0x18
    NSString * _appId; // +0x20
    NSString * _recommendDishBuffer; // +0x28
    long long _devUin; // +0x30
}
- (id)initWithAppId:(id)arg1 debugModeType:(unsigned int)arg2 appVersion:(unsigned int)arg3 devUin:(long long)arg4;
- (void)fetchData;
- (BOOL)handleCommentDishTips:(id)arg1;
- (void)handleCommentInfo:(id)arg1;
- (id)wxaagentEntranceFlagKey;
- (unsigned int)loadCachedWxaagentEntranceFlag;
- (void)saveCachedWxaagentEntranceFlag:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)waitingResponse;
- (void)setWaitingResponse:(BOOL)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)recommendDishBuffer;
- (void)setRecommendDishBuffer:(id)arg1;
- (unsigned int)wxaagentEntranceFlag;
- (void)setWxaagentEntranceFlag:(unsigned int)arg1;
- (unsigned int)debugModeType;
- (void)setDebugModeType:(unsigned int)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (long long)devUin;
- (void)setDevUin:(long long)arg1;
- (void).cxx_destruct;
@end
