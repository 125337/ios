@interface MJImagePanel : UIView
{
    NSLayoutConstraint * _heightConstraint; // +0x8
    double _panelHeight; // +0x10
    id /* block */ _translateYHandler; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)isEditingPanel;
- (void)setPanelHeight:(double)arg1;
- (BOOL)processRenderTapWithLayer:(id)arg1 events:(unsigned long long)arg2;
- (id)delegateBySubclass;
- (void)startLoadingWithText:(id)arg1 disableInteraction:(BOOL)arg2;
- (void)stopLoadingWithText:(id)arg1 success:(BOOL)arg2;
- (void)stopLoading;
- (double)panelHeight;
- (id /* block */)translateYHandler;
- (void)setTranslateYHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
