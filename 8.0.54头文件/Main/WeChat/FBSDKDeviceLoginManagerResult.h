@interface FBSDKDeviceLoginManagerResult : NSObject
{
    BOOL _cancelled; // +0x8
    FBSDKAccessToken * _accessToken; // +0x10
}
- (id)initWithToken:(id)arg1 isCancelled:(BOOL)arg2;
- (id)accessToken;
- (BOOL)isCancelled;
- (void).cxx_destruct;
@end

