@interface WCFinderStreamProfileHeadData : NSObject <WCFinderRedDotExt, WCFinderTopicDataKeyExt, WCFinderLiveExt, WCFinderStreamProfileExt, WCFinderStreamProfileSubViewModelProtocol>
{
    WCFinderStreamProfileExtInfo * _extInfo; // +0x8
    MMFinderProfileLiveNoticeContext * _liveNoticeContext; // +0x10
    BOOL _isAuthor; // +0x18
    BOOL _displayLimitModeContent; // +0x19
    BOOL _isSignatureExpanded; // +0x1a
    BOOL _postEntryOnHeader; // +0x1b
    BOOL _displayNewLife; // +0x1c
    BOOL _useHeaderCGI; // +0x1d
    BOOL _useHomeCGI; // +0x1e
    BOOL _useLightData; // +0x1f
    BOOL _useServerShowAllBtnFlag; // +0x20
    BOOL _supportPullingPage; // +0x21
    BOOL _showWXProfileChecker; // +0x22
    BOOL _hasRedPacketEventEntrance; // +0x23
    int _currentCommentScene; // +0x24
    int _reportScene; // +0x28
    id <WCFinderStreamProfileHeadDataDelegate> _delegate; // +0x30
    id <WCFinderStreamProfileHeadDataVCDelegate> _coverDelegate; // +0x38
    NSString * _username; // +0x40
    WCFinderContact * _contact; // +0x48
    NSString * _dataScene; // +0x50
    WCFinderPushProfileParams * _params; // +0x58
    UIColor * _coverThemeColor; // +0x60
    UIColor * _coverAndMaskColor; // +0x68
    UIColor * _displayThemeBGColor; // +0x70
    WCFinderSteamProfileHeaderTheme * _theme; // +0x78
    WCFinderFriendsAlsoFollowViewModel * _followRecommend; // +0x80
    AnyPromise * _identityInfoPromise; // +0x88
    AnyPromise * _publicInfoPromise; // +0x90
    WCFinderDataItem * _liveDataItem; // +0x98
    long long _tabPreloadFlag; // +0xa0
    WCFinderProfileADPlugin * _adplugin; // +0xa8
    id <WCFinderProfilePullableFeedViewModel> _sharedFeedModel; // +0xb0
    id <WCFinderProfilePullableFeedViewModel> _pullableFeedModel; // +0xb8
    id /* block */ _feedMapper; // +0xc0
    long long _showInWXProfileCheckBoxState; // +0xc8
    WCFinderJustWatchContoller * _justWatchCtrl; // +0xd0
    NSNumber * _hasExposeJustWatchWhenEnter; // +0xd8
    WCFinderProfileRenderProfile * _renderProfile; // +0xe0
    NSString * _cacheSourceFeedSessionBuffer; // +0xe8
}
+ (id)coverMaskColor;
- (id)init;
- (id)initWithUsername:(id)arg1 params:(id)arg2 isAuthor:(BOOL)arg3;
- (id)extKey;
- (void)dealloc;
- (BOOL)moreActionJumpFinderSetting;
- (BOOL)shouldShowRedBadgeForMoreAction;
- (BOOL)shouldShowBanner;
- (BOOL)isSelf;
- (BOOL)isBelongMyFinderContact;
- (id)userMessage;
- (BOOL)canFollow;
- (BOOL)enablePost;
- (BOOL)showPostInHeader;
- (BOOL)shouldShowMemberZone;
- (void)hideCoverMask;
- (void)updateShowInWXProfileCheckerFirstTime;
- (void)updateShowInWXProfileCheckBodxState;
- (void)setShowInWXProfileCheckBoxState:(long long)arg1;
- (BOOL)showThinkRedPacketEvent;
- (void)setExtInfo:(id)arg1;
- (void)onExtInfoChangeFromOld:(id)arg1 toExtInfo:(id)arg2;
- (id)cover;
- (BOOL)displayCover;
- (void)setCover:(id)arg1;
- (void)setCoverThemeColor:(id)arg1;
- (id)displayThemeBGColor;
- (void)notifyCoverChanged:(id)arg1;
- (void)safeCallDelegateNotifyCoverChanged:(long long)arg1;
- (id)olympicsJumpInfo;
- (id)liveNoticeContext;
- (BOOL)isGroupFinder;
- (id)clubInfo;
- (void)onProfileExtInfoChanged;
- (void)onContactDidUpdate;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (BOOL)filterRedDotPath:(id)arg1;
- (void)requestFollowRecommend:(id /* block */)arg1;
- (long long)feedCGIFlag;
- (id)sourceFeedSessionBuffer;
- (void)deletefinderEventWithEventId:(id)arg1;
- (void)notifyChanged;
- (void)doNotifyChanged;
- (void)onFinderLiveDidRevokeNoticeInfo:(id)arg1;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 didChangeReservedState:(unsigned long long)arg2 withNoticeIds:(id)arg3 failureNoticeIds:(id)arg4 opType:(unsigned long long)arg5 aggregateType:(unsigned int)arg6;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(BOOL)arg2 noticeId:(id)arg3;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(BOOL)arg2 noticeId:(id)arg3 aggregateType:(unsigned int)arg4;
- (void)modUserShowFinderInWXProfile:(BOOL)arg1;
- (void)modUserShowFinderInWXProfile:(BOOL)arg1 failure:(id /* block */)arg2;
- (void)onProfileExtInfoCoverChanged:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)coverDelegate;
- (void)setCoverDelegate:(id)arg1;
- (BOOL)isAuthor;
- (void)setIsAuthor:(BOOL)arg1;
- (BOOL)displayLimitModeContent;
- (void)setDisplayLimitModeContent:(BOOL)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)extInfo;
- (int)currentCommentScene;
- (void)setCurrentCommentScene:(int)arg1;
- (id)dataScene;
- (void)setDataScene:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (id)coverThemeColor;
- (id)coverAndMaskColor;
- (void)setCoverAndMaskColor:(id)arg1;
- (void)setDisplayThemeBGColor:(id)arg1;
- (BOOL)isSignatureExpanded;
- (void)setIsSignatureExpanded:(BOOL)arg1;
- (id)theme;
- (void)setTheme:(id)arg1;
- (id)followRecommend;
- (void)setFollowRecommend:(id)arg1;
- (BOOL)postEntryOnHeader;
- (void)setPostEntryOnHeader:(BOOL)arg1;
- (id)identityInfoPromise;
- (void)setIdentityInfoPromise:(id)arg1;
- (id)publicInfoPromise;
- (void)setPublicInfoPromise:(id)arg1;
- (id)liveDataItem;
- (void)setLiveDataItem:(id)arg1;
- (BOOL)displayNewLife;
- (void)setDisplayNewLife:(BOOL)arg1;
- (BOOL)useHeaderCGI;
- (void)setUseHeaderCGI:(BOOL)arg1;
- (BOOL)useHomeCGI;
- (void)setUseHomeCGI:(BOOL)arg1;
- (BOOL)useLightData;
- (void)setUseLightData:(BOOL)arg1;
- (long long)tabPreloadFlag;
- (void)setTabPreloadFlag:(long long)arg1;
- (BOOL)useServerShowAllBtnFlag;
- (void)setUseServerShowAllBtnFlag:(BOOL)arg1;
- (id)adplugin;
- (void)setAdplugin:(id)arg1;
- (id)sharedFeedModel;
- (void)setSharedFeedModel:(id)arg1;
- (id)pullableFeedModel;
- (void)setPullableFeedModel:(id)arg1;
- (id /* block */)feedMapper;
- (void)setFeedMapper:(id /* block */)arg1;
- (long long)showInWXProfileCheckBoxState;
- (id)justWatchCtrl;
- (void)setJustWatchCtrl:(id)arg1;
- (id)hasExposeJustWatchWhenEnter;
- (void)setHasExposeJustWatchWhenEnter:(id)arg1;
- (BOOL)supportPullingPage;
- (void)setSupportPullingPage:(BOOL)arg1;
- (id)renderProfile;
- (void)setRenderProfile:(id)arg1;
- (BOOL)showWXProfileChecker;
- (void)setShowWXProfileChecker:(BOOL)arg1;
- (BOOL)hasRedPacketEventEntrance;
- (void)setHasRedPacketEventEntrance:(BOOL)arg1;
- (id)cacheSourceFeedSessionBuffer;
- (void)setCacheSourceFeedSessionBuffer:(id)arg1;
- (void).cxx_destruct;
@end

