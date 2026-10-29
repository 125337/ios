@interface MMOrderCenterOrderSearchHistoryTableViewItemCell : UITableViewCell
{
    NSString * _keyword; // +0x8
    id <MMOrderCenterOrderSearchHistoryTableViewItemCellDelegate> _delegate; // +0x10
    UIImageView * _historyIconView; // +0x18
    UILabel * _keywordView; // +0x20
    UIButton * _removeView; // +0x28
    UIView * _separatorBarView; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithKeyword:(id)arg1;
- (void)layoutSubviews;
- (void)onRemoveTapped;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)historyIconView;
- (void)setHistoryIconView:(id)arg1;
- (id)keywordView;
- (void)setKeywordView:(id)arg1;
- (id)removeView;
- (void)setRemoveView:(id)arg1;
- (id)separatorBarView;
- (void)setSeparatorBarView:(id)arg1;
- (void).cxx_destruct;
@end

