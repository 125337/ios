@interface WCFinderLiveFeedVM : NSObject
{
    BOOL _hasEnteredLive; // +0x8
    BOOL _clickRotatingToPortrait; // +0x9
    int _refCommentScene; // +0xc
    int _scene; // +0x10
    WCFinderPushFeedViewLiveParams * _liveParams; // +0x18
    unsigned long long _landScapeEnterType; // +0x20
    unsigned long long _landscapeStartTimeInMs; // +0x28
    WCFinderLiveFeedVMSearchComponentExtra * _searchComponentExtra; // +0x30
    WCFinderDataItem * _dataItem; // +0x38
    NSString * _sessionExtraKey; // +0x40
    MMFinderLiveFeedDataLogic * _feedDataLogic; // +0x48
}
- (id)initWithDataItem:(id)arg1 scene:(int)arg2 sessionExtraKey:(id)arg3;
- (id)toLiveContentVM;
- (id)liveInfo;
- (void)bindFeedDataLogic:(id)arg1;
- (void)reJoinLiveAfterIdentitySwitchWithCompletion:(id /* block */)arg1;
- (BOOL)enableShowFeedBarrageSwitch;
- (BOOL)currentUserFeedBarrageSwitch;
- (void)updateUserEnableFeedBarrage:(BOOL)arg1;
- (void)reportClickRotateToPortrait;
- (void)reportLandscapeStart;
- (void)reportLandscapeEnd;
- (id)liveParams;
- (void)setLiveParams:(id)arg1;
- (BOOL)hasEnteredLive;
- (void)setHasEnteredLive:(BOOL)arg1;
- (unsigned long long)landScapeEnterType;
- (void)setLandScapeEnterType:(unsigned long long)arg1;
- (unsigned long long)landscapeStartTimeInMs;
- (void)setLandscapeStartTimeInMs:(unsigned long long)arg1;
- (id)searchComponentExtra;
- (int)refCommentScene;
- (void)setRefCommentScene:(int)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)sessionExtraKey;
- (void)setSessionExtraKey:(id)arg1;
- (id)feedDataLogic;
- (void)setFeedDataLogic:(id)arg1;
- (BOOL)clickRotatingToPortrait;
- (void)setClickRotatingToPortrait:(BOOL)arg1;
- (void).cxx_destruct;
@end
