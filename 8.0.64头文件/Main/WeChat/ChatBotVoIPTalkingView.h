@interface ChatBotVoIPTalkingView : UIView <ChatBotVoIPBottomPanelDelegate, ChatBotVOIPBoardViewDelegate, ChatBotVoIPModeSelectViewDelegate, ChatBotTalkingAnimationHeadViewDelegate, IChatBotVoIPExt>
{
    BOOL _disableWelcomeEvent; // +0x8
    BOOL _isMicOpen; // +0x9
    BOOL _isVideoOpen; // +0xa
    BOOL _hasPopStarUpdate; // +0xb
    unsigned int _viewStatus; // +0xc
    unsigned int _enterRoomTime; // +0x10
    id <ChatBotVoIPTalkingViewDelegate> _delegate; // +0x18
    ChatBotVoIPRoomInfo * _roomInfo; // +0x20
    MMUIButton * _backBtn; // +0x28
    ChatBotBubblePopView * _starBtn; // +0x30
    ChatBotBubblePopView * _socialHistoryTopBtn; // +0x38
    ChatBotTalkingAnimationHeadView * _headImageView; // +0x40
    UIVisualEffectView * _socialHistoryBtnBackgroundView; // +0x48
    MMUIButton * _socialHistoryBtn; // +0x50
    MMUILabel * _roomNameLabel; // +0x58
    MMUIButton * _modeSwitchBtn; // +0x60
    ChatBotVOIPBoardView * _boardView; // +0x68
    ChatBotVoIPBottomPanel * _bottomPanel; // +0x70
    MMUIButton * _asstDiscoverBtn; // +0x78
    XImageViewRenderer * _rciLocalBigRender; // +0x80
    UIView * _decLayerView; // +0x88
    UIImageView * _photoPreView; // +0x90
    ChatBotInnerShadowImageView * _fastenPhotoPreView; // +0x98
}
- (id)initWithFrame:(CGRect)arg1 roomInfo:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (unsigned int)getViewStatus;
- (id)sessionId;
- (void)updateRoomInfo:(id)arg1;
- (void)layoutSubviews;
- (void)layoutContentViews;
- (void)layoutBackBtn;
- (void)close;
- (void)layoutStarBtn;
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
- (void)layoutBoardView;
- (double)getHeadComponentBottom;
- (void)layoutVideoView;
- (void)handlePinch:(id)arg1;
- (void)showFastenPhoto:(id)arg1;
- (void)layoutFastenPhotoView;
- (void)layoutPhotoPreViewWithImg:(id)arg1;
- (void)updateViewStatus:(unsigned int)arg1;
- (id)genTransferBoardData;
- (void)openMic;
- (void)closeMic;
- (BOOL)isLocationInBottomPanelView:(CGPoint)arg1;
- (BOOL)isOnVideoMode;
- (void)clearBoardContent;
- (void)onKeyBoardHide;
- (void)sendWelcomRequest;
- (void)sendFastenPhotoStateRequest:(BOOL)arg1;
- (void)onTalkSuccWithRoomID:(unsigned long long)arg1;
- (void)onChangeSpecialModel:(id)arg1 modelName:(id)arg2;
- (void)updateMicrophone:(BOOL)arg1;
- (void)openTextInputMode;
- (BOOL)isMicrophoneOpen;
- (void)updateCameraMode:(BOOL)arg1;
- (void)onTakePhoto;
- (void)saveImageMemory:(id)arg1;
- (void)onStopButtonClick;
- (void)onFlipCamera;
- (BOOL)needShowBoardBackgroundView;
- (void)onShowBoardViewAnimation;
- (void)onChangeMainBtn:(BOOL)arg1;
- (void)onHeadViewSingleClick:(id)arg1;
- (void)setImageWithUrlStr:(id)arg1;
- (void)onModeSwitchBtnClick;
- (void)judgementIsSendFastenPhotoState:(unsigned int)arg1;
- (void)showHistoryUpdate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)disableWelcomeEvent;
- (void)setDisableWelcomeEvent:(BOOL)arg1;
- (unsigned int)viewStatus;
- (void)setViewStatus:(unsigned int)arg1;
- (BOOL)isMicOpen;
- (void)setIsMicOpen:(BOOL)arg1;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)starBtn;
- (void)setStarBtn:(id)arg1;
- (id)socialHistoryTopBtn;
- (void)setSocialHistoryTopBtn:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)socialHistoryBtnBackgroundView;
- (void)setSocialHistoryBtnBackgroundView:(id)arg1;
- (id)socialHistoryBtn;
- (void)setSocialHistoryBtn:(id)arg1;
- (id)roomNameLabel;
- (void)setRoomNameLabel:(id)arg1;
- (id)modeSwitchBtn;
- (void)setModeSwitchBtn:(id)arg1;
- (id)boardView;
- (void)setBoardView:(id)arg1;
- (id)bottomPanel;
- (void)setBottomPanel:(id)arg1;
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
- (void).cxx_destruct;
@end
