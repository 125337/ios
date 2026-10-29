@interface WAAgentSessionImageCell : WAAgentSessionBaseCell <FavFullScreenImageViewControllerDelegate>
{
    id /* block */ _onPreviewTapped; // +0x8
    NSMutableArray * _imageViews; // +0x10
    UIView * _containerView; // +0x18
    NSMutableArray * _imageInfos; // +0x20
}
+ (double)cellHeightWithViewModel:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupViews;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)handleImageTap:(id)arg1;
- (void)showFullScreenImageForIndex:(long long)arg1;
- (void)onFullScreenItemViewShowWithImgInfo:(id)arg1;
- (CGRect)getOriginImageViewRectWithSimpleImgInfo:(id)arg1;
- (id)getOriginImageViewWithSimpleImgInfo:(id)arg1;
- (id /* block */)onPreviewTapped;
- (void)setOnPreviewTapped:(id /* block */)arg1;
- (id)imageViews;
- (void)setImageViews:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)imageInfos;
- (void)setImageInfos:(id)arg1;
- (void).cxx_destruct;
@end
