@interface MomentsFlutterPrivacyViewController : MMFlutterViewController <SnsFlutterVisibilityPageDelegateImplDelegate, SnsChangeVisibilityDelegateImplDelegate, SNSPluginDelegate>
{
    id <MomentsFlutterPrivacyViewControllerlDelegate> _m_delegate; // +0x70
    MMFlutterInstance * _instance; // +0x78
    WCDataItem * _dataItem; // +0x80
}
- (id)initWithVisibilityData:(id)arg1 pageResultType:(id)arg2;
- (id)initWithVisibilityData:(id)arg1 pageResultType:(id)arg2 postSessionId:(id)arg3;
- (id)initWithSnsId:(id)arg1 pageResultType:(id)arg2 dataItem:(id)arg3;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)visibilitySettingPageDataCallback:(id)arg1 groupName:(id)arg2;
- (void)changeVisibilityDataCallback:(id)arg1 snsVisibilityData:(id)arg2;
- (id)getPluginTopViewController;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)instance;
- (void)setInstance:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end
