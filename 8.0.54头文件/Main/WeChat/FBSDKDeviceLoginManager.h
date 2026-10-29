@interface FBSDKDeviceLoginManager : NSObject <NSNetServiceDelegate>
{
    FBSDKDeviceLoginCodeInfo * _codeInfo; // +0x8
    BOOL _isCancelled; // +0x10
    NSNetService * _loginAdvertisementService; // +0x18
    BOOL _isSmartLoginEnabled; // +0x20
    id <FBSDKDeviceLoginManagerDelegate> _delegate; // +0x28
    NSArray * _permissions; // +0x30
    NSURL * _redirectURL; // +0x38
}
+ (void)initialize;
- (id)initWithPermissions:(id)arg1 enableSmartLogin:(BOOL)arg2;
- (void)start;
- (void)cancel;
- (void)_notifyError:(id)arg1;
- (void)_notifyToken:(id)arg1;
- (void)_processError:(id)arg1;
- (void)_schedulePoll:(unsigned long long)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)permissions;
- (id)redirectURL;
- (void)setRedirectURL:(id)arg1;
- (void).cxx_destruct;
@end

