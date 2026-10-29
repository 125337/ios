@interface WCFinderProfileStorePage : WCFinderStreamProfileViewPage <WCFinderProfileStorePageModelDelegate>
{
    WCFinderProfileStoreAngel * _angel; // +0x8
}
- (BOOL)useCustomBackgroundColor;
- (id)loadView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)pageSizeDidChanged;
- (void)reloadData;
- (void)onStorePageModelDataChanged:(id)arg1;
- (id)angel;
- (void)setAngel:(id)arg1;
- (void).cxx_destruct;
@end
