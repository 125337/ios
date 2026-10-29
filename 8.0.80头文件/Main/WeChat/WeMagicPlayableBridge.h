@interface WeMagicPlayableBridge : NSObject
{
    long long _bizId; // +0x8
    MagicCanvasController * _canvasController; // +0x10
}
- (long long)createEnvWithBizName:(id)arg1 pkgPath:(id)arg2 containerView:(id)arg3;
- (void)destroyEnv:(long long)arg1;
- (void).cxx_destruct;
@end
