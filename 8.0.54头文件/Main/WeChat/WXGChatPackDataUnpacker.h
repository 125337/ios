@interface WXGChatPackDataUnpacker : NSObject
{
    BOOL _bDataIsZip; // +0x8
    BOOL _bUnpacking; // +0x9
    id <WXGChatPackDataUnpackerDelegate> _delegate; // +0x10
    NSObject<OS_dispatch_queue> * _unpackQueue; // +0x18
    NSString * _unpackDestination; // +0x20
}
- (id)init;
- (id)unpackQueue;
- (void)mainThreadCallDelegate:(BOOL)arg1;
- (void)mainThreadSyncProgress:(float)arg1;
- (void)stopUnpack;
- (void)startUnpackData:(id)arg1;
- (BOOL)p_importMsgFromFolder:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bDataIsZip;
- (void)setBDataIsZip:(BOOL)arg1;
- (void)setUnpackQueue:(id)arg1;
- (BOOL)bUnpacking;
- (void)setBUnpacking:(BOOL)arg1;
- (id)unpackDestination;
- (void)setUnpackDestination:(id)arg1;
- (void).cxx_destruct;
@end

