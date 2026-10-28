@interface MMFinderLiveContentVM : NSObject <WCCommitViewResultDelegate, ForwardMessageLogicDelegate, TextStatePublishViewControllerDelegate, SharePreConfirmSheetViewDelegate>
{
    BOOL _isRead; // +0x8
    BOOL _canNotRouteReplayView; // +0x9
    BOOL _joinTeamStatusChanged; // +0xa
    BOOL _assumeReplayAndGoToStopgap; // +0xb
    BOOL _isConnectMicEnter; // +0xc
    BOOL _useABRCfg; // +0xd
    BOOL _disableInteractiveToMinimizeWindow; // +0xe
    BOOL _rotateEnabled; // +0xf
    BOOL _isCertificateType; // +0x10
    unsigned int _selectiveGoQrScenario; // +0x14
    WCFinderDataItem * _dataItem; // +0x18
    WCFinderContact * _contact; // +0x20
    NSString * _sessionExtraKey; // +0x28
    NSString * _customTransitionKey; // +0x30
    unsigned long long _refObjectID; // +0x38
    MMFinderRefSessionBufferKey * _refSessionBufferKey; // +0x40
    NSString * _finderForwardSource; // +0x48
    NSString * _tmpEntryScene; // +0x50
    NSString * _srcUrl; // +0x58
    NSString * _sourceLiteAppId; // +0x60
    WCFinderFullShareListTemplatePlugin * _jsapiPlugin; // +0x68
    id _userInfo; // +0x70
    MMLiveEnterRoomActionModel * _enterActionModel; // +0x78
    FinderLiveAppMsgLiveRewardInfo * _rewardInfo; // +0x80
    NSString * _liveReplayEntryType; // +0x88
    MMFinderLiveNotifyBannerReportInfo * _notifyBannerReportInfo; // +0x90
    NSString * _entranceQRCodeURL; // +0x98
    unsigned long long _adFlag; // +0xa0
    FinderObjectAdvertisementInfo * _adInfo; // +0xa8
    unsigned long long _shoppingProductId; // +0xb0
    unsigned long long _fromSource; // +0xb8
    NSMutableArray * _guideAdInfos; // +0xc0
    FinderLiveGuideFollowAdInfo * _followGuideInfo; // +0xc8
    NSString * _notifyReportExtInfo; // +0xd0
    WCFinderShareEntranceMessageInfo * _entranceMessageInfo; // +0xd8
    unsigned long long _enterSessionId; // +0xe0
    WCFinderFeedLiveCellRouterModel * _feedModel; // +0xe8
    NSString * _instantDiscountActivityKey; // +0xf0
    NSArray * _backupFeeds; // +0xf8
    ForwardMessageLogicController * _forwardLogic; // +0x100
    SharePreConfirmSheetView * _sharePreConfirmSheetView; // +0x108
    SessionForwardRecordLogic * _forwardRecordLogic; // +0x110
    unsigned long long _temporaryObjectId; // +0x118
    NSString * _temporaryNonceId; // +0x120
}
+ (id)contentVMWithDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1 sessionExtraKey:(id)arg2;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 objectId:(unsigned long long)arg2 nonceId:(id)arg3;
- (void)dealloc;
- (void)clearJSApiInfo;
- (id)guideAdInfos;
- (unsigned long long)objectID;
- (id)tid;
- (id)nonceId;
- (BOOL)needPlayOpenScreenAd;
- (id)customTransitionKey;
- (BOOL)disableForwardByPrivateAccount;
- (BOOL)isSelfPrivate;
- (BOOL)isOpenLiveQuickShare;
- (unsigned int)currentContentInnerAppMsgType;
- (void)copyExtraInfoFrom:(id)arg1;
- (void)updateRotateEnabled:(BOOL)arg1;
- (void)shareToFriendWithParams:(id)arg1;
- (void)liveShareToMomentFromVC:(id)arg1 shareScene:(long long)arg2;
- (void)shareToMoment;
- (void)shareToMomentFromVC:(id)arg1;
- (void)shareToTextStateFromVC:(id)arg1 verifyInfo:(id)arg2;
- (void)shareToTextStateFromVC:(id)arg1 verifyInfo:(id)arg2 textStatusIconId:(id)arg3;
- (void)shareToTextStateFromVC:(id)arg1 verifyInfo:(id)arg2 textStatusIconId:(id)arg3 liveBanner:(BOOL)arg4;
- (void)shareToFriend:(id)arg1 fromVC:(id)arg2 withShareScene:(long long)arg3;
- (id)getFinderShareToFriendMessageWrapWithExtra:(id)arg1 shareScene:(long long)arg2;
- (void)shareLiveAndGoodsToFriends:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)onTextStatePublished;
- (void)onTextStatePublishCancelled;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewClose:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)sessionExtraKey;
- (void)setSessionExtraKey:(id)arg1;
- (BOOL)isRead;
- (void)setIsRead:(BOOL)arg1;
- (void)setCustomTransitionKey:(id)arg1;
- (unsigned long long)refObjectID;
- (void)setRefObjectID:(unsigned long long)arg1;
- (id)refSessionBufferKey;
- (void)setRefSessionBufferKey:(id)arg1;
- (id)finderForwardSource;
- (void)setFinderForwardSource:(id)arg1;
- (id)tmpEntryScene;
- (void)setTmpEntryScene:(id)arg1;
- (id)srcUrl;
- (void)setSrcUrl:(id)arg1;
- (id)sourceLiteAppId;
- (void)setSourceLiteAppId:(id)arg1;
- (id)jsapiPlugin;
- (void)setJsapiPlugin:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (BOOL)canNotRouteReplayView;
- (void)setCanNotRouteReplayView:(BOOL)arg1;
- (id)enterActionModel;
- (void)setEnterActionModel:(id)arg1;
- (BOOL)joinTeamStatusChanged;
- (void)setJoinTeamStatusChanged:(BOOL)arg1;
- (BOOL)assumeReplayAndGoToStopgap;
- (void)setAssumeReplayAndGoToStopgap:(BOOL)arg1;
- (id)rewardInfo;
- (void)setRewardInfo:(id)arg1;
- (id)liveReplayEntryType;
- (void)setLiveReplayEntryType:(id)arg1;
- (BOOL)isConnectMicEnter;
- (void)setIsConnectMicEnter:(BOOL)arg1;
- (id)notifyBannerReportInfo;
- (void)setNotifyBannerReportInfo:(id)arg1;
- (unsigned int)selectiveGoQrScenario;
- (void)setSelectiveGoQrScenario:(unsigned int)arg1;
- (id)entranceQRCodeURL;
- (void)setEntranceQRCodeURL:(id)arg1;
- (unsigned long long)adFlag;
- (void)setAdFlag:(unsigned long long)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (unsigned long long)shoppingProductId;
- (void)setShoppingProductId:(unsigned long long)arg1;
- (unsigned long long)fromSource;
- (void)setFromSource:(unsigned long long)arg1;
- (void)setGuideAdInfos:(id)arg1;
- (id)followGuideInfo;
- (void)setFollowGuideInfo:(id)arg1;
- (id)notifyReportExtInfo;
- (void)setNotifyReportExtInfo:(id)arg1;
- (id)entranceMessageInfo;
- (void)setEntranceMessageInfo:(id)arg1;
- (unsigned long long)enterSessionId;
- (void)setEnterSessionId:(unsigned long long)arg1;
- (id)feedModel;
- (void)setFeedModel:(id)arg1;
- (id)instantDiscountActivityKey;
- (void)setInstantDiscountActivityKey:(id)arg1;
- (BOOL)useABRCfg;
- (void)setUseABRCfg:(BOOL)arg1;
- (BOOL)disableInteractiveToMinimizeWindow;
- (void)setDisableInteractiveToMinimizeWindow:(BOOL)arg1;
- (id)backupFeeds;
- (void)setBackupFeeds:(id)arg1;
- (BOOL)rotateEnabled;
- (void)setRotateEnabled:(BOOL)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (id)sharePreConfirmSheetView;
- (void)setSharePreConfirmSheetView:(id)arg1;
- (id)forwardRecordLogic;
- (void)setForwardRecordLogic:(id)arg1;
- (BOOL)isCertificateType;
- (void)setIsCertificateType:(BOOL)arg1;
- (unsigned long long)temporaryObjectId;
- (void)setTemporaryObjectId:(unsigned long long)arg1;
- (id)temporaryNonceId;
- (void)setTemporaryNonceId:(id)arg1;
- (void).cxx_destruct;
@end
