@interface WCFinderLandScapePushParams : NSObject
{
    BOOL _forbidCheckLimitMode; // +0x8
    BOOL _isInsideFinder; // +0x9
    BOOL _needPausePlayWhenViewWillDisappear; // +0xa
    BOOL _canShowContinuePlayTips; // +0xb
    BOOL _ignoreUpdateContextId; // +0xc
    BOOL _allowScaleAspectFit; // +0xd
    BOOL _landScapeViewPreFetchContinuePlayFeed; // +0xe
    BOOL _enterFromMinimize; // +0xf
    int _getRelatedListScene; // +0x10
    NSString * _reportExtraInfo; // +0x18
    NSString * _firstFeedSessionBuf; // +0x20
    long long _autoMinimizeValue; // +0x28
    long long _autoPip; // +0x30
    NSString * _playSessionId; // +0x38
    NSString * _fromSessionId; // +0x40
}
+ (id)createWithReportExtraInfo:(id)arg1;
- (id)init;
- (BOOL)autoMinimize;
- (BOOL)autoStaticMinimize;
- (BOOL)autoVideoMinimize;
- (id)reportExtraInfo;
- (void)setReportExtraInfo:(id)arg1;
- (BOOL)forbidCheckLimitMode;
- (void)setForbidCheckLimitMode:(BOOL)arg1;
- (BOOL)isInsideFinder;
- (void)setIsInsideFinder:(BOOL)arg1;
- (id)firstFeedSessionBuf;
- (void)setFirstFeedSessionBuf:(id)arg1;
- (BOOL)needPausePlayWhenViewWillDisappear;
- (void)setNeedPausePlayWhenViewWillDisappear:(BOOL)arg1;
- (BOOL)canShowContinuePlayTips;
- (void)setCanShowContinuePlayTips:(BOOL)arg1;
- (BOOL)ignoreUpdateContextId;
- (void)setIgnoreUpdateContextId:(BOOL)arg1;
- (BOOL)allowScaleAspectFit;
- (void)setAllowScaleAspectFit:(BOOL)arg1;
- (BOOL)landScapeViewPreFetchContinuePlayFeed;
- (void)setLandScapeViewPreFetchContinuePlayFeed:(BOOL)arg1;
- (long long)autoMinimizeValue;
- (void)setAutoMinimizeValue:(long long)arg1;
- (BOOL)enterFromMinimize;
- (void)setEnterFromMinimize:(BOOL)arg1;
- (long long)autoPip;
- (void)setAutoPip:(long long)arg1;
- (id)playSessionId;
- (void)setPlaySessionId:(id)arg1;
- (int)getRelatedListScene;
- (void)setGetRelatedListScene:(int)arg1;
- (id)fromSessionId;
- (void)setFromSessionId:(id)arg1;
- (void).cxx_destruct;
@end
