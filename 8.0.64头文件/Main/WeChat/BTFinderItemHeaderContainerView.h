@interface BTFinderItemHeaderContainerView : MMUIView
{
    BOOL _forceSetHighlight; // +0x8
    UIView * _opaqueBgView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)opaqueBgView;
- (BOOL)forceSetHighlight;
- (void)setForceSetHighlight:(BOOL)arg1;
- (void)setOpaqueBgView:(id)arg1;
- (void).cxx_destruct;
@end
