@interface WCFImageDownloadToken : NSObject <WCFImageOperation>
{
    BOOL _cancelled; // +0x8
    id _downloadOperationCancelToken; // +0x10
    NSHashTable * _downloadOperations; // +0x18
}
- (id)initWithOperations:(id)arg1;
- (void)cancel;
- (BOOL)isCancelled;
- (void)setCancelled:(BOOL)arg1;
- (id)downloadOperationCancelToken;
- (void)setDownloadOperationCancelToken:(id)arg1;
- (id)downloadOperations;
- (void)setDownloadOperations:(id)arg1;
- (void).cxx_destruct;
@end
