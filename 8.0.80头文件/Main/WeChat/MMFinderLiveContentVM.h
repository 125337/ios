@interface MMFinderLiveContentVM : NSObject <WCCommitViewResultDelegate, ForwardMessageLogicDelegate, TextStatePublishViewControllerDelegate, SharePreConfirmSheetViewDelegate>
{
    BOOL _isRead; // +0x8
    BOOL _canNotRouteReplayView; // +0x9
    BOOL _joinTeamStatusChanged; // +0xa
    BOOL _assumeReplayAndGoToStopgap; // +0xb
    BOOL _isConnectMicEnter; // +0xc
    BOOL _isCertificateType; // +0xd
    BOOL _useABRCfg; // +0xe
    BOOL _disableInteractiveToMinimizeWindow; // +0xf
    BOOL _rotateEnabled; // +0x10
    BOOL _isAlternativeSource; // +0x11
    unsigned int _selectiveGoQrScenario; // +0x14
    int _mixedFlowType; // +0x18
    unsigned int _pendingMicInviteScene; // +0x1c
    unsigned int _pendingMicInviteSeatId; // +0x20
    WCFinderDataItem * _dataItem; // +0x28
    WCFinderContact * _contact; // +0x30
    NSString * _sessionExtraKey; // +0x38
    NSString * _customTransitionKey; // +0x40
    unsigned long long _refObjectID; // +0x48
    MMFinderRefSessionBufferKey * _refSessionBufferKey; // +0x50
    NSString * _finderForwardSource; // +0x58
    NSString * _tmpEntryScene; // +0x60
    NSString * _srcUrl; // +0x68
    NSString * _sourceLiteAppId; // +0x70
    WCFinderFullShareListTemplatePlugin * _jsapiPlugin; // +0x78
    id _userInfo; // +0x80
    MMLiveEnterRoomActionModel * _enterActionModel; // +0x88
    FinderLiveAppMsgLiveRewardInfo * _rewardInfo; // +0x90
    NSString * _liveReplayEntryType; // +0x98
    MMFinderLiveNotifyBannerReportInfo * _notifyBannerReportInfo; // +0xa0
    NSString * _entranceQRCodeURL; // +0xa8
    unsigned long long _adFlag; // +0xb0
    FinderObjectAdvertisementInfo * _adInfo; // +0xb8
    unsigned long long _shoppingProductId; // +0xc0
    unsigned long long _fromSource; // +0xc8
    NSMutableArray * _guideAdInfos; // +0xd0
    FinderLiveGuideFollowAdInfo * _followGuideInfo; // +0xd8
    NSString * _notifyReportExtInfo; // +0xe0
    WCFinderShareEntranceMessageInfo * _entranceMessageInfo; // +0xe8
    NSString * _entranceMicInviteShareCardBuffer; // +0xf0
    NSString * _entranceShareUsername; // +0xf8
    NSString * _entranceFromChatroomId; // +0x100
    unsigned long long _enterSessionId; // +0x108
    WCFinderFeedLiveCellRouterModel * _feedModel; // +0x110
    NSString * _instantDiscountActivityKey; // +0x118
    NSArray * _backupFeeds; // +0x120
    NSString * _enterTid; // +0x128
    NSData * _openLiveH5Buffer; // +0x130
    WCFinderPushFeedViewLiveParams * _liveParams; // +0x138
    ForwardMessageLogicController * _forwardLogic; // +0x140
    SharePreConfirmSheetView * _sharePreConfirmSheetView; // +0x148
    SessionForwardRecordLogic * _forwardRecordLogic; // +0x150
    unsigned long long _temporaryObjectId; // +0x158
    NSString * _temporaryNonceId; // +0x160
    MMFinderLiveTaskId * _pendingMicInviteLiveTaskId; // +0x168
    id /* block */ _sharePreConfirmSheetSendCallback; // +0x170
}
+ (id)contentVMWithDataItem:(id)arg1;
+ (BOOL)newTypeForwardConfirmBar;
- (id)initWithDataItem:(id)arg1 sessionExtraKey:(id)arg2;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 objectId:(unsigned long long)arg2 nonceId:(id)arg3;
- (void)dealloc;
- (void)clearJSApiInfo;
- (BOOL)isAnchor;
- (BOOL)isAnchorSecondaryDevice;
- (id)guideAdInfos;
- (unsigned long long)objectID;
- (id)tid;
- (id)nonceId;
- (BOOL)needPlayOpenScreenAd;
- (id)customTransitionKey;
- (BOOL)disableShareToConversationByPermissionFlag;
- (BOOL)disableShareToMomentByPermissionFlag;
- (BOOL)disableShareToStateByPermissionFlag;
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
- (void)shareToFriends:(id)arg1 fromVC:(id)arg2 withShareScene:(long long)arg3 sendCallback:(id /* block */)arg4;
- (void)shareMicInviteCardToFriend:(id)arg1 fromVC:(id)arg2 liveTaskId:(id)arg3 inviteScene:(unsigned int)arg4 inviteSeatId:(unsigned int)arg5 sendCallback:(id /* block */)arg6;
- (id)getFinderShareToFriendMessageWrapWithExtra:(id)arg1 shareScene:(long long)arg2;
- (void)shareLiveAndGoodsToFriends:(id)arg1;
- (id)makeShareImageMsgSourceUrl;
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
- (void)showForwardSuccessSnackBarWithArrContacts:(id)arg1 wxUsernameArray:(id)arg2;
- (void)sendSharePreConfirmWithArrMsgs:(id)arg1 arrContacts:(id)arg2 bGroupUndoneFlag:(BOOL)arg3 inputText:(id)arg4;
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
- (BOOL)isCertificateType;
- (void)setIsCertificateType:(BOOL)arg1;
- (id)entranceMessageInfo;
- (void)setEntranceMessageInfo:(id)arg1;
- (id)entranceMicInviteShareCardBuffer;
- (void)setEntranceMicInviteShareCardBuffer:(id)arg1;
- (id)entranceShareUsername;
- (void)setEntranceShareUsername:(id)arg1;
- (id)entranceFromChatroomId;
- (void)setEntranceFromChatroomId:(id)arg1;
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
- (int)mixedFlowType;
- (void)setMixedFlowType:(int)arg1;
- (id)enterTid;
- (void)setEnterTid:(id)arg1;
- (id)openLiveH5Buffer;
- (void)setOpenLiveH5Buffer:(id)arg1;
- (BOOL)isAlternativeSource;
- (void)setIsAlternativeSource:(BOOL)arg1;
- (id)liveParams;
- (void)setLiveParams:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (id)sharePreConfirmSheetView;
- (void)setSharePreConfirmSheetView:(id)arg1;
- (id)forwardRecordLogic;
- (void)setForwardRecordLogic:(id)arg1;
- (unsigned long long)temporaryObjectId;
- (void)setTemporaryObjectId:(unsigned long long)arg1;
- (id)temporaryNonceId;
- (void)setTemporaryNonceId:(id)arg1;
- (id)pendingMicInviteLiveTaskId;
- (void)setPendingMicInviteLiveTaskId:(id)arg1;
- (unsigned int)pendingMicInviteScene;
- (void)setPendingMicInviteScene:(unsigned int)arg1;
- (unsigned int)pendingMicInviteSeatId;
- (void)setPendingMicInviteSeatId:(unsigned int)arg1;
- (id /* block */)sharePreConfirmSheetSendCallback;
- (void)setSharePreConfirmSheetSendCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
