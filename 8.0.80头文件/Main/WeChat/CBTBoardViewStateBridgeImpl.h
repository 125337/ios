@interface CBTBoardViewStateBridgeImpl : NSObject <CBTBoardViewStateBridge>
{
    NSMutableDictionary * _registrationsByItemId; // +0x8
    NSMutableDictionary * _pendingDeactivations; // +0x10
    NSLock * _lock; // +0x18
    unsigned long long _nextId; // +0x20
}
+ (id)sharedInstance;
- (id)init;
- (id)registerViewModel:(id)arg1 itemId:(id)arg2;
- (void)applyDeactivateForItemId:(id)arg1 statePayload:(id)arg2;
- (void)unregisterViewModelForItemId:(id)arg1;
- (void)applySubClassState:(id)arg1 payload:(id)arg2;
- (id)parseStatePayload:(id)arg1 itemId:(id)arg2;
- (id)applyDeactivatedStateToViewModel:(id)arg1 statePayload:(id)arg2 itemId:(id)arg3;
- (void)postStateChangedNotification:(id)arg1 state:(long long)arg2 interactionType:(long long)arg3;
- (id)registrationsByItemId;
- (void)setRegistrationsByItemId:(id)arg1;
- (id)pendingDeactivations;
- (void)setPendingDeactivations:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (unsigned long long)nextId;
- (void)setNextId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
