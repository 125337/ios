@interface GameVideoRecordShareViewController : MMUIViewController <ILinkEventExt, WCPlayerConfigDelegate>
{
    unsigned int _width; // +0x70
    unsigned int _height; // +0x74
    MiniGameVideoFile * _videoFile; // +0x78
    id /* block */ _callback; // +0x80
    long long _parentOrientation; // +0x88
    NSMutableDictionary * _resultMap; // +0x90
    NSMutableDictionary * _itemModels; // +0x98
    RichTextView * bottomHintLable; // +0xa0
    UIView * buttonBar; // +0xa8
    UIButton * stashButton; // +0xb0
    UIButton * shareButton; // +0xb8
    WCPlayerView * playerView; // +0xc0
    WCPlayerConfigControlView * controlView; // +0xc8
    BOOL _toolViewHidden; // +0xd0
}
- (id)initWithVideo:(id)arg1 withWidth:(unsigned int)arg2 withHeight:(unsigned int)arg3 withParentOrientation:(long long)arg4 withAppName:(id)arg5 withAppId:(id)arg6 withExtConfigJson:(id)arg7 withShareOptions:(id)arg8 withShareTitle:(id)arg9 withShareDesc:(id)arg10 withAppVersion:(unsigned int)arg11 withAppState:(unsigned int)arg12 withIsDevEdited:(BOOL)arg13 callbck:(id /* block */)arg14;
- (void)prepareModels:(id)arg1;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)getMappedKV;
- (id)buildStashItem;
- (id)buildShareToGameCenterItem;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)goToWebViewWithUrl:(id)arg1;
- (id)buildShareToFriendItem;
- (id)buildShareToSnsItem;
- (void)layoutBottomHintLableWithText:(id)arg1;
- (void)layout;
- (void)reportWithAreaId:(int)arg1 withPositionId:(long long)arg2 withActionId:(int)arg3 withOpType:(int)arg4 withExtInfo:(id)arg5 withFuncType:(unsigned int)arg6;
- (void)onSightIconProgressEnd;
- (void)onTapSightIconView;
- (void)onTapCloseButton:(id)arg1;
- (void)onTapAttachButton:(id)arg1;
- (void)onVideoPlay;
- (void)onToolViewAutoClose;
- (void)onVideoPause;
- (void)onPlayToEnd;
- (void)onLoopPlayToEnd;
- (void)onGetVideoSize:(CGSize)arg1;
- (void)onShowBufferingView;
- (void)onHiddenBufferingView;
- (void)setToolViewHidden:(BOOL)arg1;
- (BOOL)isLandscape;
- (id)provideVideoArgs;
- (void)reLayoutButtonsWithHasStash:(BOOL)arg1 hasShare:(BOOL)arg2;
- (void)onClickStash;
- (BOOL)hasStash;
- (BOOL)hasShare;
- (void)onShareResultWithScene:(id)arg1 isSuccess:(BOOL)arg2 isCancel:(BOOL)arg3 errMsg:(id)arg4;
- (void)checkShowEducationWithItem:(id)arg1 withCallbck:(id /* block */)arg2;
- (void)onClickShare;
- (void)didMoveToParentViewController:(id)arg1;
- (void)onClose;
- (id)navigationBarBackgroundColor;
- (long long)overrideMMUserInterfaceStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void).cxx_destruct;
@end
