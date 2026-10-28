@interface WCCameraModule : MMObject
{
    long long _scene; // +0x8
    id <WCCameraModuleDelegate> _delegate; // +0x10
    NSObject * _userData; // +0x18
}
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (void).cxx_destruct;
@end
