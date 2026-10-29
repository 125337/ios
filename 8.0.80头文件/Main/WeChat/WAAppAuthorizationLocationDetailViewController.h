@interface WAAppAuthorizationLocationDetailViewController : ZZFLEXTableViewController <LocationRetrieveDelegate>
{
    id <WAAppAuthorizationDetailViewControllerDelegate> _delegate; // +0x70
    WAAppAuthorizationDetailViewModel * _viewModel; // +0x78
    unsigned long long _authType; // +0x80
    unsigned long long _userChooseState; // +0x88
    LocationRetriever * _locationRetriever; // +0x90
    MMLocatingCoordinateLogic * _locatingLogic; // +0x98
    NSString * _locationAddressText; // +0xa0
}
- (id)initWithAuthType:(unsigned long long)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)fillWithViewModel:(id)arg1;
- (void)reloadListUI;
- (BOOL)shouldShowLocationAddress;
- (void)requestLocationAddress;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (void)requestAddressByLocation:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (unsigned long long)authType;
- (void)setAuthType:(unsigned long long)arg1;
- (unsigned long long)userChooseState;
- (void)setUserChooseState:(unsigned long long)arg1;
- (id)locationRetriever;
- (void)setLocationRetriever:(id)arg1;
- (id)locatingLogic;
- (void)setLocatingLogic:(id)arg1;
- (id)locationAddressText;
- (void)setLocationAddressText:(id)arg1;
- (void).cxx_destruct;
@end
