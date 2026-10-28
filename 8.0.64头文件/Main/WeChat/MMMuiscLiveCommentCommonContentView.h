@interface MMMuiscLiveCommentCommonContentView : UIView
{
    BOOL _isJoinStyle; // +0x8
    MMMusicLiveCommentBaseViewModel * _viewModel; // +0x10
    RichTextView * _commentView; // +0x18
    NSString * _contentStr; // +0x20
}
+ (id)getContentStrFromModel:(id)arg1 isJoinStyle:(BOOL)arg2;
+ (double)calculateHeight:(id)arg1 isJoinStyle:(BOOL)arg2;
+ (CGSize)calculateSize:(id)arg1 outArrStyles:(id *)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)setViewModel:(id)arg1;
- (id)viewModel;
- (id)commentView;
- (void)setCommentView:(id)arg1;
- (id)contentStr;
- (void)setContentStr:(id)arg1;
- (BOOL)isJoinStyle;
- (void)setIsJoinStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
