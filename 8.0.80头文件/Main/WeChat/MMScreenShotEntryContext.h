@interface MMScreenShotEntryContext : NSObject
{
    BOOL _preparingEntry; // +0x8
    BOOL _finished; // +0x9
    MMScreenShotInfo * _screenShotInfo; // +0x10
    MMScreenShotReporter * _reporter; // +0x18
    id /* block */ _onFinish; // +0x20
    UIWindow * _rootWindow; // +0x28
}
- (void)finish;
- (id)screenShotInfo;
- (void)setScreenShotInfo:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (BOOL)preparingEntry;
- (void)setPreparingEntry:(BOOL)arg1;
- (id /* block */)onFinish;
- (void)setOnFinish:(id /* block */)arg1;
- (id)rootWindow;
- (void)setRootWindow:(id)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end
