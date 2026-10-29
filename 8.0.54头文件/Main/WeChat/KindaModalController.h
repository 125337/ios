@interface KindaModalController : NSObject <KindaViewDelegate>
{
    KindaLayout * _layout; // +0x8
    UIImageView * _snapShotView; // +0x10
    MMIUIModal * _uiModal; // +0x18
    KindaUIModalDelegateObject * _delegateObject; // +0x20
    WCPayBlurViewHelper * _blurViewHelper; // +0x28
}
+ (void)removePotentialModals;
- (id)initWithModal:(id)arg1;
- (void)dealloc;
- (void)initLayout;
- (void)showModal;
- (void)dismissModal;
- (BOOL)isManagerOfModal:(id)arg1;
- (void)kindaViewSizeDidChange:(id)arg1;
- (void)notifyKeyboardWillShow:(CGSize)arg1;
- (void)notifyKeyboardWillHide:(CGSize)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (id)snapShotView;
- (void)setSnapShotView:(id)arg1;
- (id)uiModal;
- (void)setUiModal:(id)arg1;
- (id)delegateObject;
- (void)setDelegateObject:(id)arg1;
- (id)blurViewHelper;
- (void)setBlurViewHelper:(id)arg1;
- (void).cxx_destruct;
@end

