@interface BaseMsgContentLogicController : MMObject <MsgLoaderLogicDelegate, MMNewMultiSelectContactsViewControllerDelegate, ForwardMessageLogicDelegate, UIDocumentPickerDelegate, WCScheduleLogicControllerDelegate, VoiceAutoTranslateHelperDelegate, WCFileBrowseDelegate, AutoTranslateMsgDelegate, SendVerifyMsgViewControllerDelegate, BrandFinderLiveMgrExt, WCPayRevokeMsgControlLogicDelegate, BaseMsgContentDelgate, WCActionSheetDelegate, ImageControllerDelegate, contactInfoDelegate, UINavigationControllerDelegate, MessageObserverDelegate, TypingControllerDelgate, MsgDelegate, IMsgExt, ILinkEventExt, contactVerifyLogicDelegate, UrlControllerDelegate, IContactMgrExt, IMMNewSessionMgrExt, RecordControllerDelegate, WCActionSheetDelegate, ShareFriendOnChatDelegate, MFMailComposeViewControllerDelegate, MMPickLocationViewControllerDelegate, MMEasterEggControllerDelegate, IVOIPUILogicMgrExt, MMInputToolViewCustomizationDelegate, IWXTalkPresentExt, IWXTalkieExt, ITrackPresentExt, ITrackRoomMgrExt, MultiSelectContollerDelegate, ViewLocationDelegate, MultiTalkMgrExt, MMGroupLiveMgrExt, MMPageSheetGestureRecognizerDelegate, MyFavoritesListViewControllerDelegate, IMsgRevokeExt, FavForwardLogicDelegate, WCCardPackageViewControllerDelegate, ShareMessageConfirmLogicHelperDelegate, SessionSelectControllerDelegate>
{
    BaseMsgContentViewController * m_viewController; // +0x8
    CBaseContact * m_contact; // +0x10
    ImageController * m_imageController; // +0x18
    UrlController * m_urlController; // +0x20
    RecordController * m_recordController; // +0x28
    VoiceAutoTranslateHelper * m_autoTranslateController; // +0x30
    TypingController * m_typingController; // +0x38
    ShareFriendOnChatLogicController * m_shareCardController; // +0x40
    MMPickLocationViewController * m_pickLocationController; // +0x48
    MMEasterEggController * m_easterEggController; // +0x50
    CContactVerifyLogic * m_contactVerifyLogic; // +0x58
    MultiSelectController * m_multiSelectController; // +0x60
    MyFavoritesListViewController * m_myFavListController; // +0x68
    MMUIViewController * m_cardPkgViewController; // +0x70
    ShareDataToOpenSDKController * m_shareOpenSDKController; // +0x78
    unsigned int m_uiSearchedResultNodeLocalID; // +0x80
    BOOL m_bInContacts; // +0x84
    BOOL m_bAddUsr; // +0x85
    UINavigationController * m_navigationController; // +0x88
    long long m_pushTime; // +0x90
    unsigned int m_uiSubviewShowStatus; // +0x98
    unsigned long long m_eViewDisshowStatus; // +0xa0
    BOOL m_bIsEditing; // +0xa8
    NSString * m_redirectToEmoticonPid; // +0xb0
    id /* block */ multiMsgCompleteHandler; // +0xb8
    NSMutableDictionary * m_dicExtraInfo; // +0xc0
    CContact * m_selectContact; // +0xc8
    NSArray * m_searchKeywordList; // +0xd0
    ForwardMessageLogicController * m_forwardLogic; // +0xd8
    MMLocatingPoiDataLogic * m_poiDetailLogic; // +0xe0
    ShareMessageConfirmLogicHelper * m_shareMessageHelper; // +0xe8
    BOOL m_bIsInContentView; // +0xf0
    unsigned long long m_uiFromScene; // +0xf8
    BOOL m_bHasUnreadMsg; // +0x100
    WAAppIdToUsernameTransfer * _appIdTransfer; // +0x108
    WCScheduleLogicController * m_scheduleLogic; // +0x110
    AutoTranslateMsgController * m_textAutoTranslateController; // +0x118
    AutoTranslateMsgControllerV2 * m_textAutoTranslateControllerV2; // +0x120
    BOOL m_hasRecevieMsgAndScrollToBottom; // +0x128
    NSMutableSet * m_sendAppmsgMsgLocalIDSet; // +0x130
    SendVerifyMsgLogicController * m_sendVerifylogicVC; // +0x138
    ilinkMultiSelectLogic * m_ilinkMultiSelectLogic; // +0x140
    BOOL m_bFirstWillAppear; // +0x148
    BOOL _isStayInPage; // +0x149
    BOOL _hasOpenedWebViewUseFastLoad; // +0x14a
    BOOL _hasInvokeFastLoadPVBiz; // +0x14b
    NSMutableSet * _setFastLoadTemplateType; // +0x150
    unsigned int m_uiLastCreateTime; // +0x158
    unsigned int m_uiLastSequence; // +0x15c
    unsigned int m_uiLeftCount; // +0x160
    unsigned int m_uiDownLastCreateTime; // +0x164
    unsigned int m_uiDownLastSequence; // +0x168
    unsigned int m_uiDownLeftCount; // +0x16c
    BaseMsgLoaderLogic * m_msgLoaderLogic; // +0x170
    BOOL m_bHighlightTargetCell; // +0x178
    BOOL isSharePreview; // +0x179
    BOOL _isPageSheetMode; // +0x17a
    BOOL _redEnvelopesClickBlocking; // +0x17b
    BOOL _isMovingToMainFrame; // +0x17c
    unsigned long long m_searchScene; // +0x180
    NSString * _pageSheetModeTitle; // +0x188
    UIViewController * _currentMusicSearchViewController; // +0x190
    CMessageWrap * _firstMsgAfterEnterSession; // +0x198
}
- (id)createViewModelWithMsgWrap:(id)arg1;
- (unsigned int)getLastCreateTime;
- (unsigned int)getLastLocalID;
- (unsigned int)getLastSequence;
- (id)getMsgFromLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3 limit:(unsigned int)arg4;
- (unsigned int)getDownLastCreateTime;
- (unsigned int)getDownLastLocalID;
- (unsigned int)getDownLastSequence;
- (id)getDownMsgFromLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3 limit:(unsigned int)arg4;
- (void)handleAppmsgWhenEnterPage;
- (void)handleAppmsgWhenWillExitPage;
- (void)handleAppmsgWhenDidExitPage;
- (void)handleAppmsgWhenInPage;
- (BOOL)mainSwitch_shouldHandleAppmsg;
- (BOOL)inPageSwitch_shouldPreCreateAndUpdateAndTryReport;
- (BOOL)shouldPreDownloadPageData;
- (unsigned int)currPageAppmsgEnterType;
- (unsigned int)currPageAppmsgReportScene;
- (void)doPreCreateWebViewAndUpdateTemplateAndBatchReport:(id)arg1;
- (void)doResetAppMsgExposureParameter;
- (BOOL)isForwardAppmsg:(id)arg1;
- (BOOL)isAppmsgSupportExposure:(id)arg1;
- (BOOL)isAppmsgValidAfterCheckUrlDomain:(id)arg1 needCheckItemShowType:(BOOL)arg2;
- (id)setTemplateTypeForAppMsgIfValid:(id)arg1;
- (id)preDownloadUrlInfoListForMessageWrap:(id)arg1;
- (void)recordAppmsgExposureInfoForMessageWrap:(id)arg1;
- (void)recordAllAppmsgExposureInfoForVisibleCells;
- (void)reportAppmsgExposureInfoForMessageWrap:(id)arg1;
- (void)reportAllAppmsgExposureInfoForVisibleCells;
- (void)messageWrapOpenedWebViewUseFastLoad:(id)arg1;
- (void)preDownloadPageDataForVisibleCells;
- (void)initControllers;
- (void)resetController;
- (void)initPropertiesWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2;
- (void)initProperties;
- (void)initViewController;
- (void)setViewControllerFullScreen;
- (void)didPushTransitionFinish;
- (unsigned int)getSessionId;
- (unsigned int)GetLastLocalID;
- (unsigned int)GetFirstLocalID;
- (unsigned int)getMsgMinCreateTimeToLoad;
- (id)GetFirstUnReadMessage;
- (id)GetFirstMsgAfterEnterSession;
- (void)didShowFirstUnReadMessage;
- (id)GetMessageArrayFrom:(unsigned int)arg1 createTime:(unsigned long long)arg2;
- (id)getMsgContentViewController;
- (id)getViewController;
- (id)getNavigationController;
- (id)initWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2 ContentViewDisshowStatus:(unsigned long long)arg3 searchKeywordList:(id)arg4 fromScene:(unsigned long long)arg5;
- (id)initWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2 ContentViewDisshowStatus:(unsigned long long)arg3;
- (id)initWithLocalID:(unsigned int)arg1 CreateTime:(unsigned int)arg2 ContentViewDisshowStatus:(unsigned long long)arg3 fromScene:(unsigned long long)arg4;
- (id)init;
- (void)Reset;
- (void)onMultiSelectContactsDidFinishSelect:(id)arg1;
- (void)onMultiSelectContactsDidFinishSelect:(id)arg1 tmpDisplayView:(id)arg2;
- (void)onMultiSelectContactsEndWithReportSelectedCount:(unsigned int)arg1 hasReachLimit:(BOOL)arg2 clickCount:(unsigned int)arg3;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (void)preAddMsg:(id)arg1 msgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AdjustMsgBeforeSendWithChatName:(id)arg1 MsgWrap:(id)arg2;
- (void)AdjustMsgFromToUserWithChatName:(id)arg1 MsgWrap:(id)arg2;
- (void)AddEmoticonMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)performDeleteMsg:(id)arg1;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)clearAllUnread;
- (void)markChatRead;
- (void)SetReadWithMessageWrap:(id)arg1 isNotifyModMsg:(BOOL)arg2;
- (void)onClickTextFloatPreView:(id)arg1;
- (void)onClickMessageWrapOpenedWebViewUseFastLoad:(id)arg1;
- (void)onClickTranslateMsg:(id)arg1 translateInfo:(id)arg2;
- (void)startTextAutoTranslate;
- (void)stopTextAutoTranslate;
- (void)onClickVoiceTranslate:(id)arg1;
- (void)onClickFavMenu:(id)arg1;
- (void)onDeleteMsg:(id)arg1;
- (void)onClickMsg:(id)arg1;
- (void)onClickPlayMusicBtn:(id)arg1 isPlay:(BOOL)arg2 musicInfo:(id)arg3 clickedOnBtn:(BOOL)arg4;
- (void)onScheduleMessage:(id)arg1 cellView:(id)arg2;
- (void)onWCScheduleCancelDatePickerView;
- (void)onWCScheduleSelectDatePickerView;
- (void)onWCScheduleItem:(id)arg1 SetSuccess:(BOOL)arg2 ErrMsg:(id)arg3;
- (void)onWCScheduleItem:(id)arg1 cancelSuccess:(BOOL)arg2 errMsg:(id)arg3;
- (BOOL)isMsgCanRevoke:(id)arg1;
- (BOOL)shouldProcessPayMsgPreRevoke:(id)arg1;
- (void)RevokeMsg:(id)arg1;
- (void)shareDataToOpenSDK:(id)arg1;
- (void)openWaApp:(id)arg1;
- (BOOL)shouldHoldOpenWaAppScene:(unsigned long long)arg1;
- (void)openWaApp:(id)arg1 fromScene:(unsigned long long)arg2 preScene:(unsigned long long)arg3;
- (unsigned long long)getChatType;
- (BOOL)isBackToWeApp:(id)arg1;
- (void)backToWeApp:(id)arg1 pagePath:(id)arg2;
- (void)openOpenSDKAppBrand:(id)arg1;
- (void)viewWillRotateToOrientation:(long long)arg1;
- (void)viewDidRotateToOrientation:(long long)arg1;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnRoomHistoryRevoked:(id)arg1 n64MsgId:(long long)arg2 historyId:(unsigned long long)arg3;
- (id)CreateAppSolitaireTextMsgWithSolitaire:(id)arg1;
- (id)FormTextMsg:(id)arg1 withText:(id)arg2;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3 withImageInfo:(id)arg4;
- (id)formImageMsgByMMAsset:(id)arg1 toUserName:(id)arg2;
- (id)GetMessagesNodeArray;
- (id)getMsgWithId:(unsigned int)arg1;
- (BOOL)shouldStopAutoPlayUnRead;
- (void)verifyContactByUsrName:(id)arg1;
- (void)startForAddVerifyMsg:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (BOOL)supportWXKeyBoard;
- (void)sendWXKeyBoardMessage:(id)arg1;
- (id)wxKeyBoardSupportMessageTypes;
- (id)getMsgSendOpEntry;
- (BOOL)hasTransferMoneyEntry;
- (BOOL)hasRedEnvelopesEntry;
- (BOOL)hasCardPkgEntry;
- (BOOL)HasCustomToolBar;
- (void)OpenDetailInfo;
- (void)OpenContactInfo:(id)arg1;
- (id)getMessageChatContactByMessageWrap:(id)arg1;
- (BOOL)CanSendImageMsg:(id)arg1;
- (BOOL)CanSendVoiceMsg;
- (BOOL)CanSendVideoMsg;
- (BOOL)CanSendVoipMsg;
- (BOOL)CanLongPressHeadImage;
- (BOOL)CanSendEmoticonMessage;
- (BOOL)CanShowBanner;
- (BOOL)CanReportShowInfo;
- (BOOL)canReplyMsg;
- (BOOL)ShouldShowMultiSelectMode;
- (void)setNeedUpdateTitle:(BOOL *)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)GetMessageFromImage:(id)arg1;
- (void)SendMessageWrap:(id)arg1;
- (BOOL)isChatStatusNotifyOpen;
- (id)tagForCurrentPage;
- (void)setWillDismissStatus;
- (void)SendImageMessageByMMAsset:(id)arg1;
- (void)SendImageMessage:(id)arg1 withData:(id)arg2 ImageInfo:(id)arg3;
- (void)SendTextMessage:(id)arg1;
- (void)SendTextMessage:(id)arg1 replyingMessage:(id)arg2 isPasted:(BOOL)arg3;
- (void)SendTextMessageWithSolitaire:(id)arg1;
- (void)SendTextMessage:(id)arg1 externInfo:(id)arg2;
- (void)SendEmojiArtMessage:(id)arg1;
- (void)SendEmoticonMessage:(id)arg1;
- (void)SendNotGameEmoticonMessage:(id)arg1 errorMsg:(id)arg2;
- (void)onMultiTalkButtonClick;
- (void)ShareCard;
- (void)onVoipInvite;
- (void)onVideoVoipInvite;
- (void)onShowLiveEntrance;
- (void)onStartLive;
- (void)enterLiveRoomWithMessageWrap:(id)arg1;
- (void)onEnterLiveFromBanner:(id)arg1;
- (void)onCloseLiveBannerWithRoomId:(id)arg1 liveInfo:(id)arg2;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)OnTagWeAppLink:(id)arg1 messageWrap:(id)arg2;
- (void)OnTagWeAppMPShortLink:(id)arg1 messageWrap:(id)arg2;
- (void)OnTailLink:(id)arg1;
- (void)OpenHtml5:(id)arg1;
- (void)OpenLiteApp:(id)arg1;
- (id)getPreviewForLink:(id)arg1;
- (id)extraInfoForWebView;
- (void)OpenUrl:(id)arg1 extraInfo:(id)arg2;
- (void)OpenNativeUrl:(id)arg1;
- (void)RecommenWego;
- (void)AddAtUser:(id)arg1;
- (void)AddLocationMessageWithLocation:(id)arg1;
- (void)SelectLocation:(BOOL)arg1;
- (void)onOpenMyCardPkgViewController;
- (void)onOpenMyFavoritesListController;
- (void)onTransferMoneyControlLogic;
- (void)onRedEnvelopesControlLogic;
- (void)onOpenServiceApp:(id)arg1;
- (void)openTrackRoom:(id)arg1;
- (void)exitTracking;
- (id)getContactToForward;
- (void)onCardPackageViewSelectCardItem:(id)arg1;
- (void)OnSendMessageOK:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(unsigned long long)arg2;
- (void)onFinishSelectedLocation;
- (void)onFinishSelectedPOIInfo:(id)arg1;
- (void)onCancelSeletctedLocation;
- (id)onGetRightBarButton;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (void)onShareLocationMsgToOpenSDKWithViewController:(id)arg1;
- (void)ViewLocation:(id)arg1;
- (unsigned int)getMsgCountToLoad;
- (id)getMsgFromLocalId:(unsigned int)arg1;
- (id)GetMessageArray;
- (void)setLastCreateTime:(unsigned long long)arg1;
- (void)resetLeftCount;
- (void)setM_searchScene:(unsigned long long)arg1;
- (void)clearLastCreateTime;
- (void)clearDownLeftCount;
- (id)GetDownMessageArray;
- (void)DelMsgWithMsgList:(id)arg1 DelAll:(BOOL)arg2;
- (void)onOpenMediaBrowser;
- (void)onOpenFileBrowser;
- (void)onFileBrowseMultiSelect:(id)arg1;
- (void)onOpeniCloudFileBrowser;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)onOpenCameraController;
- (void)onSendCaptrueImage:(id)arg1;
- (void)onOpenFinderPicker;
- (void)onVideoOperation;
- (id)onLoadMoreMessage;
- (BOOL)onLoadDownMoreMessage;
- (BOOL)canShowFoldHistoryCell;
- (BOOL)canReloadViewIfMemoryWarning;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (BOOL)shouldPreventViewcontrollerAutorotate;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (void)OpenEmoticonToolView:(id)arg1;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(BOOL *)arg1;
- (id)GetUsrTitle;
- (BOOL)isUsrTitleUnsafe;
- (id)GetUsrTitleCPKey;
- (id)getSubTitle;
- (id)getTextStateViewAsSubView;
- (id)getTextStateItemView;
- (void)ViewWillInit;
- (void)ViewDidInit;
- (void)VoiceModeClicked;
- (void)ResendMessage:(id)arg1;
- (void)ResendMessage:(id)arg1 ShowAlert:(BOOL)arg2;
- (void)saveDraft:(id)arg1 referMsgSvrId:(long long)arg2;
- (void)SaveContentAndState;
- (void)QuicklySaveDraft:(id)arg1 referMsgSvrId:(long long)arg2;
- (id)getDefaultTitleTailSubViews;
- (id)GetTitleTailImageView;
- (double)GetTitleLabelOffset;
- (void)onTextBeginEditing;
- (void)onTextChange:(id)arg1 selectedRange:(_NSRange)arg2 markedRange:(_NSRange)arg3;
- (void)onChangeReferMsgId:(long long)arg1;
- (BOOL)isMessageAutoTranslating:(id)arg1;
- (id)GetContact;
- (id)GetHeadImageUrl:(id)arg1;
- (id)genMsgSource;
- (BOOL)StartAudioRecording:(id)arg1;
- (void)StopRecording;
- (void)CancelRecording;
- (id)CancelRecordingAndTransVoiceWithLanguage:(unsigned int)arg1;
- (BOOL)StopRecordingInTransState:(BOOL)arg1;
- (BOOL)IsRecording;
- (void)SetMsgPlayed:(id)arg1;
- (void)StartPlaying:(id)arg1 Resume:(BOOL)arg2;
- (void)StopPlaying:(id)arg1;
- (id)GetRightBarButtonImageName;
- (id)GetRightBarButtonTitle;
- (BOOL)ShouldShowSearchCompleteRightBarButton;
- (BOOL)isForbiddenSearchBar;
- (unsigned int)getFromScene;
- (BOOL)shouldSearchedMsgHightlight;
- (BOOL)shouldHightlightSearchedKeyWord;
- (id)getSearchKeywordList;
- (void)clearSearchKeywordList;
- (BOOL)isInForwardMsgPreView;
- (BOOL)isInWillDismissStatus;
- (BOOL)isInMultiSelectMsg;
- (BOOL)isInPageSheetMode;
- (unsigned int)getSearchedMsgLocalID;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 highlightKeywords:(id)arg2;
- (void)resetWithMessageWrap:(id)arg1;
- (BOOL)canShowChatRoomInfo;
- (void)StopUploadVideo:(id)arg1;
- (void)StopDownloadVideo:(id)arg1;
- (void)StartUploadVideo:(id)arg1;
- (void)StartDownloadVideo:(id)arg1;
- (void)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (BOOL)hasMoreMsg;
- (BOOL)hasDownMoreMsg;
- (id)GetRightBarBtn;
- (void)toBeEditing:(BOOL)arg1;
- (void)addMultiMsgToMyFav:(id)arg1;
- (void)sendMultiMsgToFriend:(id)arg1;
- (void)sendMultiMsgToFriend:(id)arg1 packedToSend:(BOOL)arg2;
- (void)sendMultiMsgByMail:(id)arg1;
- (void)sendMultiMsgToBrandContact:(id)arg1 To:(id)arg2;
- (void)downloadMultiMsg:(id)arg1 saveToAlbum:(BOOL)arg2;
- (void)onMultiSelectCancel;
- (void)onMultiMsgDelete:(id)arg1;
- (void)onMultiMsgSelected:(id)arg1 Username:(id)arg2;
- (void)setMultiSelectModeOnComplete:(id /* block */)arg1;
- (void)onMultiOprationComplete;
- (id)getCurrentViewController;
- (void)onForwardMessageOK;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)onRecordAddMsg:(id)arg1;
- (void)onRecordModMsg:(id)arg1;
- (void)ShowRecording;
- (void)ShowPreparing;
- (void)HideRecordTips;
- (void)SetVoiceEnabled:(BOOL)arg1;
- (void)ShowTooShortTips;
- (void)ShowStartFailTips:(id)arg1;
- (void)ShowTooLongTips;
- (BOOL)onRecordCountRemain:(long long)arg1;
- (void)SetPeakPower:(float)arg1;
- (void)SetButtonHighlighted:(BOOL)arg1;
- (CGPoint)CheckVoiceBtnPressLocation;
- (id)GetContactName;
- (BOOL)CanRemoteRecord;
- (BOOL)isShowHeadImage:(id)arg1;
- (BOOL)onRecordWillStopWhenAppWillTerminate;
- (void)DidEnterBackground:(id)arg1;
- (void)processInsertedImage:(id)arg1 withData:(id)arg2 ImageInfo:(id)arg3;
- (id)getCurrentChatName;
- (void)processInsertedAsset:(id)arg1;
- (id)generateMessageWrapWithVideoInfo:(id)arg1;
- (void)processImageControllerDidCancel:(unsigned long long)arg1;
- (BOOL)CanDragSelect;
- (BOOL)CanSendOriginalVideo;
- (BOOL)CanSendOriginalImage;
- (BOOL)CanSendMultiImage;
- (void)processInsertedGifData:(id)arg1;
- (BOOL)isChatroom;
- (void)updateTypingTitle:(id)arg1;
- (void)onEditMessage:(id)arg1;
- (void)sendAddContactRequestTo:(id)arg1;
- (void)sendAddContactRequestTo:(id)arg1 chatRoom:(id)arg2;
- (void)onAddToContacts:(id)arg1;
- (id)getShareMyFriendParentViewController;
- (void)onFinishedShareMyFriend:(BOOL)arg1;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)CameraControllerDidTakeVideo:(id)arg1;
- (id)chatUserNameForSightStatistics;
- (void)CameraControllerDidTakeSight:(id)arg1 editVideoAttr:(id)arg2;
- (void)CameraControllerDidTakeSightImage:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)ViewDidAppear;
- (void)ViewWillAppear;
- (void)ViewWillDisappear;
- (void)ViewDidDisappear;
- (void)OnTrackRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)OnOpenTrackRoom:(id)arg1;
- (void)onMultiTalkBannerChange:(id)arg1 status:(unsigned int)arg2;
- (id)getExtraInfo;
- (void)setExtraInfo:(id)arg1;
- (void)setM_dicExtraInfo:(id)arg1;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)dealloc;
- (id)getBackgroundView;
- (void)onExitRoom;
- (void)onPopFromNavigationController;
- (void)onWillEnterRoom;
- (void)onWillPopFromNavigationController;
- (void)onWillPushFromNavigationController;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onScrollViewDidEndDecelerating:(id)arg1;
- (void)onScrollViewDidScrollToTop:(id)arg1;
- (void)onAddMsgAndNoScroll:(id)arg1;
- (void)onChatNewMsgSent:(id)arg1;
- (void)onAddMsgAndScrollToBottomAnimated:(id)arg1;
- (void)onScrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onTableViewDidEndDisplayingCell:(id)arg1;
- (void)Register;
- (void)UnRegister;
- (void)modMsgStatusWithoutNotify:(id)arg1;
- (id)getFavForawrdViewController;
- (void)OnFavForwardDone;
- (void)OnFavForwardCancel;
- (void)tryResumeCheckEasterEgg;
- (id)getEasterEggContainerViewController;
- (id)getEasterEggEffectParentView;
- (double)getEasterEggEffectParentViewTopInset;
- (CGRect)getViewBoundsForImplicitAnimationType:(long long)arg1;
- (void)onTapInteractiveUI;
- (BOOL)isReadyToShowEasterEgg;
- (id)previewActionItems;
- (id)onAutoTranslateGetNodeArray;
- (void)onAutoTranslateFinishMsg:(id)arg1;
- (void)onShowGiftEntrance;
- (void)onShowMusicEntrance;
- (BOOL)isMusicSearchViewControllerShowing;
- (void)sendMusicWithMessageWrap:(id)arg1;
- (void)ClearStatusAndUnRegisterForCacheStatus;
- (void)RestoreStatusAndRegisterFromCacheStatus;
- (BOOL)isNeedCached;
- (void)onWillDisplayMsg:(id)arg1;
- (void)DidAddMsg:(id)arg1;
- (void)onBrandLiveBannerEventWithAction:(unsigned int)arg1;
- (void)OnRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)OnMyselfCloseMode:(id)arg1;
- (void)onLiveCountChanged:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onExtendAnimationDidEndWithLiveTask:(id)arg1;
- (void)setIsPeekPreview:(BOOL)arg1;
- (BOOL)isPeekPreview;
- (void)onStartAnimateEmojiCheckPoint:(id)arg1;
- (void)onEndAnimateEmojiCheckPoint:(id)arg1;
- (void)onUpdateAnimateEmojiCheckPoint:(id)arg1 contact:(id)arg2 fromHistory:(BOOL)arg3;
- (void)onClickTitleView;
- (void)onWCPayMsgNeedContinueRevokeWithMsgWrap:(id)arg1 revokeTicket:(id)arg2;
- (void)onOpenIMStorageArchivePopUp:(id)arg1 privacyAgreementUrl:(id)arg2;
- (BOOL)pageSheetGestureRecognizerShouldBegin:(id)arg1;
- (id)getViewModelWithMsgWrap:(id)arg1;
- (id)getChatName;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id)m_pickLocationController;
- (void)setM_pickLocationController:(id)arg1;
- (long long)m_pushTime;
- (void)setM_pushTime:(long long)arg1;
- (unsigned long long)m_uiFromScene;
- (void)setM_uiFromScene:(unsigned long long)arg1;
- (id)m_redirectToEmoticonPid;
- (void)setM_redirectToEmoticonPid:(id)arg1;
- (id)m_dicExtraInfo;
- (unsigned long long)m_searchScene;
- (BOOL)m_bHighlightTargetCell;
- (void)setM_bHighlightTargetCell:(BOOL)arg1;
- (BOOL)isSharePreview;
- (void)setIsSharePreview:(BOOL)arg1;
- (BOOL)isPageSheetMode;
- (void)setIsPageSheetMode:(BOOL)arg1;
- (id)pageSheetModeTitle;
- (void)setPageSheetModeTitle:(id)arg1;
- (BOOL)redEnvelopesClickBlocking;
- (void)setRedEnvelopesClickBlocking:(BOOL)arg1;
- (id)currentMusicSearchViewController;
- (void)setCurrentMusicSearchViewController:(id)arg1;
- (BOOL)isMovingToMainFrame;
- (void)setIsMovingToMainFrame:(BOOL)arg1;
- (id)firstMsgAfterEnterSession;
- (void)setFirstMsgAfterEnterSession:(id)arg1;
- (void).cxx_destruct;
@end

