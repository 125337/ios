@interface WCFinderCommentSearchMentionHeaderView : UIView
{
    UILabel * _titleLabel; // +0x8
    MMUIButton * _closeBtn; // +0x10
    id <WCFinderCommentSearchMentionHeaderViewDelegate> _delegate; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)didClickClose:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
