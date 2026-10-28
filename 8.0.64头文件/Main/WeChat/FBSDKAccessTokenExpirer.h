@interface FBSDKAccessTokenExpirer : NSObject
{
    NSTimer * _timer; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)_checkAccessTokenExpirationDate;
- (void)_timerDidFire;
- (void).cxx_destruct;
@end
