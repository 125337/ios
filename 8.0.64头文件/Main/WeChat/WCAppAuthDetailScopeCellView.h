@interface WCAppAuthDetailScopeCellView : UITableViewCell
{
    WCAppAuthScopeInfoItem * _scopeItem; // +0x8
    unsigned long long _rowIndex; // +0x10
    UIImageView * _iconView; // +0x18
    MMUILabel * _descLabel; // +0x20
    UIView * _topLine; // +0x28
    UIView * _bottomLine; // +0x30
}
+ (double)cellHeightForScopeItem:(id)arg1 cellWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setScopeItem:(id)arg1 isBottomCell:(BOOL)arg2;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)iconImageForScope:(id)arg1;
- (id)scopeItem;
- (void)setScopeItem:(id)arg1;
- (unsigned long long)rowIndex;
- (void)setRowIndex:(unsigned long long)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end
