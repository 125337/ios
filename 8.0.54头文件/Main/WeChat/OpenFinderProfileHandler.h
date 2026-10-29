@interface OpenFinderProfileHandler : OpenFinderBaseHandler
- (void)createOpenUrl;
- (void)onAuthDidSuccess;
- (void)onAuthDidFail;
- (void)onAuthDidCancel;
@end

