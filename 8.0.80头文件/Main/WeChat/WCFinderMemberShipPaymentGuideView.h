@interface WCFinderMemberShipPaymentGuideView : UIView
{
    id <WCFinderMemberShipPaymentGuideViewDelegate> _delegate; // +0x8
    id <WCFinderHalfScreenListenProtocol> _halfScreenDelegate; // +0x10
    double _operationAreaTopPosition; // +0x18
    UIVisualEffectView * _blurMaskView; // +0x20
    UIView * _blackMaskView; // +0x28
    MMUILabel * _tipsLabel; // +0x30
    UIButton * _confirmButton; // +0x38
    UILabel * _confirmLabel; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutMaskView;
- (void)layoutBlackMaskView;
- (void)layoutTipsLabel;
- (void)layoutSubviews;
- (void)setLineSpace:(double)arg1 withText:(id)arg2 inLabel:(id)arg3;
- (void)layoutConfirmButton;
- (void)layoutCycleLabel;
- (void)setOperationAreaTopPosition:(double)arg1;
- (void)updateConfirmTips:(id)arg1 centerTips:(id)arg2;
- (void)halfScreenStateChanged;
- (void)_updateLayout;
- (double)_tipLabelTopPositionWithHalfScreenViewProgress:(double)arg1 halfScreenHeightPercent:(double)arg2;
- (void)onConfirm;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)halfScreenDelegate;
- (void)setHalfScreenDelegate:(id)arg1;
- (double)operationAreaTopPosition;
- (id)blurMaskView;
- (void)setBlurMaskView:(id)arg1;
- (id)blackMaskView;
- (void)setBlackMaskView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)confirmLabel;
- (void)setConfirmLabel:(id)arg1;
- (void).cxx_destruct;
@end
