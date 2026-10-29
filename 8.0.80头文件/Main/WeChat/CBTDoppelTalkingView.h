@interface CBTDoppelTalkingView : UIView <ChatBotSwitchModeViewDelegate, CBTAsstMomentViewDelegate, CBTOwnMomentViewDelegate, ICBTMomentExt, CBTDramaVideoListViewDelegate, ChatBotVoIPBottomPanelDelegate, IChatBotVoIPSessionDelegate, CBTTalkingViewOptionalProtocol>
{
    BOOL _isMicOpen; // +0x8
    BOOL _hasPopStarUpdate; // +0x9
    BOOL _isFirstLayoutSubviews; // +0xa
    int _openScene; // +0xc
    unsigned int _viewStatus; // +0x10
    unsigned int _enterRoomTime; // +0x14
    id <ChatBotVoIPTalkingViewDelegate> _delegate; // +0x18
    ChatBotVoIPRoomInfo * _roomInfo; // +0x20
    ChatBotVoIPBottomPanel * _bottomPanel; // +0x28
    CBTDramaVideoListView * _dramaVideoListView; // +0x30
    ChatBotSwitchModeView * _switchMomentModeView; // +0x38
    CBTAsstMomentView * _momentView; // +0x40
    UIView * _momentViewBlurBackgroundView; // +0x48
    MMUIButton * _dramaShotShowTextBtn; // +0x50
    MMUILabel * _dramaNameLabel; // +0x58
    CBTOwnMomentView * _ownMomentView; // +0x60
    MMUIButton * _enterHistoryDramaBtn; // +0x68
    MMUIImageView * _enterHistoryDramaIcon; // +0x70
    MMUILabel * _dramaTopicLabel; // +0x78
    MMUIButton * _goBackLatestDramaBtn; // +0x80
    MMUIImageView * _goBackLatestDramaIcon; // +0x88
    MMUIButton * _goToNextDramaShotBtn; // +0x90
    MMUIImageView * _goToNextDramaShotIcon; // +0x98
    ChatBotReCommendMsgView * _dramaRecommendMsgView; // +0xa0
    MMUIButton * _backBtn; // +0xa8
    ChatBotBubblePopView * _starBtn; // +0xb0
    UIVisualEffectView * _socialHistoryBtnBackgroundView; // +0xb8
    MMUIButton * _socialHistoryBtn; // +0xc0
    UIView * _chatBlurView; // +0xc8
    MMUIButton * _settingBtn; // +0xd0
}
- (id)initWithFrame:(CGRect)arg1 roomInfo:(id)arg2 openScene:(int)arg3 delegate:(id)arg4;
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
- (void)layoutBottomPanel;
- (void)layoutBottomPanelWithBitSet:(unsigned int)arg1;
- (void)handlePinch:(id)arg1;
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
- (void)updateViewStatus:(unsigned int)arg1;
- (void)updateViewStatus:(unsigned int)arg1 completeHandle:(id /* block */)arg2;
- (void)updateViewStatus:(unsigned int)arg1 animation:(BOOL)arg2 completeHandle:(id /* block */)arg3;
- (unsigned int)getCurUIState;
- (void)openMic;
- (void)closeMic:(BOOL)arg1;
- (BOOL)isLocationInGestureResponderView:(CGPoint)arg1;
- (BOOL)isLocationInSwitchVideoHotZones:(CGPoint)arg1;
- (void)modifySideInfoWhenSendWelcome:(id)arg1;
- (void)onChangeSpecialModel:(id)arg1 modelName:(id)arg2;
- (void)updateMicrophone:(BOOL)arg1 forbidSendMicStatus:(BOOL)arg2;
- (BOOL)isMicrophoneOpen;
- (unsigned int)getCurrentVCVoIPScene;
- (id)switchVideoGestureHotZones;
- (void)showTraceUpdateAnimation;
- (void)showHistoryUpdate;
- (void)didSwitchMode:(long long)arg1;
- (void)exitOwnMoment;
- (void)onLoadMoments:(int)arg1 momentModel:(id)arg2 isFirstLoad:(BOOL)arg3 cursorId:(id)arg4;
- (id)voipSession;
- (void)onCurrentPlayShotItemChanged:(id)arg1;
- (void)playIndexDidChange:(id)arg1 playIndex:(long long)arg2;
- (void)onIsInPreviewModeChanged:(BOOL)arg1;
- (id)dramaVideoRecommendMsgView;
- (void)onUpdateRecommendMsgView;
- (BOOL)pageCanPlayVideo;
- (void)onAddNewTraceItems:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (id)bottomPanel;
- (void)setBottomPanel:(id)arg1;
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
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)starBtn;
- (void)setStarBtn:(id)arg1;
- (id)socialHistoryBtnBackgroundView;
- (void)setSocialHistoryBtnBackgroundView:(id)arg1;
- (id)socialHistoryBtn;
- (void)setSocialHistoryBtn:(id)arg1;
- (unsigned int)enterRoomTime;
- (void)setEnterRoomTime:(unsigned int)arg1;
- (BOOL)hasPopStarUpdate;
- (void)setHasPopStarUpdate:(BOOL)arg1;
- (BOOL)isFirstLayoutSubviews;
- (void)setIsFirstLayoutSubviews:(BOOL)arg1;
- (id)chatBlurView;
- (void)setChatBlurView:(id)arg1;
- (id)settingBtn;
- (void)setSettingBtn:(id)arg1;
- (void).cxx_destruct;
@end
