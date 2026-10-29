@interface OpenFinderProfileHandler : OpenFinderBaseHandler
- (void)startHandlerWithParameter:(id)arg1;
- (void)createOpenUrl;
- (void)onAuthDidSuccess;
- (void)onAuthDidFail;
- (void)onAuthDidCancel;
@end
