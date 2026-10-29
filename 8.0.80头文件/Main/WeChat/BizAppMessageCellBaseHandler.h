@interface BizAppMessageCellBaseHandler : NSObject <MMMenuControllerExt>
{
    NSMutableDictionary * m_reportParams; // +0x8
    BOOL m_needReportSummaryAd; // +0x10
    CommonMessageCellView * _cellView; // +0x18
}
- (id)initWithCellView:(id)arg1;
- (void)dealloc;
- (id)genOperationMenuItems;
- (void)onShowOperationMenuWithMenuItems:(id)arg1;
- (id)sourceHeadViewInSize:(CGSize)arg1 userName:(id)arg2;
- (BOOL)canShowYuanBaoSummaryMenuItem;
- (void)onYuanBaoSummary:(id)arg1;
- (void)onXiaoWeiSummary:(id)arg1;
- (void)updateReportParams;
- (void)updateXiaoWeiSummaryReportParams;
- (void)updateYuanBaoSummaryReportParams;
- (void)reportYuanBaoSummaryMenuExposure;
- (void)reportXiaoWeiSummaryMenuExposure;
- (id)urlForPreView:(id)arg1;
- (id)viewControllerForPreview:(id)arg1;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (void)onMenuControllerDidHide;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (void).cxx_destruct;
@end
