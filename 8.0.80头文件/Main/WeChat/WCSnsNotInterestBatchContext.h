@interface WCSnsNotInterestBatchContext : NSObject
{
    BOOL _add; // +0x8
    BOOL _allSuccess; // +0x9
    NSMutableArray * _pendingOperations; // +0x10
    NSMutableArray * _successfulUserNames; // +0x18
}
- (BOOL)add;
- (void)setAdd:(BOOL)arg1;
- (BOOL)allSuccess;
- (void)setAllSuccess:(BOOL)arg1;
- (id)pendingOperations;
- (void)setPendingOperations:(id)arg1;
- (id)successfulUserNames;
- (void)setSuccessfulUserNames:(id)arg1;
- (void).cxx_destruct;
@end
