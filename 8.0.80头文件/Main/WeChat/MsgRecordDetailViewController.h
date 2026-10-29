@interface MsgRecordDetailViewController : MMUIViewController <MMWebViewDelegate, FavForwardLogicDelegate, WCNetworkMediaPlayerDelegate, IMsgExt, MsgRecordFileDetailDelegate, MMScrollActionSheetDelegate, MMImgFullScreenViewControllerDelegate, ChatViewModelDelegate, UITableViewDataSource, UITableViewDelegate, MMTableViewDelegate, FavRecordNodeViewDelegate, ViewLocationDelegate, IRecordDownloadExt, IMsgRevokeExt>
{
    MMTableView * m_tableView; // +0x70
    unsigned int m_uiLongPressedIndex; // +0x78
    CMessageWrap * m_recordMsg; // +0x80
    MMUIWindow * m_fullScreenWindow; // +0x88
    NSString * m_chatDate; // +0x90
    int m_chatDatePrefix; // +0x98
    NSArray * m_dataList; // +0xa0
    NSString * m_title; // +0xa8
    NSMutableDictionary * m_recordItemViewCache; // +0xb0
    MMMsgMenuReporter * m_menuReporter; // +0xb8
    MMRichTextCoverView * m_richTextCoverView; // +0xc0
    BOOL _supportToLocateToMsg; // +0xc8
    BOOL _isNestedRecord; // +0xc9
    BOOL _revokeRegistered; // +0xca
    NSString * _chatName; // +0xd0
    CMessageWrap * _historyMsgWrap; // +0xd8
    CBaseContact * _contact; // +0xe0
    NSMutableDictionary * _dataWrapList; // +0xe8
    id <RecordNodeDataSource> _forwardingDataSource; // +0xf0
    MMTipsViewController * _revokeTips; // +0xf8
    MsgRecordRevokeSnapshotViewController * _revokeSnapshot; // +0x100
}
+ (id)getDefaultFooterViewWithSize:(CGSize)arg1;
- (id)initWithMsgWrap:(id)arg1;
- (id)initWithMsgWrap:(id)arg1 title:(id)arg2 dataList:(id)arg3;
- (void)viewDidTransitionToNewSize;
- (void)updateChatDate;
- (void)tryReloadMsg;
- (void)viewDidLoad;
- (void)reloadFooterView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)setHistoryMsgWrap:(id)arg1;
- (void)initNavigationBar;
- (void)initTableView;
- (void)onAction:(id)arg1;
- (BOOL)checkIsHadTranslate;
- (long long)getRowsInContentSection;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (id)getRecordItemViewCacheWithIndexPath:(id)arg1;
- (id)makeRecordItemViewCacheWithIndexPath:(id)arg1;
- (id)dataWrapAtIndexPath:(id)arg1;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (id)baseBackgroundColor;
- (void)onPan:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getThumbImageWithFavItemData:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (BOOL)tryHandleMenu:(long long)arg1 withDataSource:(id)arg2;
- (id)recordThumbViewForDataId:(id)arg1;
- (void)presentImgFullScreenWithDataSource:(id)arg1 needEdit:(BOOL)arg2 muted:(BOOL)arg3;
- (void)onMMImgPreviewDataRequired:(id)arg1;
- (void)onClickOnImgNode:(id)arg1 needEdit:(BOOL)arg2;
- (void)onClickOnVideoNode:(id)arg1 soundable:(BOOL)arg2;
- (void)favRecordNodeView:(id)arg1 onClickOnNode:(id)arg2;
- (void)selectVideoData:(id)arg1 soundable:(BOOL)arg2;
- (void)selectUrlData:(id)arg1 thumbImageView:(id)arg2;
- (void)selectLocationData:(id)arg1;
- (void)selectTingDataWithNodeView:(id)arg1 data:(id)arg2;
- (void)selectTingListWithNodeView:(id)arg1 data:(id)arg2;
- (void)selectFileData:(id)arg1;
- (void)selectGoodsData:(id)arg1;
- (void)selectRecordData:(id)arg1;
- (void)selectWeAppData:(id)arg1;
- (void)selectWeAppMsg:(id)arg1;
- (void)selectChatBotShareMsg:(id)arg1;
- (void)selectPhotoAccountNameCardMsg:(id)arg1;
- (void)openWeAppWithUsername:(id)arg1 pagePath:(id)arg2 debugMode:(unsigned long long)arg3 referrerInfo:(id)arg4;
- (void)selectLiteAppData:(id)arg1;
- (unsigned long long)getChatTypeWithContact:(id)arg1;
- (id)getTableView;
- (id)getRichTextCoverView;
- (void)setRichTextCoverView:(id)arg1;
- (id)getViewController;
- (id)getMMMsgMenuReporter;
- (void)OpenVideoFileByMsgRecordDataWrap:(id)arg1;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnRecordMessageDownloadOK:(id)arg1;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2 failRetCode:(int)arg3;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)registerRecordRevoke;
- (void)unregisterRecordRevoke;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnRoomHistoryRevoked:(id)arg1 n64MsgId:(long long)arg2 historyId:(unsigned long long)arg3;
- (void)handleRecordRevokeForUser:(id)arg1 messageID:(long long)arg2 roomHistory:(BOOL)arg3;
- (void)onRevokeMsgAlert;
- (void)exitRevokedRecordInNavigationController:(id)arg1;
- (void)finishRecordRevokeAnimated:(BOOL)arg1;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (id)getFavForawrdViewController;
- (void)jumpToViewStreamVideo:(id)arg1;
- (BOOL)openBrandMpVideoByFavData:(id)arg1;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayer;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onFavViewSizeDidChange:(id)arg1 withFavData:(id)arg2;
- (BOOL)shouldShowTopicText;
- (void)onClickSearchTopicWithUrl:(id)arg1 withFavData:(id)arg2;
- (id)payTagParamFromMessage:(id)arg1 fromUser:(id)arg2;
- (void)onClickWeAppMPShortLinkWithUrl:(id)arg1 withFavData:(id)arg2;
- (void)onClickReferViewInNodeView:(id)arg1;
- (void)registerYReportSdk;
- (BOOL)canShowOperationMenu;
- (BOOL)isMsgCanRevoke:(id)arg1;
- (void)reloadNodeWithMessageWrap:(id)arg1;
- (void)reloadVisibleNodeWithCellView:(id)arg1;
- (void)updateTableContentOffsetAnimated:(BOOL)arg1 OffsetDelta:(double)arg2;
- (id)getInputToolView;
- (id)getMenuReporter;
- (BOOL)isLastTranslateAvailableMsg:(id)arg1 includeSelf:(BOOL)arg2 showTranslateInfo:(BOOL)arg3;
- (id)firstMsgAfterEnterSession;
- (id)findNodeViewWithMsgSvrId:(long long)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)historyMsgWrap;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)supportToLocateToMsg;
- (void)setSupportToLocateToMsg:(BOOL)arg1;
- (id)dataWrapList;
- (void)setDataWrapList:(id)arg1;
- (id)forwardingDataSource;
- (void)setForwardingDataSource:(id)arg1;
- (id)revokeTips;
- (void)setRevokeTips:(id)arg1;
- (id)revokeSnapshot;
- (void)setRevokeSnapshot:(id)arg1;
- (BOOL)isNestedRecord;
- (void)setIsNestedRecord:(BOOL)arg1;
- (BOOL)revokeRegistered;
- (void)setRevokeRegistered:(BOOL)arg1;
- (void).cxx_destruct;
@end
