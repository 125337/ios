@interface MMFinderLiveConnectMicAudienceApplyPageSheetTableViewCell : UITableViewCell
{
    BOOL _isFirstCell; // +0x8
    BOOL _isLastCell; // +0x9
    UIImageView * _arrowView; // +0x10
    UIImageView * _iconView; // +0x18
    UILabel * _label; // +0x20
    UIView * _separatorBar; // +0x28
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (BOOL)isFirstCell;
- (void)setIsFirstCell:(BOOL)arg1;
- (BOOL)isLastCell;
- (void)setIsLastCell:(BOOL)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)separatorBar;
- (void)setSeparatorBar:(id)arg1;
- (void).cxx_destruct;
@end
