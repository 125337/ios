@interface WCCommentDetailHeaderView : UIView
{
    UILabel * _titleLabel; // +0x8
    UILabel * _subTitleLabel; // +0x10
    MMUIButton * _closeBtn; // +0x18
    UIStackView * _titleViewContainer; // +0x20
    id <WCCommentDetailHeaderViewDelegate> _delegate; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)adjustLayout;
- (void)layoutSubviews;
- (void)didClickClose:(id)arg1;
- (id)titleLabel;
- (id)subTitleLabel;
- (id)titleViewContainer;
- (id)closeBtn;
- (void)setTitleLabel:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setCloseBtn:(id)arg1;
- (void)setTitleViewContainer:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
