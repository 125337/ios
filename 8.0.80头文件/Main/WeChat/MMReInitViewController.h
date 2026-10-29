@interface MMReInitViewController : MMUIViewController <MMTipsViewControllerDelegate>
{
    UIScrollView * m_mainScrollView; // +0x70
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)initView;
- (void)onReinit;
- (void)doReinit;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)OnClickBackBarButton:(id)arg1;
- (void).cxx_destruct;
@end
