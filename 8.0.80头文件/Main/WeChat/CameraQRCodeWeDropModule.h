@interface CameraQRCodeWeDropModule : CameraQRCodeModule <CameraQRCodeWeDropModuleViewDelegate, WeDropReceiveViewModuleLifeCycleHelper>
{
    CameraQRCodeWeDropModuleView * _contentView; // +0x8
    NSString * _currentSessionId; // +0x10
}
- (void)dealloc;
- (double)expandedCellHeightWithContainerWidth:(double)arg1;
- (id)iconImage;
- (id)title;
- (id)subTitle;
- (id)expandedCellContainView;
- (void)weDropModuleViewDidClickEndButton:(id)arg1;
- (void)modelContainerWillAppear;
- (void)modelWillExpanded;
- (void)modelWillCloseUp;
- (BOOL)isCodeValid;
- (void)hasQRCodeImageExpose:(BOOL)arg1;
- (void)resetAllViews;
- (void)prepareForSessionEnd:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)currentSessionId;
- (void)setCurrentSessionId:(id)arg1;
- (void).cxx_destruct;
@end
