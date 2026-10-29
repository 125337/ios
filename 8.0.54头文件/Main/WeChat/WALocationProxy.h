@interface WALocationProxy : NSObject <MMPickLocationViewControllerDelegate, WAOpenLocationViewControllerDelegate, WCTimelinePOIPickerViewControllerDelegate, IWALocationService>
{
    id <WALocationServiceDelegate> _delegate; // +0x8
    MMPickLocationViewController * _pickLocationController; // +0x10
    WCTimelinePOIPickerViewController * _pickPoiController; // +0x18
    NSString * _buttonTitle; // +0x20
}
+ (id)createLocationService;
+ (void)initLocationService;
+ (id)getWAQMapAPIKey;
+ (CLLocationCoordinate2D)getLastUserLocation;
+ (void)clearLBSCacheIfNeeded;
- (void)openLocation:(id)arg1 navigationController:(id)arg2;
- (void)choosePoiViewController:(id)arg1 buttonTitle:(id)arg2;
- (void)chooseLocation:(CLLocationCoordinate2D)arg1 viewController:(id)arg2 buttonTitle:(id)arg3;
- (void)getRegionData;
- (void)onCancelSeletctedLocation;
- (id)onGetRightBarButton;
- (void)onFinishSelectedLocation;
- (void)onCancelOpenLocation;
- (void)onPOIPickerFinished:(id)arg1;
- (void)onPOIPickerCancel;
- (void)OnGetGetAllAddressStageData:(id)arg1 Error:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pickLocationController;
- (void)setPickLocationController:(id)arg1;
- (id)pickPoiController;
- (void)setPickPoiController:(id)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (void).cxx_destruct;
@end

