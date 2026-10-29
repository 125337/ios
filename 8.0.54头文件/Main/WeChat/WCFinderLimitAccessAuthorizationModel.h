@interface WCFinderLimitAccessAuthorizationModel : NSObject
{
    NSString * _encrytedObjectidTid; // +0x8
    UINavigationController * _navVC; // +0x10
    unsigned long long _shareScene; // +0x18
    NSMutableDictionary * _paraDic; // +0x20
    WCFinderPushFeedViewParams * _funcParams; // +0x28
    WCFinderShareListReportModel * _reportModel; // +0x30
    unsigned long long _entryCardType; // +0x38
    NSString * _feedId; // +0x40
    NSString * _nonceId; // +0x48
    NSString * _bizKey; // +0x50
    MMFinderLiveRouterParams * _liveParams; // +0x58
}
- (id)initWithFeedID:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 enterScene:(unsigned long long)arg4 customParam:(id)arg5 functionalParams:(id)arg6 reportModel:(id)arg7 cardType:(unsigned long long)arg8;
- (id)initWithEncrytedObjectidTid:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 enterScene:(unsigned long long)arg4 customParam:(id)arg5 functionalParams:(id)arg6 reportModel:(id)arg7 cardType:(unsigned long long)arg8;
- (id)encrytedObjectidTid;
- (void)setEncrytedObjectidTid:(id)arg1;
- (id)navVC;
- (void)setNavVC:(id)arg1;
- (unsigned long long)shareScene;
- (void)setShareScene:(unsigned long long)arg1;
- (id)paraDic;
- (void)setParaDic:(id)arg1;
- (id)funcParams;
- (void)setFuncParams:(id)arg1;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (unsigned long long)entryCardType;
- (void)setEntryCardType:(unsigned long long)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)bizKey;
- (void)setBizKey:(id)arg1;
- (id)liveParams;
- (void)setLiveParams:(id)arg1;
- (void).cxx_destruct;
@end

