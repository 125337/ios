@interface WCFinderHalfProfileInteractionInfoDetailContentView : UIView <UIContentView>
{
    WCFinderHalfProfileInteractionInfoDetailConfiguration * _appliedConfiguration; // +0x8
    WCFinderRichTextView * _describeContentLabel; // +0x10
    UIView * _describeContentGestureView; // +0x18
}
+ (double)cellHeightWithConfiguration:(id)arg1 layoutEnvironment:(id)arg2;
+ (id)_getRichTextView;
- (id)initWithConfiguration:(id)arg1;
- (void)_setupUI;
- (void)layoutSubviews;
- (void)_applyConfiguration:(id)arg1;
- (void)_updateUI;
- (void)didTapLabel;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (id)appliedConfiguration;
- (void)setAppliedConfiguration:(id)arg1;
- (id)describeContentLabel;
- (void)setDescribeContentLabel:(id)arg1;
- (id)describeContentGestureView;
- (void)setDescribeContentGestureView:(id)arg1;
- (void).cxx_destruct;
@end
