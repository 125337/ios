@interface WebviewJSEventHandler_gameCenterFacade : WebviewJSEventHandlerBase <MMLiteAppShowStatusChangeExt, MMLiteAppCloseExt, GameChatInputToolViewDelegate, IWebviewResourceManagerExt, WCActionSheetDelegate, GameNoticeHalfScreenViewDelegate>
{
    double _collapseChildHeight; // +0x8
    double _expandChildHeight; // +0x10
    GameChatRoomViewController * _childChatRoomVC; // +0x18
    NSDictionary * _inputToolConfigDict; // +0x20
    NSString * _inputIdentifierName; // +0x28
    GCWebInputToolView * _inputToolView; // +0x30
    UIControl * _inputBgView; // +0x38
    GCSelfUnTouchableView * _inputLayerView; // +0x40
    EmoticonBoardView * _emoticonBoardView; // +0x48
    GCInputAtModel * _inputAtModel; // +0x50
    GameSkStoreController * _skStoreController; // +0x58
    NSMutableDictionary * _webDurationReportDict; // +0x60
    NSString * _converationUpdateEventName; // +0x68
}
- (void)onLiteAppShowStatusChange:(id)arg1 page:(id)arg2 appUuid:(unsigned long long)arg3 pageId:(unsigned int)arg4 show:(unsigned char)arg5;
- (void)onLiteAppClose:(id)arg1 appUuid:(unsigned int)arg2 extraData:(id)arg3;
- (void)handleWebTransfer:(id)arg1 gameJsEvent:(id)arg2;
- (void)asymcCompleteWithMessage:(id)arg1 success:(BOOL)arg2 dict:(id)arg3 eventInfo:(id)arg4;
- (void)asyncCompleteWithEventInfo:(id)arg1 result:(id)arg2;
- (void)handleExtTransfer:(id)arg1 gameJsEvent:(id)arg2;
- (void)addSignInfoIfNeedWithRequestParams:(id)arg1;
- (void)getLocalMiniGameVideo:(id)arg1 params:(id)arg2;
- (id)dictionaryForVideoLocalInfo:(id)arg1;
- (void)delMiniGameVideo:(id)arg1 params:(id)arg2;
- (void)uploadMiniGameVideoToShare:(id)arg1 params:(id)arg2;
- (void)saveMiniGameVideoToAlbum:(id)arg1 params:(id)arg2;
- (void)showInputToolWithParamDict:(id)arg1 identifierName:(id)arg2;
- (void)handleAtPannel;
- (void)initInputToolViewIfNeed;
- (void)setEmoticonBoardViewTypeStr:(id)arg1;
- (void)showInputBgView:(BOOL)arg1;
- (void)onInputBgTouched;
- (void)hideInputView;
- (void)textDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)didCommitText:(id)arg1;
- (void)onInputViewFrameChange;
- (id)imgParamDictFromEmoticon:(id)arg1 pickMmImage:(id)arg2;
- (id)emojiInfoDictForEmojiWrap:(id)arg1;
- (void)didSelectWithEmotcion:(id)arg1;
- (double)getVisibleHeight;
- (void)notifyInputStateChange;
- (void)onInputViewShowChange:(BOOL)arg1;
- (id)emojiInfoFromBase64Str:(id)arg1;
- (id)browseEmoticonViewWithParams:(id)arg1;
- (void)showGameShareWindow:(id)arg1 params:(id)arg2;
- (id)__arrCustomMenuItemsFromParams:(id)arg1 forKey:(id)arg2;
- (int)getShareType:(id)arg1;
- (void)openGameLifeChatroom:(id)arg1 params:(id)arg2;
- (void)quitGameLifeChatroom:(id)arg1 params:(id)arg2;
- (void)preloadChildGameChatroom:(id)arg1 params:(id)arg2;
- (void)changeChildGameChatroomState:(id)arg1 params:(id)arg2;
- (void)destoryChildGameChatroom:(id)arg1 params:(id)arg2;
- (id)findChatRoomViewController;
- (void)searchChatRoomMemberByName:(id)arg1 params:(id)arg2;
- (void)deleteChatRoomMemberByUserName:(id)arg1 params:(id)arg2;
- (void)chatRoomAtMember:(id)arg1;
- (id)customEventParamFromEventInfo:(id)arg1;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)handleWithEventInfo:(id)arg1;
- (void)fetchGameCenterEntranceInfo:(id)arg1 params:(id)arg2;
- (void)showToast:(id)arg1 params:(id)arg2;
- (id)getParentMMUIViewController;
- (void)showGameNoticeInfoView:(id)arg1 params:(id)arg2;
- (void)cancelPreloadVideo:(id)arg1 params:(id)arg2;
- (void)preloadVideoList:(id)arg1 params:(id)arg2;
- (void)downloadGameVideo:(id)arg1;
- (void)showInputToolView:(id)arg1;
- (void)browseEmoticonView:(id)arg1;
- (void)gameExtTransfer:(id)arg1;
- (void)gameWebTransfer:(id)arg1;
- (void)notifyAccountState:(id)arg1 params:(id)arg2;
- (void)switchToGameTab:(id)arg1 params:(id)arg2;
- (void)updateGameBanner:(id)arg1 params:(id)arg2;
- (void)changeGameBannerState:(id)arg1 params:(id)arg2;
- (void)getGameBannerState:(id)arg1 params:(id)arg2;
- (void)saveBannerWebCache:(id)arg1 params:(id)arg2;
- (void)showActionSheet:(id)arg1 params:(id)arg2;
- (void)createInteractWebView:(id)arg1 params:(id)arg2;
- (void)postMessageToInteractWeb:(id)arg1 params:(id)arg2;
- (void)getGameWeakNetInfo:(id)arg1 params:(id)arg2;
- (void)setNavigationBarStatus:(id)arg1;
- (BOOL)beChildOfViewController:(id)arg1 parentViewController:(id)arg2;
- (void)addWebViewReportExtInfo:(id)arg1;
- (void)updateClientReport:(id)arg1;
- (id)gameCenterPlugin;
- (id)skStoreController;
- (void)preloadAppStoreVc:(id)arg1;
- (void)showAppStoreVc:(id)arg1;
- (void)openGameChatVc:(id)arg1;
- (void)getGameChatRedInfo:(id)arg1;
- (id)keyForCurrentLiteAppPageWithAppId:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned int)arg3;
- (void)initGameLiteApp:(id)arg1;
- (void)handleGameTabNavigationEvent:(id)arg1;
- (void)getWebViewSnapShot:(id)arg1;
- (void)saveImageToPhotosAlbum:(id)arg1;
- (void)handleSaveImage:(id)arg1 imageData:(id)arg2 eventInfo:(id)arg3;
- (void)reportLaunchAppStoreEvent:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)gameNoticeViewDidConfirmWithCheck:(BOOL)arg1;
- (void)gameNoticeViewDidClickAdditionBtn;
- (void)gameNoticeViewDidDismiss;
- (double)collapseChildHeight;
- (void)setCollapseChildHeight:(double)arg1;
- (double)expandChildHeight;
- (void)setExpandChildHeight:(double)arg1;
- (id)childChatRoomVC;
- (void)setChildChatRoomVC:(id)arg1;
- (id)inputToolConfigDict;
- (void)setInputToolConfigDict:(id)arg1;
- (id)inputIdentifierName;
- (void)setInputIdentifierName:(id)arg1;
- (id)inputToolView;
- (void)setInputToolView:(id)arg1;
- (id)inputBgView;
- (void)setInputBgView:(id)arg1;
- (id)inputLayerView;
- (void)setInputLayerView:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)inputAtModel;
- (void)setInputAtModel:(id)arg1;
- (void)setSkStoreController:(id)arg1;
- (id)webDurationReportDict;
- (void)setWebDurationReportDict:(id)arg1;
- (id)converationUpdateEventName;
- (void)setConverationUpdateEventName:(id)arg1;
- (void).cxx_destruct;
@end

