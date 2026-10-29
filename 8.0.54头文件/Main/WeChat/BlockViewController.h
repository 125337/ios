@interface BlockViewController : MMUIViewController
{
    MMLoadingView * _loadingView; // +0x68
    NSString * _viewTitle; // +0x70
    NSString * _failTips; // +0x78
    NSString * _loadingWording; // +0x80
    id <BlockViewControllerDelegate> _delegate; // +0x88
}
- (void)viewDidLoad;
- (void)showFailView;
- (void)onReturn;
- (id)viewTitle;
- (void)setViewTitle:(id)arg1;
- (id)failTips;
- (void)setFailTips:(id)arg1;
- (id)loadingWording;
- (void)setLoadingWording:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

