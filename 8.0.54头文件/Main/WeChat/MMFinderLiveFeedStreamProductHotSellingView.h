@interface MMFinderLiveFeedStreamProductHotSellingView : MMFinderLiveFeedStreamWidgetBaseView
{
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo * _bubble; // +0x8
    UIView * _containerView; // +0x10
    UIView * _imageContainerView; // +0x18
    NSMutableArray * _roundImageViews; // +0x20
    UILabel * _contentLabel; // +0x28
}
+ (double)defaultHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)setBubble:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)imageView:(id)arg1 size:(CGSize)arg2;
- (void)setTaskId:(id)arg1;
- (void)startExposeAction;
- (void)endExposeAction;
- (id)bubble;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)imageContainerView;
- (void)setImageContainerView:(id)arg1;
- (id)roundImageViews;
- (void)setRoundImageViews:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (void).cxx_destruct;
@end

