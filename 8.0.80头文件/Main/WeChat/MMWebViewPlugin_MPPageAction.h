@interface MMWebViewPlugin_MPPageAction : MMWebViewPluginBase <MPCommentEditViewDelegate, MPShareWowEditViewDelegate, WCActionSheetDelegate, WXKeyBoardActiveReceiver>
{
    BOOL _hasForcePortaitWhenCmtViewShow; // +0x8
    BOOL _hasIgnoreLongPressWhenCmtViewShow; // +0x9
    MPCommentEditView * _commentEditView; // +0x10
    MPShareWowEditView * _wowRecommendEditView; // +0x18
    WCActionSheet * _actionSheet; // +0x20
    NSMutableArray * _preloadedWebStores; // +0x28
}
- (void)dealloc;
- (void)showCommentEditViewWithTheme:(unsigned int)arg1 params:(id)arg2;
- (void)closeCommentEditView;
- (BOOL)isShowCommentEditView;
- (void)destoryCommentEditView;
- (void)showWowRecommendCommentEditViewWithTheme:(unsigned int)arg1;
- (void)closeWowRecommendCommentEditView;
- (BOOL)isShowWowRecommendCommentEditView;
- (void)showToast:(id)arg1 status:(id)arg2;
- (unsigned int)getMPPageMenuShareFuncFlag;
- (void)onShareActionSheet;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAddExcerptToFav:(id)arg1 shareUrl:(id)arg2 itemShowType:(unsigned int)arg3 pageKey:(id)arg4 title:(id)arg5 name:(id)arg6 cover:(id)arg7 userName:(id)arg8 icon:(id)arg9;
- (void)onDelExcerptOnFav:(id)arg1 excerptKeys:(id)arg2 favId:(id)arg3;
- (void)onOpenImmerseList:(id)arg1 enterScene:(unsigned int)arg2;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)initCommentEditViewWithTheme:(unsigned int)arg1 params:(id)arg2;
- (void)initWowRecommendEditViewWithTheme:(unsigned int)arg1;
- (id)getMainViewController;
- (void)onDeleteEditViewCommentMsg:(id)arg1;
- (void)onDeleteEditViewCommentReply:(id)arg1 commentReply:(id)arg2;
- (void)onCommentLikeClick:(unsigned int)arg1 targetLikeStatus:(unsigned int)arg2;
- (void)onReplyLikeClick:(unsigned int)arg1 replyId:(unsigned int)arg2 targetLikeStatus:(unsigned int)arg3;
- (void)onCommentViewDissmiss:(id)arg1;
- (void)onShareWowCommitBtnClick:(id)arg1;
- (void)didTakeScreenshot;
- (id)preloadedWebStores;
- (void)addPreloadedWebStoresWithUrl:(id)arg1 withAdItem:(id)arg2;
- (void)removePreloadedWebStores;
- (id)supportMessageTypes;
- (unsigned int)activeScene;
- (void)sendMessage:(id)arg1;
- (void)inputWXKBEmoticon:(id)arg1;
- (void)inputWXKBImage:(id)arg1;
- (void)sendWXKBEvent:(id)arg1;
- (id)commentEditView;
- (void)setCommentEditView:(id)arg1;
- (id)wowRecommendEditView;
- (void)setWowRecommendEditView:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (void)setPreloadedWebStores:(id)arg1;
- (BOOL)hasForcePortaitWhenCmtViewShow;
- (void)setHasForcePortaitWhenCmtViewShow:(BOOL)arg1;
- (BOOL)hasIgnoreLongPressWhenCmtViewShow;
- (void)setHasIgnoreLongPressWhenCmtViewShow:(BOOL)arg1;
- (void).cxx_destruct;
@end
