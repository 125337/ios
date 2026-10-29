@interface WCListenLyricsPlayCell : UICollectionViewCell
{
    MMUILabel * _textLabel; // +0x8
    UIView * _highlightedView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureLayout;
- (void)internalConfigureLayout:(id)arg1 textColor:(id)arg2 paddingEdgeInsets:(UIEdgeInsets)arg3;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateText:(id)arg1;
- (void)updateText:(id)arg1 font:(id)arg2 textColor:(id)arg3 paddingEdgeInsets:(UIEdgeInsets)arg4;
- (void)updateDisplay:(double)arg1;
- (id)textLabel;
- (id)highlightedView;
- (void)setTextLabel:(id)arg1;
- (void)setHighlightedView:(id)arg1;
- (void).cxx_destruct;
@end

