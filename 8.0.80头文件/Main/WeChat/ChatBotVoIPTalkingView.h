@interface ChatBotVoIPTalkingView : UIView <ChatBotVoIPModeSelectViewDelegate, ChatBotPrologueMsgListViewDelegate, ChatBotSwitchModeViewDelegate, CBTAsstMomentViewDelegate, CBTOwnMomentViewDelegate, ICBTMomentExt, CBTDramaVideoListViewDelegate, CBTTalkingViewOptionalProtocol, ChatBotTalkingAnimationHeadViewDelegate, ChatBotVoIPBottomPanelDelegate, ChatBotVOIPBoardViewDelegate, IChatBotVoIPSessionDelegate>
{
    BOOL _isMicOpen; // +0x8
    BOOL _isVideoOpen; // +0x9
    BOOL _hasPopStarUpdate; // +0xa
    BOOL _isFirstLayoutSubviews; // +0xb
    int _openScene; // +0xc
    unsigned int _viewStatus; // +0x10
    unsigned int _enterRoomTime; // +0x14
    id <ChatBotVoIPTalkingViewDelegate> _delegate; // +0x18
    ChatBotVoIPRoomInfo * _roomInfo; // +0x20
    ChatBotTalkingAnimationHeadView * _headImageView; // +0x28
    MMUILabel * _roomNameLabel; // +0x30
    ChatBotVoIPBottomPanel * _bottomPanel; // +0x38
    ChatBotVOIPBoardView * _boardView; // +0x40
    CBTDramaVideoListView * _dramaVideoListView; // +0x48
    ChatBotSwitchModeView * _switchMomentModeView; // +0x50
    CBTAsstMomentView * _momentView; // +0x58
    UIView * _momentViewBlurBackgroundView; // +0x60
    MMUIButton * _dramaShotShowTextBtn; // +0x68
    MMUILabel * _dramaNameLabel; // +0x70
    CBTOwnMomentView * _ownMomentView; // +0x78
    MMUIButton * _enterHistoryDramaBtn; // +0x80
    MMUIImageView * _enterHistoryDramaIcon; // +0x88
    MMUILabel * _dramaTopicLabel; // +0x90
    MMUIButton * _goBackLatestDramaBtn; // +0x98
    MMUIImageView * _goBackLatestDramaIcon; // +0xa0
    MMUIButton * _goToNextDramaShotBtn; // +0xa8
    MMUIImageView * _goToNextDramaShotIcon; // +0xb0
    ChatBotReCommendMsgView * _dramaRecommendMsgView; // +0xb8
    NSTimer * _bubbleViewDismissTimer; // +0xc0
    MMUIButton * _backBtn; // +0xc8
    ChatBotBubblePopView * _starBtn; // +0xd0
    ChatBotBubblePopView * _socialHistoryTopBtn; // +0xd8
    UIVisualEffectView * _socialHistoryBtnBackgroundView; // +0xe0
    MMUIButton * _socialHistoryBtn; // +0xe8
    MMUIButton * _modeSwitchBtn; // +0xf0
    MMUIButton * _asstDiscoverBtn; // +0xf8
    XImageViewRenderer * _rciLocalBigRender; // +0x100
    UIView * _decLayerView; // +0x108
    UIImageView * _photoPreView; // +0x110
    ChatBotInnerShadowImageView * _fastenPhotoPreView; // +0x118
    MMUIButton * _prologueBtn; // +0x120
    ChatBotPrologueMsgListView * _prologueMsgListView; // +0x128
    UIView * _chatBlurView; // +0x130
    MMUIButton * _settingBtn; // +0x138
}
- (id)initWithFrame:(CGRect)arg1 roomInfo:(id)arg2 openScene:(int)arg3 delegate:(id)arg4;
- (void)dealloc;
- (unsigned int)getViewStatus;
- (id)sessionId;
- (void)updateRoomInfo:(id)arg1;
- (id)dramaItemDataController;
- (void)layoutSubviews;
- (void)layoutDramaVideoListView;
- (void)layoutBlurView;
- (void)layoutContentViews;
- (void)layoutBackBtn;
- (void)close;
- (void)layoutStarBtn;
- (void)layoutSettingBtn;
- (void)onSettingBtnClick;
- (void)onStarBtnClick:(id)arg1;
- (void)layoutSocialHistoryTopBtn;
- (void)layoutAsstDiscoverBtn;
- (void)onClickAsstDiscoverBtn;
- (CGAffineTransform)getHeadViewTransform;
- (void)layoutHeadImageView;
- (void)showHistoryChatPop:(unsigned int)arg1;
- (void)layoutSocialHistoryBtn;
- (void)onSocialHistoryBtnClick:(id)arg1;
- (void)onSocialHistoryBtnClick;
- (void)layoutRoomNameLabel;
- (void)layoutModeSwitchBtn;
- (void)layoutBottomPanel;
- (void)layoutBottomPanelWithBitSet:(unsigned int)arg1;
- (void)layoutBoardView;
- (double)getHeadComponentBottom;
- (void)layoutVideoView;
- (void)handlePinch:(id)arg1;
- (void)showFastenPhoto:(id)arg1;
- (void)layoutFastenPhotoView;
- (void)layoutPhotoPreViewWithImg:(id)arg1;
- (void)layoutPrologueBtn;
- (void)onPrologueBtnClick;
- (void)layoutPrologueMsgListView;
- (void)layoutMomentView;
- (void)layoutMomentBlurBackgroundView;
- (void)layoutOwnMomentView;
- (void)layoutDramaShotShowTextBtn;
- (void)layoutEnterHistoryDramaBtn;
- (void)layoutDramaTopicLabel;
- (void)layoutGoBackLatestDramaBtn;
- (void)layoutGoToNextDramaShotBtn;
- (void)layoutDramaRecommendMsgView;
- (void)onGoBackLatestDramaBtnClicked;
- (void)onGoToNextDramaShotBtnClicked;
- (void)onEnterHistoryDramaBtnClicked;
- (void)onDramaShotShowTextBtnClicked;
- (void)onVCBeginPop;
- (void)onVCPopCancel;
- (void)updateViewStatus:(unsigned int)arg1;
- (void)updateViewStatus:(unsigned int)arg1 completeHandle:(id /* block */)arg2;
- (void)updateViewStatus:(unsigned int)arg1 animation:(BOOL)arg2 completeHandle:(id /* block */)arg3;
- (id)genTransferBoardData;
- (unsigned int)getCurUIState;
- (void)openMic;
- (void)closeMic:(BOOL)arg1;
- (BOOL)isLocationInGestureResponderView:(CGPoint)arg1;
- (BOOL)isLocationInSwitchVideoHotZones:(CGPoint)arg1;
- (BOOL)isOnVideoMode;
- (void)clearBoardContent;
- (void)onKeyBoardHide;
- (void)modifySideInfoWhenSendWelcome:(id)arg1;
- (void)onTalkSucc;
- (void)onChangeSpecialModel:(id)arg1 modelName:(id)arg2;
- (void)updateMicrophone:(BOOL)arg1 forbidSendMicStatus:(BOOL)arg2;
- (void)openTextInputMode;
- (BOOL)isMicrophoneOpen;
- (void)updateCameraMode:(BOOL)arg1;
- (void)onTakePhoto;
- (void)saveImageMemory:(id)arg1;
- (void)onStopButtonClick;
- (void)onFlipCamera;
- (void)changeIntoFullDuplexMode;
- (unsigned int)getCurrentVCVoIPScene;
- (id)switchVideoGestureHotZones;
- (void)showTraceUpdateAnimation;
- (BOOL)needShowBoardBackgroundView;
- (void)onShowBoardViewAnimation;
- (void)onChangeMainBtn:(BOOL)arg1;
- (void)boardViewHitTest:(id)arg1;
- (void)enterSocialHistoryPage;
- (void)onHeadViewSingleClick:(id)arg1;
- (void)setImageWithUrlStr:(id)arg1;
- (void)onModeSwitchBtnClick;
- (void)showHistoryUpdate;
- (void)onPrologueMsgListDataFirstLoadComplete;
- (void)didSwitchMode:(long long)arg1;
- (id)momentViewGetTopBackgroundColor:(id)arg1;
- (void)exitOwnMoment;
- (void)onLoadMoments:(int)arg1 momentModel:(id)arg2 isFirstLoad:(BOOL)arg3 cursorId:(id)arg4;
- (id)voipSession;
- (void)onCurrentPlayShotItemChanged:(id)arg1;
- (void)playIndexDidChange:(id)arg1 playIndex:(long long)arg2;
- (void)onIsInPreviewModeChanged:(BOOL)arg1;
- (id)dramaVideoRecommendMsgView;
- (void)onUpdateRecommendMsgView;
- (BOOL)pageCanPlayVideo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)roomNameLabel;
- (void)setRoomNameLabel:(id)arg1;
- (id)bottomPanel;
- (void)setBottomPanel:(id)arg1;
- (id)boardView;
- (void)setBoardView:(id)arg1;
- (int)openScene;
- (void)setOpenScene:(int)arg1;
- (id)dramaVideoListView;
- (void)setDramaVideoListView:(id)arg1;
- (unsigned int)viewStatus;
- (void)setViewStatus:(unsigned int)arg1;
- (BOOL)isMicOpen;
- (void)setIsMicOpen:(BOOL)arg1;
- (id)switchMomentModeView;
- (void)setSwitchMomentModeView:(id)arg1;
- (id)momentView;
- (void)setMomentView:(id)arg1;
- (id)momentViewBlurBackgroundView;
- (void)setMomentViewBlurBackgroundView:(id)arg1;
- (id)dramaShotShowTextBtn;
- (void)setDramaShotShowTextBtn:(id)arg1;
- (id)dramaNameLabel;
- (void)setDramaNameLabel:(id)arg1;
- (id)ownMomentView;
- (void)setOwnMomentView:(id)arg1;
- (id)enterHistoryDramaBtn;
- (void)setEnterHistoryDramaBtn:(id)arg1;
- (id)enterHistoryDramaIcon;
- (void)setEnterHistoryDramaIcon:(id)arg1;
- (id)dramaTopicLabel;
- (void)setDramaTopicLabel:(id)arg1;
- (id)goBackLatestDramaBtn;
- (void)setGoBackLatestDramaBtn:(id)arg1;
- (id)goBackLatestDramaIcon;
- (void)setGoBackLatestDramaIcon:(id)arg1;
- (id)goToNextDramaShotBtn;
- (void)setGoToNextDramaShotBtn:(id)arg1;
- (id)goToNextDramaShotIcon;
- (void)setGoToNextDramaShotIcon:(id)arg1;
- (id)dramaRecommendMsgView;
- (void)setDramaRecommendMsgView:(id)arg1;
- (id)bubbleViewDismissTimer;
- (void)setBubbleViewDismissTimer:(id)arg1;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)starBtn;
- (void)setStarBtn:(id)arg1;
- (id)socialHistoryTopBtn;
- (void)setSocialHistoryTopBtn:(id)arg1;
- (id)socialHistoryBtnBackgroundView;
- (void)setSocialHistoryBtnBackgroundView:(id)arg1;
- (id)socialHistoryBtn;
- (void)setSocialHistoryBtn:(id)arg1;
- (id)modeSwitchBtn;
- (void)setModeSwitchBtn:(id)arg1;
- (id)asstDiscoverBtn;
- (void)setAsstDiscoverBtn:(id)arg1;
- (BOOL)isVideoOpen;
- (void)setIsVideoOpen:(BOOL)arg1;
- (id)rciLocalBigRender;
- (void)setRciLocalBigRender:(id)arg1;
- (id)decLayerView;
- (void)setDecLayerView:(id)arg1;
- (id)photoPreView;
- (void)setPhotoPreView:(id)arg1;
- (id)fastenPhotoPreView;
- (void)setFastenPhotoPreView:(id)arg1;
- (unsigned int)enterRoomTime;
- (void)setEnterRoomTime:(unsigned int)arg1;
- (BOOL)hasPopStarUpdate;
- (void)setHasPopStarUpdate:(BOOL)arg1;
- (id)prologueBtn;
- (void)setPrologueBtn:(id)arg1;
- (id)prologueMsgListView;
- (void)setPrologueMsgListView:(id)arg1;
- (BOOL)isFirstLayoutSubviews;
- (void)setIsFirstLayoutSubviews:(BOOL)arg1;
- (id)chatBlurView;
- (void)setChatBlurView:(id)arg1;
- (id)settingBtn;
- (void)setSettingBtn:(id)arg1;
- (void).cxx_destruct;
@end
