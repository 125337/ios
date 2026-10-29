@interface WAAgentSuggestionRowView : UIView
{
    UILabel * _textLabel; // +0x8
    UIImageView * _arrowImageView; // +0x10
    id /* block */ _onTap; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)handleTap;
- (double)preferredWidthForMaxWidth:(double)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id /* block */)onTap;
- (void)setOnTap:(id /* block */)arg1;
- (void).cxx_destruct;
@end
