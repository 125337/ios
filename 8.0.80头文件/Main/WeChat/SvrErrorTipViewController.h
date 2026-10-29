@interface SvrErrorTipViewController : MMWindowViewController
{
    UILabel * _tipsLabel; // +0x80
    NSString * _errTip; // +0x88
    NSString * _urlStr; // +0x90
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)onIKnowClicked;
- (void)onDetailBtnClicked;
- (void)hideView;
- (void)updateErrTip:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)setupInfoView;
- (void)jumpUrl:(id)arg1;
- (id)urlStr;
- (void)setUrlStr:(id)arg1;
- (void).cxx_destruct;
@end
