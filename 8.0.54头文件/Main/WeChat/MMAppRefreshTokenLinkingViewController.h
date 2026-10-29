@interface MMAppRefreshTokenLinkingViewController : MMUIViewController
{
    unsigned int _scene; // +0x68
    UIImageView * _wxIconImageView; // +0x70
    MMWebImageView * _appIconImageView; // +0x78
    UILabel * _titleLabel; // +0x80
    DotLoadingView * _dotLoadingView; // +0x88
    MMAppRefreshTokenAppInfo * _appInfo; // +0x90
    id /* block */ _dimisssHandler; // +0x98
}
- (id)initWithWithAppInfo:(id)arg1 dimisssHandler:(id /* block */)arg2;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (void)initSubviews;
- (void)viewDidLayoutSubviews;
- (void)layoutSubviews;
- (void)delayDismissMyself;
- (void)onLaunch3rdApp;
- (void)onClose;
- (void)reportLaunch3rdWithUniversalLink:(id)arg1 token:(id)arg2 success:(BOOL)arg3;
- (void)reportLaunchUniversalLinkFailWithToken:(id)arg1 errMsg:(id)arg2;
- (void)reportLaunchSchemeSuccess;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)wxIconImageView;
- (void)setWxIconImageView:(id)arg1;
- (id)appIconImageView;
- (void)setAppIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)dotLoadingView;
- (void)setDotLoadingView:(id)arg1;
- (id)appInfo;
- (void)setAppInfo:(id)arg1;
- (id /* block */)dimisssHandler;
- (void)setDimisssHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

