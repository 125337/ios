@interface GCInteractCellModelLayout : GCDynamicLayoutProvider
{
    double _topMargin; // +0x8
    double _headWidth; // +0x10
    double _avatarToTitleLandSpace; // +0x18
    GCLabelDynamicLayout * _titleLabelLayout; // +0x20
    double _titleToActionDescSpace; // +0x28
    GCLabelDynamicLayout * _actionDescLabelLayout; // +0x30
    double _actionDescToActionTextSpace; // +0x38
    GCLabelDynamicLayout * _actionTextLayout; // +0x40
    double _actionTextToQuoteSpace; // +0x48
    GCLabelDynamicLayout * _quoteLayout; // +0x50
    GCLabelDynamicLayout * _actionBtnLayout; // +0x58
    double _actionBtnUpSpace; // +0x60
    double _rightImgWidth; // +0x68
    GCLabelDynamicLayout * _rightFollowBtnLayout; // +0x70
    GCLabelDynamicLayout * _wechatNickLabelLayout; // +0x78
    GCLabelDynamicLayout * _markLabelLayout; // +0x80
}
- (id)init;
- (double)topMargin;
- (void)setTopMargin:(double)arg1;
- (double)headWidth;
- (void)setHeadWidth:(double)arg1;
- (double)avatarToTitleLandSpace;
- (void)setAvatarToTitleLandSpace:(double)arg1;
- (id)titleLabelLayout;
- (void)setTitleLabelLayout:(id)arg1;
- (double)titleToActionDescSpace;
- (void)setTitleToActionDescSpace:(double)arg1;
- (id)actionDescLabelLayout;
- (void)setActionDescLabelLayout:(id)arg1;
- (double)actionDescToActionTextSpace;
- (void)setActionDescToActionTextSpace:(double)arg1;
- (id)actionTextLayout;
- (void)setActionTextLayout:(id)arg1;
- (double)actionTextToQuoteSpace;
- (void)setActionTextToQuoteSpace:(double)arg1;
- (id)quoteLayout;
- (void)setQuoteLayout:(id)arg1;
- (id)actionBtnLayout;
- (void)setActionBtnLayout:(id)arg1;
- (double)actionBtnUpSpace;
- (void)setActionBtnUpSpace:(double)arg1;
- (double)rightImgWidth;
- (void)setRightImgWidth:(double)arg1;
- (id)rightFollowBtnLayout;
- (void)setRightFollowBtnLayout:(id)arg1;
- (id)wechatNickLabelLayout;
- (void)setWechatNickLabelLayout:(id)arg1;
- (id)markLabelLayout;
- (void)setMarkLabelLayout:(id)arg1;
- (void).cxx_destruct;
@end
