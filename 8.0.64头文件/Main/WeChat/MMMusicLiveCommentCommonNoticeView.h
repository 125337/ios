@interface MMMusicLiveCommentCommonNoticeView : UIView
{
    MMMusicLiveCommentBaseViewModel * _viewModel; // +0x8
    UIView * _commentBgView; // +0x10
    MMMuiscLiveCommentCommonContentView * _commentView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (void)sizeToFit;
- (id)viewModel;
- (id)commentBgView;
- (void)setCommentBgView:(id)arg1;
- (id)commentView;
- (void)setCommentView:(id)arg1;
- (void).cxx_destruct;
@end
