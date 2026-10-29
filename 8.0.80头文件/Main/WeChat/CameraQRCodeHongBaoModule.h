@interface CameraQRCodeHongBaoModule : CameraQRCodeModule <CameraQRCodeHongBaoModuleViewDelegate>
{
    CameraQRCodeHongBaoModuleView * _contentView; // +0x8
}
- (double)expandedCellHeightWithContainerWidth:(double)arg1;
- (id)iconImage;
- (id)title;
- (id)subTitle;
- (BOOL)isShowMoreButton;
- (void)onClickMoreButton;
- (id)expandedCellContainView;
- (void)modelContainerWillAppear;
- (void)modelWillExpanded;
- (void)modelWillCloseUp;
- (void)notifyExpandStatus:(BOOL)arg1;
- (void)hongBaoModuleViewDidClickMoreButton:(id)arg1;
- (id)hongBaoModuleViewGetReportContext;
- (BOOL)isCodeValid;
- (void)hasQRCodeImageExpose:(BOOL)arg1;
- (BOOL)allowInteractivePopGestureWhenExpanded;
- (BOOL)allowDismissViewController;
- (BOOL)checkPopbackActionAndShowTips;
- (void)onClickIKnow;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
