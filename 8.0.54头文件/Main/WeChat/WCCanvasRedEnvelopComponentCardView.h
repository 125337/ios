@interface WCCanvasRedEnvelopComponentCardView : UIView
{
    int _baseType; // +0x8
    id <WCCanvasRedEnvelopComponentCardDelegate> _delegate; // +0x10
    WCAdvertiseInfo * _advertiseInfo; // +0x18
    long long _orientation; // +0x20
    id <WCCanvasComponentDelegate> _canvasDelegate; // +0x28
    WCCanvasComponentRedEnvelopInfo * _baseCardInfo; // +0x30
    WCCanvasComponentRedEnvelopSubCardInfo * _subCardInfo; // +0x38
    UIImageView * _bgImageView; // +0x40
    UILabel * _headlineView; // +0x48
    WCCanvasRedEnvelopComponentAvatarView * _avatarView; // +0x50
    UILabel * _titleView; // +0x58
    UILabel * _descView; // +0x60
    WCAdURLImageView * _redEnvelopView; // +0x68
    WCCanvasComponent * _redEnvelopVideoView; // +0x70
    UILabel * _redEnvelopBottomDescView; // +0x78
    UIImageView * _redEnvelopBottomImageView; // +0x80
    UIButton * _actionBtn; // +0x88
    WCCanvasComponent * _shareComponent; // +0x90
}
- (id)initWithFrame:(CGRect)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3 delegate:(id)arg4 canvasDelegate:(id)arg5 baseType:(int)arg6 baseCardInfo:(id)arg7 subCardInfo:(id)arg8;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)bgImageView;
- (id)headlineView;
- (id)avatarView;
- (id)titleView;
- (id)descView;
- (id)redEnvelopBottomImageView;
- (id)redEnvelopBottomDescView;
- (id)redEnvelopView;
- (id)redEnvelopVideoView;
- (id)actionBtn;
- (id)shareComponent;
- (void)onActionButtonClicked;
- (void)setShadowToView;
- (void)removeShadowFromView;
- (void)updateCardViewWithStatus:(unsigned int)arg1 opType:(unsigned int)arg2;
- (id)generateSimpleLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
- (int)componentCardSubtype;
- (void)cardDidFullyAppearInMainScreen:(BOOL)arg1;
- (void)cardWillAppearInMainScreen:(BOOL)arg1;
- (void)cardWillDisappearInMainScreen:(BOOL)arg1;
- (void)cardAppearFactorChagneInMainScreen;
- (void)cardDidEnterBackground;
- (void)cardWillEnterForeground;
- (void)cardWillResumeState:(BOOL)arg1;
- (void)cardWillStopState:(BOOL)arg1;
- (void)canvasCloseBtnClick;
- (void)cardReportAddExposureCount;
- (void)resetSightViewAudioState:(BOOL)arg1;
- (void)encoreShakeResetSpecialView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)advertiseInfo;
- (void)setAdvertiseInfo:(id)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (id)canvasDelegate;
- (void)setCanvasDelegate:(id)arg1;
- (int)baseType;
- (void)setBaseType:(int)arg1;
- (id)baseCardInfo;
- (void)setBaseCardInfo:(id)arg1;
- (id)subCardInfo;
- (void)setSubCardInfo:(id)arg1;
- (void)setBgImageView:(id)arg1;
- (void)setHeadlineView:(id)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setDescView:(id)arg1;
- (void)setRedEnvelopView:(id)arg1;
- (void)setRedEnvelopVideoView:(id)arg1;
- (void)setRedEnvelopBottomDescView:(id)arg1;
- (void)setRedEnvelopBottomImageView:(id)arg1;
- (void)setActionBtn:(id)arg1;
- (void)setShareComponent:(id)arg1;
- (void).cxx_destruct;
@end

