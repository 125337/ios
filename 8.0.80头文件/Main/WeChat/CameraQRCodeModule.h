@interface CameraQRCodeModule : NSObject <CameraQRCodeAccessibilityOrderDelegate>
{
    id <CameraQRCodeModuleDelegate> _delegate; // +0x8
    UIView * _baseContentView; // +0x10
}
- (void)initDataWithDelegate:(id)arg1;
- (double)moduleContentWidth;
- (void)initHeaderView;
- (double)normarlCellHeightWithContainerWidth:(double)arg1;
- (double)expandedCellHeaderHeight;
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
- (BOOL)isCodeValid;
- (id)orderedAccessibilityElements:(id)arg1;
- (BOOL)allowInteractivePopGestureWhenExpanded;
- (BOOL)allowDismissViewController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)baseContentView;
- (void)setBaseContentView:(id)arg1;
- (void).cxx_destruct;
@end
