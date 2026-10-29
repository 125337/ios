@interface ChatBotVoIPWeAppTalkingView : ChatBotVoIPTalkingView <CBTTalkingViewOptionalProtocol>
{
    BOOL _isMicOpen; // +0x8
    BOOL _isVideoOpen; // +0x9
    BOOL _hasPopStarUpdate; // +0xa
    BOOL _isFirstLayoutSubviews; // +0xb
    unsigned int _viewStatus; // +0xc
    unsigned int _enterRoomTime; // +0x10
    NSTimer * _bubbleViewDismissTimer; // +0x18
    MMUIButton * _backBtn; // +0x20
    XImageViewRenderer * _rciLocalBigRender; // +0x28
    UIView * _decLayerView; // +0x30
    UIImageView * _photoPreView; // +0x38
    ChatBotInnerShadowImageView * _fastenPhotoPreView; // +0x40
    MMUIButton * _prologueBtn; // +0x48
    ChatBotPrologueMsgListView * _prologueMsgListView; // +0x50
}
- (void)layoutContentViews;
- (void)layoutSubviews;
- (void)layoutBackBtn;
- (void)close;
- (CGAffineTransform)getHeadViewTransform;
- (void)layoutHeadImageView;
- (void)layoutRoomNameLabel;
- (void)layoutBottomPanel;
- (void)layoutBottomPanelWithBitSet:(unsigned int)arg1;
- (void)layoutBoardView;
- (double)getHeadComponentBottom;
- (unsigned int)viewStatus;
- (void)setViewStatus:(unsigned int)arg1;
- (BOOL)isMicOpen;
- (void)setIsMicOpen:(BOOL)arg1;
- (id)bubbleViewDismissTimer;
- (void)setBubbleViewDismissTimer:(id)arg1;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
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
- (void).cxx_destruct;
@end
