@interface WCPayPrivacyViewController : MMWebViewController <MMWebViewDelegate, YYWebViewDelegate, WCPayPrivacyToolViewDelegate, WCPayGetPayUserDutyCgiDelegate, WCPaySetPayUserDutyCgiDelegate>
{
    id <WCPayPrivacyViewControllerDelegate> _m_privacyDelegate; // +0x70
    WCPaySetPayUserDutyCgi * _m_setDutyCgi; // +0x78
    WCPayGetPayUserDutyCgi * _m_getDutyCgi; // +0x80
    WCPayPrivacyToolView * _m_toolView; // +0x88
    GetPayUserDutyResp * _getPayUserDutyCgiResp; // +0x90
    double _currentWidth; // +0x98
}
+ (id)instanceWithDelegate:(id)arg1 html:(id)arg2;
- (void)updateHtmlString:(id)arg1;
- (void)viewDidLoad;
- (void)updateContent;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)arg1;
- (void)updateToolView;
- (void)updateFrame;
- (void)viewDidLayoutSubviews;
- (id)initWithDelegate:(id)arg1 html:(id)arg2 presetUI:(id)arg3;
- (void)onWCPayGetPayUserDutyCgiResp:(id)arg1;
- (void)onWCPayGetPayUserDutyCgiError:(id)arg1;
- (void)onErrorClose;
- (void)onWCPaySetPayUserDutyCgiResp:(id)arg1;
- (void)onWCPaySetPayUserDutyCgiError:(id)arg1;
- (void)onWCPayPrivacyToolViewClickAgree:(BOOL)arg1;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4 navigationAction:(id)arg5;
- (void)reportWithScene:(unsigned long long)arg1;
- (void)updateHtmlView;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (id)m_privacyDelegate;
- (void)setM_privacyDelegate:(id)arg1;
- (id)m_setDutyCgi;
- (void)setM_setDutyCgi:(id)arg1;
- (id)m_getDutyCgi;
- (void)setM_getDutyCgi:(id)arg1;
- (id)m_toolView;
- (void)setM_toolView:(id)arg1;
- (id)getPayUserDutyCgiResp;
- (void)setGetPayUserDutyCgiResp:(id)arg1;
- (double)currentWidth;
- (void)setCurrentWidth:(double)arg1;
- (void).cxx_destruct;
@end
