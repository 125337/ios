@interface WCTChainCall : NSObject
{
    WCTHandle * _handle; // +0x8
    unsigned long long _disposeAction; // +0x10
    int _changes; // +0x18
    WCTError * _error; // +0x20
}
- (id)initWithHandle:(id)arg1;
- (id)error;
- (int)getChanges;
- (id)invalidateWhenDispose;
- (id)finalizeStatementWhenDispose;
- (void)saveChangesAndError:(BOOL)arg1;
- (void)tryDispose;
- (void).cxx_destruct;
@end
