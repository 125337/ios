@interface QRCodeInMultiDisplayView : MMUIView
{
    id <QRCodeInMultiDisplayViewDelegate> _delegate; // +0x8
    NSMutableArray * _dotInfoList; // +0x10
    MMUIView * _maskView; // +0x18
    MMUIButton * _cancelButton; // +0x20
    NSMutableArray * _markDotViewList; // +0x28
    MMUILabel * _infoLabel; // +0x30
    MMTimer * _timer; // +0x38
}
- (id)initWithDotInfoList:(id)arg1;
- (void)initSubView;
- (void)layoutSubviews;
- (void)initDotViews;
- (void)setUpBreathAnimationTimmer;
- (void)startBreatheAnimation;
- (void)onDotViewClicked:(id)arg1;
- (void)initMastView;
- (void)initCancelBtn;
- (void)onCancelBtnClicked:(id)arg1;
- (void)layoutQRCodeDotViewInMulti:(id)arg1;
- (void)initInfoLabel;
- (BOOL)isWordingCollisionWithAnyMarkDotView;
- (BOOL)isSameCodeTypeName;
- (id)getInfoLabelText;
- (void)timerInvalidate;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dotInfoList;
- (void)setDotInfoList:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)markDotViewList;
- (void)setMarkDotViewList:(id)arg1;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end

