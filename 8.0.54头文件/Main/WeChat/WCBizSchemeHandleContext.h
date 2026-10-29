@interface WCBizSchemeHandleContext : NSObject
{
    BOOL _isLogin; // +0x8
    CheckExternalUrlResp * _resp; // +0x10
}
- (BOOL)isLogin;
- (void)setIsLogin:(BOOL)arg1;
- (id)resp;
- (void)setResp:(id)arg1;
- (void).cxx_destruct;
@end

