@interface MMFinderLivePaidConnectMicAudienceConnectMethodView : UIView
{
    BOOL _selected; // +0x8
    BOOL _showSepLine; // +0x9
    NSString * _title; // +0x10
    NSString * _iconName; // +0x18
    unsigned long long _type; // +0x20
    id /* block */ _tapCallback; // +0x28
    MMUILabel * _titleLabel; // +0x30
    UIImageView * _iconImageView; // +0x38
    UIImageView * _checkMarkImageView; // +0x40
    UIView * _lineView; // +0x48
}
- (id)init;
- (void)initUI;
- (void)didTap;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;
- (void)refreshUI;
- (BOOL)selected;
- (BOOL)showSepLine;
- (void)setShowSepLine:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id /* block */)tapCallback;
- (void)setTapCallback:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)checkMarkImageView;
- (void)setCheckMarkImageView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end

