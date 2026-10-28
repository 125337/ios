@interface MMLiveCompleteViewController : MMCPUIViewController
{
    BOOL _needAutoRotateToPortrait; // +0x70
    BOOL _isEmbededInLiveFeed; // +0x71
    long long _currDeviceOrientation; // +0x78
    id <MMLiveCompleteViewControllerDelegate> _delegate; // +0x80
}
- (BOOL)needAutoRotateToPortrait;
- (void)setNeedAutoRotateToPortrait:(BOOL)arg1;
- (long long)currDeviceOrientation;
- (void)setCurrDeviceOrientation:(long long)arg1;
- (BOOL)isEmbededInLiveFeed;
- (void)setIsEmbededInLiveFeed:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
