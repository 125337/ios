@interface NewLifeSelectMapPoiHandler : NewLifeActionHandler <MMPickLocationViewControllerDelegate>
{
    MMPickLocationViewController * _locationViewController; // +0x8
}
- (void)handleRequest:(id)arg1;
- (id)onGetRightBarButton;
- (void)onFinishSelectLocation;
- (void)onCancelSeletctedLocation;
- (id)locationViewController;
- (void)setLocationViewController:(id)arg1;
- (void).cxx_destruct;
@end

