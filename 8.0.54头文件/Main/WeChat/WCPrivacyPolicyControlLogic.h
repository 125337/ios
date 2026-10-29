@interface WCPrivacyPolicyControlLogic : MMObject <MMWebViewDelegate, MMTipsViewControllerDelegate>
{
    MMUIWindow * _window; // +0x8
    MMUIViewController * _rootVC; // +0x10
    MMWebViewController * _webviewVC; // +0x18
    MMWebViewController * _webviewConfirmVC; // +0x20
    BOOL _bFromReg; // +0x28
    BOOL _bShowPrivacy; // +0x29
    BOOL _bShowBirthday; // +0x2a
    BOOL _bNeedOpenplatform; // +0x2b
    BOOL _bNeedConfirm; // +0x2c
    BOOL _bNotNeedDoublecheck; // +0x2d
    id <WCPrivacyPolicyControlLogicDelegate> _delegate; // +0x30
    NSString * _privacyUrl; // +0x38
    NSString * _birthdayUrl; // +0x40
    NSString * _confirmUrl; // +0x48
    NSString * _guidanceContent; // +0x50
    NSString * _doublecheckContent; // +0x58
    NSString * _doublecheckCancel; // +0x60
    NSString * _doublecheckOk; // +0x68
    NSString * _cc; // +0x70
    NSString * _scene; // +0x78
    NSString * _userName; // +0x80
    NSString * _regSessionid; // +0x88
}
- (void)dealloc;
- (BOOL)checkData;
- (void)startLogic;
- (id)showPrivacyPolicyView:(id)arg1 animate:(BOOL)arg2 close:(BOOL)arg3;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onWebViewDisagree;
- (void)onWebViewClickClose;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)privacyUrl;
- (void)setPrivacyUrl:(id)arg1;
- (id)birthdayUrl;
- (void)setBirthdayUrl:(id)arg1;
- (id)confirmUrl;
- (void)setConfirmUrl:(id)arg1;
- (id)guidanceContent;
- (void)setGuidanceContent:(id)arg1;
- (id)doublecheckContent;
- (void)setDoublecheckContent:(id)arg1;
- (id)doublecheckCancel;
- (void)setDoublecheckCancel:(id)arg1;
- (id)doublecheckOk;
- (void)setDoublecheckOk:(id)arg1;
- (BOOL)bFromReg;
- (void)setBFromReg:(BOOL)arg1;
- (BOOL)bShowPrivacy;
- (void)setBShowPrivacy:(BOOL)arg1;
- (BOOL)bShowBirthday;
- (void)setBShowBirthday:(BOOL)arg1;
- (BOOL)bNeedOpenplatform;
- (void)setBNeedOpenplatform:(BOOL)arg1;
- (BOOL)bNeedConfirm;
- (void)setBNeedConfirm:(BOOL)arg1;
- (BOOL)bNotNeedDoublecheck;
- (void)setBNotNeedDoublecheck:(BOOL)arg1;
- (id)cc;
- (void)setCc:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)regSessionid;
- (void)setRegSessionid:(id)arg1;
- (void).cxx_destruct;
@end

