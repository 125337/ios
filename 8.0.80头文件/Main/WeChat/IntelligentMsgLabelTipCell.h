@interface IntelligentMsgLabelTipCell : MMTableViewCell
{
    MMUIImageView * m_leftImageView; // +0x8
    MMUILabel * m_titleLabel; // +0x10
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)updateCellWithLableTip:(id)arg1;
- (void).cxx_destruct;
@end
