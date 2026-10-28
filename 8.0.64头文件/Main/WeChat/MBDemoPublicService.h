@interface MBDemoPublicService : NSObject <IMBPublicService, IMBLifecycle, IMBPkgManagement, IMBBizContextDelegate>
{
    id <IMBViewDelegate> _viewDelegate; // +0x8
}
- (id)provideConfig:(id)arg1;
- (id)provideLifecycle;
- (void)provideMainScript:(id /* block */)arg1;
- (id)provideFileSystem;
- (void)onCreated;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (void).cxx_destruct;
@end
