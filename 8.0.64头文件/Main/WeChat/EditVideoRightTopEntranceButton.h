@interface EditVideoRightTopEntranceButton : MMUIButton
{
    UIImageView * _logoImageView; // +0x8
    UILabel * _textLabel; // +0x10
    UIImageView * _arrowImageView; // +0x18
}
+ (id)WeSeeEntrance;
+ (id)finderEntranceForLongVideo;
+ (id)finderEntranceForShortVideo;
+ (id)longVideoEntrance;
- (id)logoImageView;
- (id)textLabel;
- (id)arrowImageView;
- (void)loadWithLogo:(id)arg1 title:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (void)setLogoImageView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
