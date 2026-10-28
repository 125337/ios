@interface MMFinderLiveConnectedMicTableCellHeaderView : UITableViewCell
{
    MMFinderLiveConnectedMicBaseCellHeaderView * _baseView; // +0x8
}
+ (id)ReuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)updateWithTitle:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (BOOL)showSeparatorBar;
- (void)setShowSeparatorBar:(BOOL)arg1;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (void).cxx_destruct;
@end
