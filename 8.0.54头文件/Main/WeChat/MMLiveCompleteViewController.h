@interface MMLiveCompleteViewController : MMCPUIViewController
{
    BOOL _needAutoRotateToPortrait; // +0x68
    long long _currDeviceOrientation; // +0x70
    id <MMLiveCompleteViewControllerDelegate> _delegate; // +0x78
}
- (BOOL)needAutoRotateToPortrait;
- (void)setNeedAutoRotateToPortrait:(BOOL)arg1;
- (long long)currDeviceOrientation;
- (void)setCurrDeviceOrientation:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

