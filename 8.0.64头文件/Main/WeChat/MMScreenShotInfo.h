@interface MMScreenShotInfo : NSObject
{
    NSString * _processTitle; // +0x8
    id /* block */ _processHandler; // +0x10
    id /* block */ _onWillForwardMsg; // +0x18
}
- (void)setupWithProcessTitle:(id)arg1 processHandler:(id /* block */)arg2;
- (id)processTitle;
- (id /* block */)processHandler;
- (id /* block */)onWillForwardMsg;
- (void)setOnWillForwardMsg:(id /* block */)arg1;
- (void).cxx_destruct;
@end
