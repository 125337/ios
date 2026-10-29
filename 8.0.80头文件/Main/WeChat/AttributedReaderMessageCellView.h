@interface AttributedReaderMessageCellView : ReaderMessageCellView
{
    UIView * m_lineViewTop; // +0x48
    UIView * m_lineViewBot; // +0x50
    CTRichTextView * m_digestView; // +0x58
    UIImageView * m_bgImageView; // +0x60
    MMUIImageView * m_headerMenuImage; // +0x68
    MMUIButton * m_headerMenuButton; // +0x70
    MMBrandHeadImageView * m_headerView; // +0x78
    MMWebImageView * m_rightCoverImageView; // +0x80
}
- (id)initWithViewModel:(id)arg1;
- (BOOL)canBeReused;
- (void)onAppear;
- (void)layoutContentView;
- (void)tryPreloadWeAppTaskIfNeeded;
- (void)addCornerToContentView;
- (void)initBgImageView;
- (void)initDigestView;
- (BOOL)isNeedHeaderMenuButton;
- (void)layoutHeaderMenuButtonIfNeedOnCenterY:(double)arg1;
- (void)onHeadImageClick;
- (void)onClicked;
- (void)jumpWeappOpWrap:(id)arg1;
- (void)onMoreButton:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onExpose;
- (id)operationMenuItems;
- (BOOL)canShowMoreMenuItem;
- (BOOL)isAccessibilityElement;
- (void)reportReaderTemplateMsgFold:(long long)arg1;
- (void).cxx_destruct;
@end
