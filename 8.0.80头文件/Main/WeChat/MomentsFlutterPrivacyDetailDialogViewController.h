@interface MomentsFlutterPrivacyDetailDialogViewController : MMFlutterViewController <SnsChangeVisibilityDelegateImplDelegate, SnsVisibilityShowFromCombineDelegateImplDelegate>
{
    id /* block */ _onChangeVisibilityCallback; // +0x70
    MMFlutterInstance * _instance; // +0x78
    WCDataItem * _dataItem; // +0x80
}
- (id)initWithData:(id)arg1 snsId:(id)arg2 dataItem:(id)arg3;
- (id)initWithData:(id)arg1 snsId:(id)arg2 dataItem:(id)arg3 entranceScene:(long long)arg4;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)changeVisibilityDataCallback:(id)arg1 snsVisibilityData:(id)arg2;
- (void)onChangeVisibilityCallback:(id)arg1 isConfirm:(BOOL)arg2;
- (id /* block */)onChangeVisibilityCallback;
- (void)setOnChangeVisibilityCallback:(id /* block */)arg1;
- (id)instance;
- (void)setInstance:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end
