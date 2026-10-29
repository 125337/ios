@interface WCPayOrderDetailBarView : MMUIView
{
    CGRect _oldFrame; // +0x8
    BOOL _inAnimation; // +0x28
    double _oldBrightness; // +0x30
    MMUILabel * _barCodeLabel; // +0x38
    QBarCodeView * _imageBarView; // +0x40
    MMUIView * _container; // +0x48
    MMUIView * _maskView; // +0x50
}
+ (double)barCodeWidth;
- (id)init;
- (void)commonInit;
- (void)codeViewTapped:(id)arg1;
- (void)exitFullScreenWithView:(id)arg1 animation:(BOOL)arg2;
- (void)updateCode:(id)arg1;
- (BOOL)inFullscreen;
- (id)barCodeLabel;
- (void)setBarCodeLabel:(id)arg1;
- (id)imageBarView;
- (void)setImageBarView:(id)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (void).cxx_destruct;
@end

