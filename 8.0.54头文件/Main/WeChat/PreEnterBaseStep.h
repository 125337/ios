@interface PreEnterBaseStep : NSObject
{
    MMUIWindow * m_window; // +0x8
    MMLoadingView * m_loadingView; // +0x10
    id <PreEnterStepDelegate> _delegate; // +0x18
}
+ (BOOL)checkDeviceUUIDMatch:(id)arg1;
- (void)dealloc;
- (id)stepId;
- (void)startStep;
- (void)openFirstView;
- (void)openFirstViewAndSetEmptyMMVCAsRoot;
- (void)closeFirstView;
- (void)doneStepAndClose;
- (void)startLoading;
- (void)stopLoading;
- (id)rootMMViewController;
- (id)topViewController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

