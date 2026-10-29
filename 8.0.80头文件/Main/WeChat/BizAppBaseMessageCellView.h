@interface BizAppBaseMessageCellView : CommonMessageCellView <MMMenuControllerExt>
{
    RichTextView * m_titleLabel; // +0xb8
    RichTextView * m_digestLabel; // +0xc0
    MMWebImageView * m_coverImageView; // +0xc8
    UIView * m_sourceView; // +0xd0
    MMHeadImageView * m_headImgView; // +0xd8
    MMUIImageView * m_wsDefaultImgView; // +0xe0
    MMUILabel * m_nicknameLabel; // +0xe8
    MMUILabel * m_sourceViewDetailLabel; // +0xf0
    NSMutableDictionary * m_reportParams; // +0xf8
    BOOL m_needReportSummaryAd; // +0x100
}
- (BOOL)canBeReused;
- (void)dealloc;
- (void)onTouchUpInside;
- (void)addTitleLabel;
- (void)addDigestLabel;
- (void)addCoverView;
- (void)addSourceView:(double)arg1;
- (id)operationMenuItems;
- (void)onShowOperationMenu;
- (void)updateReportParams;
- (void)updateXiaoWeiSummaryReportParams;
- (void)updateYuanBaoSummaryReportParams;
- (void)reportYuanBaoSummaryMenuExposure;
- (void)reportXiaoWeiSummaryMenuExposure;
- (void)updateSourceView:(id)arg1 nickname:(id)arg2 detailStr:(id)arg3;
- (id)getSourceIcon;
- (BOOL)canShowYuanBaoSummaryMenuItem;
- (void)onYuanBaoSummary:(id)arg1;
- (void)onXiaoWeiSummary:(id)arg1;
- (BOOL)canPeek;
- (id)urlForPreView:(id)arg1;
- (id)viewControllerForPreview:(id)arg1;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (void)onMenuControllerDidHide;
- (void).cxx_destruct;
@end
