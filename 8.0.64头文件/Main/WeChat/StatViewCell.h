@interface StatViewCell : UIView
{
    MMUILabel * _rowCountNumber; // +0x8
    MMUIButton * _rowTitleArrowButton; // +0x10
    id <StatViewCellDelegate> _delegate; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initView;
- (void)updateWithTitle:(id)arg1 countNumber:(id)arg2 withAction:(SEL)arg3;
- (void)onClickToTotalUserStats;
- (id)rowCountNumber;
- (void)setRowCountNumber:(id)arg1;
- (id)rowTitleArrowButton;
- (void)setRowTitleArrowButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
