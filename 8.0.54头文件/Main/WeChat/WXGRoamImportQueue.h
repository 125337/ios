@interface WXGRoamImportQueue : NSObject
{
    id <WXGRoamImportQueueDelegate> _delegate; // +0x8
    NSObject<OS_dispatch_queue> * _importQueue; // +0x10
    NSString * _destinationFolder; // +0x18
}
+ (void)importInDestionation:(id)arg1;
- (id)init;
- (void)importAll;
- (void)markImportFinish:(unsigned long long)arg1;
- (void)importOneDir:(id)arg1 taskId:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)importQueue;
- (void)setImportQueue:(id)arg1;
- (id)destinationFolder;
- (void)setDestinationFolder:(id)arg1;
- (void).cxx_destruct;
@end

