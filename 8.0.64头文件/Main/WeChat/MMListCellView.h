@interface MMListCellView : UIView
{
    BOOL _isHighlightable; // +0x8
    MMListCellConfig * _config; // +0x10
    id <MMListContentUIDelegate> _uiDelegate; // +0x18
}
- (id)drawCell;
- (id)verticalStack;
- (id)horizontalStack;
- (void)drawSeparator;
- (void)configDataReport:(id)arg1;
- (id)initWithConfig:(id)arg1 uiDelegate:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isHighlightable;
- (void)setIsHighlightable:(BOOL)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)uiDelegate;
- (void)setUiDelegate:(id)arg1;
- (void).cxx_destruct;
@end
