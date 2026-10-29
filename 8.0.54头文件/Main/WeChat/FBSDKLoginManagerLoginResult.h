@interface FBSDKLoginManagerLoginResult : NSObject
{
    NSMutableDictionary * _mutableLoggingExtras; // +0x8
    BOOL _isCancelled; // +0x10
    BOOL _isSkipped; // +0x11
    FBSDKAccessToken * _token; // +0x18
    NSSet * _grantedPermissions; // +0x20
    NSSet * _declinedPermissions; // +0x28
}
- (id)initWithToken:(id)arg1 isCancelled:(BOOL)arg2 grantedPermissions:(id)arg3 declinedPermissions:(id)arg4;
- (void)addLoggingExtra:(id)arg1 forKey:(id)arg2;
- (id)loggingExtras;
- (id)token;
- (void)setToken:(id)arg1;
- (BOOL)isCancelled;
- (id)grantedPermissions;
- (void)setGrantedPermissions:(id)arg1;
- (id)declinedPermissions;
- (void)setDeclinedPermissions:(id)arg1;
- (BOOL)isSkipped;
- (void)setIsSkipped:(BOOL)arg1;
- (void).cxx_destruct;
@end

