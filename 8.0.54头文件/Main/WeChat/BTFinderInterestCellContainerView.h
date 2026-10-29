@interface BTFinderInterestCellContainerView : UIView
{
    BOOL _forceSetHighlight; // +0x8
    UIView * _highlightView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (BOOL)forceSetHighlight;
- (void)setForceSetHighlight:(BOOL)arg1;
- (void).cxx_destruct;
@end

