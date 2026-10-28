@interface WCFinderPanelMultiImageCommentCell : UICollectionViewCell
{
    WCFinderComment * _comment; // +0x8
    id /* block */ _clickAction; // +0x10
    WCFinderAnimationLoadingView * _loadingView; // +0x18
    UIImageView * _imageView; // +0x20
}
+ (id)cellID;
- (void)updateWithComment:(id)arg1 clickAction:(id /* block */)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)adjustUILayout;
- (void)_setImageViewImage:(id)arg1;
- (void)handleClickImageAction:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id /* block */)clickAction;
- (void)setClickAction:(id /* block */)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end
