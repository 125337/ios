@interface MMXNetImageApplication : MMRootService <MMServiceProtocol>
{
    NSThread * _thread; // +0x8
    shared_ptr<wevision::XImageFeat> _model; // +0x10
}
- (id)init;
- (void)addThreadToRunLoop;
- (id)featureWithImage:(id)arg1;
- (void)requestFeatureWithImage:(id)arg1;
- (id)getThreadName;
- (id)modelFiles;
- (id)modelPath;
- (shared_ptr<wevision::XImageFeat>)model;
- (void)setModel:(shared_ptr<wevision::XImageFeat>)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

