@interface Olympic2024ChampionTailView : BraceletChampionTailView
{
    MMWebImageView * _iconView; // +0x10
    UILabel * _titleView; // +0x18
    UIView * _seperatorView; // +0x20
    UILabel * _descLabel; // +0x28
    UIImageView * _arrowView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)displayText;
- (void)setRankExtInfo:(id)arg1;
- (id)iconView;
- (id)titleView;
- (id)seperatorView;
- (id)descLabel;
- (id)arrowView;
- (void)initViews;
- (void)layoutUI;
- (void)setIconView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setSeperatorView:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end

