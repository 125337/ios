@interface BizAppBaseMessageCellView : CommonMessageCellView
{
    RichTextView * m_titleLabel; // +0xa8
    RichTextView * m_digestLabel; // +0xb0
    MMWebImageView * m_coverImageView; // +0xb8
    UIView * m_sourceView; // +0xc0
    MMHeadImageView * m_headImgView; // +0xc8
    MMUIImageView * m_wsDefaultImgView; // +0xd0
    MMUILabel * m_nicknameLabel; // +0xd8
    MMUILabel * m_sourceViewDetailLabel; // +0xe0
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

