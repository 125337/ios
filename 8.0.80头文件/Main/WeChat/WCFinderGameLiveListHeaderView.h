@interface WCFinderGameLiveListHeaderView : UIButton
{
    UIImageView * _iconImageView; // +0x8
    UIImageView * _arrowImageView; // +0x10
    MMUILabel * _textLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)iconImageView;
- (id)arrowImageView;
- (id)textLabel;
- (void)setIconImageView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
