@interface OMCProjectManager : NSObject
{
    void * _backingProjectManager; // +0x8
}
- (id)initWithBackingProjectManager:(void *)arg1;
- (void)cancelPrepareProjectResource:(id)arg1;
- (void)prepareProjectResource:(id)arg1 willFetchHandler:(id /* block */)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)loadProjectFromData:(id)arg1;
- (id)loadProjectFromClipbundleFilePath:(id)arg1;
- (id)extractPHLocalIdentifiersFromProject:(id)arg1;
- (void *)backingProjectManager;
- (void)setBackingProjectManager:(void *)arg1;
@end
