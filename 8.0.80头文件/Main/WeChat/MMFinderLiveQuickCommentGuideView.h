@interface MMFinderLiveQuickCommentGuideView : UIView
{
    NSString * _userName; // +0x8
    NSString * _comment; // +0x10
    NSArray * _sampleCommentLineArr; // +0x18
    NSArray * _sampleBottomBtnArr; // +0x20
    UIView * _samplePostButton; // +0x28
}
- (id)initWithUserName:(id)arg1 comment:(id)arg2;
- (void)initSampleCommentLines;
- (void)initSampleBottomBtns;
- (void)initSamplePostButton;
- (void)layoutSubviews;
- (void)layoutSampleCommentLines;
- (void)layoutSampleBottomBtns;
- (void)layoutSamplePostButton;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)sampleCommentLineArr;
- (void)setSampleCommentLineArr:(id)arg1;
- (id)sampleBottomBtnArr;
- (void)setSampleBottomBtnArr:(id)arg1;
- (id)samplePostButton;
- (void)setSamplePostButton:(id)arg1;
- (void).cxx_destruct;
@end
