@interface BizAppBaseMessageCellView : CommonMessageCellView
{
    RichTextView * m_titleLabel; // +0xb0
    RichTextView * m_digestLabel; // +0xb8
    MMWebImageView * m_coverImageView; // +0xc0
    UIView * m_sourceView; // +0xc8
    MMHeadImageView * m_headImgView; // +0xd0
    MMUIImageView * m_wsDefaultImgView; // +0xd8
    MMUILabel * m_nicknameLabel; // +0xe0
    MMUILabel * m_sourceViewDetailLabel; // +0xe8
}
- (BOOL)canBeReused;
- (void)onTouchUpInside;
- (void)addTitleLabel;
- (void)addDigestLabel;
- (void)addCoverView;
- (void)addSourceView:(double)arg1;
- (id)operationMenuItems;
- (void)updateSourceView:(id)arg1 nickname:(id)arg2 detailStr:(id)arg3;
- (id)getSourceIcon;
- (BOOL)canPeek;
- (id)urlForPreView:(id)arg1;
- (id)viewControllerForPreview:(id)arg1;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (void).cxx_destruct;
@end
