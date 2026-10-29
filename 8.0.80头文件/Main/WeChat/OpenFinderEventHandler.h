@interface OpenFinderEventHandler : OpenFinderBaseHandler <WCFinderEventViewControllerDelegate>
- (void)createOpenUrl;
- (void)onAuthDidSuccess;
- (void)onAuthDidFail;
- (void)onAuthDidCancel;
- (void)openEventPageFail:(id)arg1;
@end
