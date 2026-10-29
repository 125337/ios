@interface MMIAppKinda : NSObject
{
    Handle<std::shared_ptr<kinda::IAppKinda>> _cppRefHandle; // +0x8
}
+ (id)getInstance;
- (id)initWithCpp:(const void *)arg1;
- (id)startUseCase:(id)arg1 data:(id)arg2 callback:(id)arg3;
- (void)stopUseCase:(id)arg1;
- (BOOL)isInAnyUseCase;
- (id)getUseCaseInStackWithData:(id)arg1 data:(id)arg2;
- (id)getUseCaseInStack:(id)arg1;
- (BOOL)isUseCaseAlive:(id)arg1;
- (void)popToUseCase:(id)arg1;
- (BOOL)getIsPaying;
- (void)notifyAllUseCases:(id)arg1;
- (BOOL)checkOfflineReady;
- (void)updateOfflinePayTokenWithScene:(int)arg1;
- (void)checkIfNeedUpdateOfflinePayToken;
- (void)updateOfflinePayDefaultCard:(id)arg1 bankType:(id)arg2;
- (void)checkIfNeedRequestUserBindqueryWhenUnBindCard:(id)arg1;
- (void)notifyHKOfflineNewXml:(id)arg1;
- (void)applicationEnterBackground;
- (void)applicationEnterForeground;
- (void)applicationBecomeActive;
- (void)applicationResignActive;
- (void)applicationReceiveMemoryWarning:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)networkChange:(id)arg1;
- (void)takeScreenshot;
- (void)applicationRestart;
- (void)notifyScreenCapture;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

