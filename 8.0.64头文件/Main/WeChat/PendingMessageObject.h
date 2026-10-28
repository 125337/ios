@interface PendingMessageObject : NSObject
{
    BOOL _isPrepared; // +0x8
    NSMutableDictionary * _pendingMessagesDict; // +0x10
}
- (id)init;
- (void)pendMessage:(id)arg1 toReceiver:(id)arg2;
- (id)getMessagesFromReceiver:(id)arg1;
- (void)removeReceiver:(id)arg1;
- (BOOL)isPrepared;
- (void)setIsPrepared:(BOOL)arg1;
- (id)pendingMessagesDict;
- (void)setPendingMessagesDict:(id)arg1;
- (void).cxx_destruct;
@end
