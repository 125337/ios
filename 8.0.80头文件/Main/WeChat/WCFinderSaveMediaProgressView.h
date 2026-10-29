@interface WCFinderSaveMediaProgressView : MMPageSheetBaseView
{
    BOOL _isDismissed; // +0x8
    id /* block */ _cancelBlock; // +0x10
    WCFinderProgressView * _circleProgressView; // +0x18
    UILabel * _statusLabel; // +0x20
    UILabel * _hintLabel; // +0x28
    UIButton * _closeButton; // +0x30
    NSString * _tid; // +0x38
    MMTipsViewController * _closeConfirmTipsVC; // +0x40
}
- (id)initWithContentVM:(id)arg1;
- (void)_setupWithContentVM:(id)arg1;
- (void)pageSheetDidDismiss;
- (void)onPageSheetContainerBgTapped;
- (void)_onCloseButtonTapped;
- (void)_showCloseConfirmation;
- (void)updateProgress:(double)arg1;
- (void)showCompletedWithSuccess:(BOOL)arg1 completion:(id /* block */)arg2;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id)circleProgressView;
- (void)setCircleProgressView:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (BOOL)isDismissed;
- (void)setIsDismissed:(BOOL)arg1;
- (id)closeConfirmTipsVC;
- (void)setCloseConfirmTipsVC:(id)arg1;
- (void).cxx_destruct;
@end
