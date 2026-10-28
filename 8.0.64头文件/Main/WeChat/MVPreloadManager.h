@interface MVPreloadManager : NSObject
{
    NSOperationQueue * _operationQueue; // +0x8
}
- (void)startPreloadWithItem:(id)arg1;
- (id)buildRequestWithItem:(id)arg1;
- (id)buildImageRequestWithItem:(id)arg1;
- (void)stopPreloadWithItem:(id)arg1;
- (void)stopAll;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;
- (void).cxx_destruct;
@end
