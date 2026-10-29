@interface WCBusyThreadPool : NSObject
{
    NSMutableArray * _store; // +0x8
}
- (id)init;
- (void)addCallStack:(id)arg1;
- (id)makeCallTree;
- (id)makeFrame:(id)arg1;
- (void)addFrame:(id)arg1 to:(id)arg2;
- (void)mergeFrame:(id)arg1 and:(id)arg2;
- (void)mergeFrameArray:(id)arg1 and:(id)arg2;
- (id)store;
- (void)setStore:(id)arg1;
- (void).cxx_destruct;
@end
