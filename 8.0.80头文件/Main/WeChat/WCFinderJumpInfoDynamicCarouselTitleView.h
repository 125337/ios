@interface WCFinderJumpInfoDynamicCarouselTitleView : UIView <MMWebImageViewDelegate>
{
    WCFinderJumpInfoDynamicCarouselTitleViewItem * _viewItem; // +0x8
    UIView * _iconImageContainerView; // +0x10
    NSArray * _iconImageViews; // +0x18
    MMUILabel * _textLabel; // +0x20
    id /* block */ _contentSizeDidChangeBlock; // +0x28
}
+ (id)createIconImageView;
+ (id)createTextLabel;
- (id)initWithFrame:(CGRect)arg1;
- (void)loadSubviews;
- (void)updateViewItem:(id)arg1;
- (void)updateContent;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)iconSizeThatFits:(id)arg1 withMaxHeight:(double)arg2;
- (void)layoutSubviews;
- (void)contentSizeDidChange;
- (void)onLoadImageOK:(id)arg1;
- (id)viewItem;
- (id)iconImageContainerView;
- (void)setIconImageContainerView:(id)arg1;
- (id)iconImageViews;
- (void)setIconImageViews:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id /* block */)contentSizeDidChangeBlock;
- (void)setContentSizeDidChangeBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
