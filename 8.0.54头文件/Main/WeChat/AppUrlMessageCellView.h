@interface AppUrlMessageCellView : CommonMessageCellView
{
    RichTextView * m_titleLabel; // +0xa8
    RichTextView * m_detailLabel; // +0xb0
    UIImageView * m_thumbImageView; // +0xb8
}
- (BOOL)canBeReused;
- (void)layoutContentView;
- (id)displayViewForImageBrowser;
- (void)onAppear;
- (id)defaultThumbImage;
- (void)addTitleLabel;
- (void)addDetailLabel;
- (id)digestFont;
- (double)digestMaxWidth;
- (void)addThumbImageView;
- (void)addVideoIcon;
- (BOOL)isAsk;
- (void)updateThumbImage;
- (id)thumbImage;
- (id)thumbImageView;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)doFavorite;
- (void)onForward:(id)arg1;
- (BOOL)canPeek;
- (id)urlForPreView:(id)arg1;
- (id)viewControllerForPreview:(id)arg1;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (void).cxx_destruct;
@end

