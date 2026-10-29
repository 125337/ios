@interface MomentsFlutterRecentGroupDialogViewController : MMFlutterViewController <SnsFlutterVisibilityPageDelegateImplDelegate, SNSPluginDelegate>
{
    id <MomentsFlutterPrivacyViewControllerlDelegate> _m_delegate; // +0x70
    MMFlutterInstance * _instance; // +0x78
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)visibilitySettingPageDataCallback:(id)arg1 groupName:(id)arg2;
- (id)getPluginTopViewController;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)instance;
- (void)setInstance:(id)arg1;
- (void).cxx_destruct;
@end
