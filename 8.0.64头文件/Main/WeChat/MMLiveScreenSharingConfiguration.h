@interface MMLiveScreenSharingConfiguration : MMUserService <MMServiceProtocol>
{
    long long _centerXSideOfCameraToScreen; // +0x8
    double _centerYRatioOfCameraToScreen; // +0x10
    CGSize _sizeOfScreen; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)canShareScreen;
- (BOOL)showsScreenSharingEntranceInOperationView;
- (void)setShowsScreenSharingEntranceInOperationView:(BOOL)arg1;
- (BOOL)SEIAnchorStatusWithScreenSharingIncompatible;
- (BOOL)showsCameraOnlyInMinimizeMode;
- (double)aspectRatioOfCamera;
- (double)sizeRatioOfCameraToScreen;
- (double)marginXRatioOfCameraToScreen;
- (double)cameraToppestYForOrientation:(BOOL)arg1 centerXSide:(long long)arg2 inView:(id)arg3;
- (double)cameraBottommostYForOrientation:(BOOL)arg1 centerXSide:(long long)arg2 inView:(id)arg3;
- (CGSize)sizeOfScreen;
- (void)setSizeOfScreen:(CGSize)arg1;
- (long long)centerXSideOfCameraToScreen;
- (void)setCenterXSideOfCameraToScreen:(long long)arg1;
- (double)centerYRatioOfCameraToScreen;
- (void)setCenterYRatioOfCameraToScreen:(double)arg1;
@end
