@interface WCFinderRootEditImageViewController : WCEditImageViewController
{
    BOOL _shouldCropPhotoInVisibleFrame; // +0x68
    unsigned long long _enterTime; // +0x70
    UILabel * _naviLabel; // +0x78
}
- (void)viewDidAppear:(BOOL)arg1;
- (id)getReportExtInfoDismissState:(BOOL)arg1 eventCode:(long long)arg2;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (id)naviLabel;
- (void)setUpNaviLabel;
- (BOOL)shouldCropPhotoInVisibleFrame;
- (void)setShouldCropPhotoInVisibleFrame:(BOOL)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (void)setNaviLabel:(id)arg1;
- (void).cxx_destruct;
@end

