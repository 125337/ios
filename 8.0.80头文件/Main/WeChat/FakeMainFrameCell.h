@interface FakeMainFrameCell : MMTableViewCell
{
    FakeMainFrameItemView * m_itemView; // +0x8
    UIView * _separatorLine; // +0x10
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateContentView:(id)arg1 tableViewFrame:(CGRect)arg2;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end
