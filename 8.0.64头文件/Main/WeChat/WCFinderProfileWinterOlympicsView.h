@interface WCFinderProfileWinterOlympicsView : UIImageView
{
    BOOL _displayCoveredMode; // +0x8
    id _target; // +0x10
    SEL _action; // +0x18
    FinderJumpInfo * _jumpInfo; // +0x20
    UIImageView * _leftIconView; // +0x28
    UIImageView * _arrowIconView; // +0x30
    UILabel * _titleLabel; // +0x38
    UILabel * _descLabel; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setDisplayCoveredMode:(BOOL)arg1;
- (BOOL)showDarkStyle;
- (void)updateBG;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setJumpInfo:(id)arg1;
- (void)onClick;
- (id)target;
- (void)setTarget:(id)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (BOOL)displayCoveredMode;
- (id)jumpInfo;
- (id)leftIconView;
- (void)setLeftIconView:(id)arg1;
- (id)arrowIconView;
- (void)setArrowIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
