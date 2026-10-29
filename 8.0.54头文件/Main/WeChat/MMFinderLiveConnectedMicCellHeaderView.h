@interface MMFinderLiveConnectedMicCellHeaderView : UITableViewCell
{
    UILabel * _titleLabel; // +0x8
    NSString * _titleText; // +0x10
    MMFinderLiveConnectedMicCellHeaderViewAction * _action; // +0x18
    MMUIButton * _actionButton; // +0x20
    UIView * _bottomSeparatorLine; // +0x28
}
+ (id)ReuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (BOOL)showSeparatorBar;
- (void)setShowSeparatorBar:(BOOL)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configTitleLabel;
- (void)layoutUI;
- (void)updateWithTitle:(id)arg1;
- (void)configSearchButton;
- (void)onTapSearchButton;
- (void)layoutSearchButton;
- (void)setAction:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)action;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)bottomSeparatorLine;
- (void)setBottomSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end

