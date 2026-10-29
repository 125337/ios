@interface MMMusicLiveCommentCommonCell : UITableViewCell
{
    MMMusicLiveCommentBaseViewModel * _viewModel; // +0x8
    id <MMusicLiveCommentCommonDelegate> _delegate; // +0x10
    UIView * _commentBgView; // +0x18
    MMMuiscLiveCommentCommonContentView * _commentView; // +0x20
    UIView * _separator; // +0x28
    MMMusicLiveCommentCellDetailView * _detailView; // +0x30
}
+ (double)calculateHeight:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (void)longPressToExpose;
- (void)onCommentClicked;
- (void)onCommentDetailViewClicked;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)commentBgView;
- (void)setCommentBgView:(id)arg1;
- (id)commentView;
- (void)setCommentView:(id)arg1;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (id)detailView;
- (void)setDetailView:(id)arg1;
- (void).cxx_destruct;
@end

