@interface MMAutoSearchLogic : MMObject
{
    BOOL _blockSignal; // +0x8
    id <MMAutoSearchLogicDelegate> _delegate; // +0x10
    NSMutableArray * _autoSearchQueue; // +0x18
    NSString * _lastResponseKey; // +0x20
}
- (id)init;
- (void)reset;
- (void)tryAutoSearchWithKeyword:(id)arg1 StartFromFirst:(BOOL)arg2;
- (BOOL)autoSearchShouldFinishedWithKeyword:(id)arg1 QueryInterval:(double)arg2 StartFromFirst:(BOOL)arg3 RequestNext:(BOOL)arg4;
- (void)tryNextSearch;
- (id)autoSearchQueue;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setAutoSearchQueue:(id)arg1;
- (BOOL)blockSignal;
- (void)setBlockSignal:(BOOL)arg1;
- (id)lastResponseKey;
- (void)setLastResponseKey:(id)arg1;
- (void).cxx_destruct;
@end

