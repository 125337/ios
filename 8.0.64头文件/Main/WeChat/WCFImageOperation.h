@interface WCFImageOperation : NSObject <WCFImageOperation>
{
    BOOL _cancelled; // +0x8
    id <WCFImageOperation> _cacheOperation; // +0x10
    id <WCFImageOperation> _loaderOperation; // +0x18
    WCFImageManager * _manager; // +0x20
}
- (void)cancel;
- (void)reset;
- (BOOL)isCancelled;
- (void)setCancelled:(BOOL)arg1;
- (id)cacheOperation;
- (void)setCacheOperation:(id)arg1;
- (id)loaderOperation;
- (void)setLoaderOperation:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (void).cxx_destruct;
@end
