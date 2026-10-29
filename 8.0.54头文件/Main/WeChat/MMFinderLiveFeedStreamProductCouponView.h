@interface MMFinderLiveFeedStreamProductCouponView : MMFinderLiveFeedStreamWidgetBaseView
{
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendCouponInfo * _bubble; // +0x8
    MMWebImageView * _iconImageView; // +0x10
    RichTextView * _textView; // +0x18
}
+ (double)defaultHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setBubble:(id)arg1;
- (void)initViews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)iconImageView;
- (id)textView;
- (void)setTaskId:(id)arg1;
- (void)startExposeAction;
- (void)endExposeAction;
- (id)bubble;
- (void)setIconImageView:(id)arg1;
- (void)setTextView:(id)arg1;
- (void).cxx_destruct;
@end

