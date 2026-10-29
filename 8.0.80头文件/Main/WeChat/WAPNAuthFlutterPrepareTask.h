@interface WAPNAuthFlutterPrepareTask : NSObject
{
    NSString * _cardId; // +0x8
    NSUUID * _identity; // +0x10
    id /* block */ _completion; // +0x18
    WAPNAuthFlutterHostInfo * _owner; // +0x20
}
- (id)initWithCardId:(id)arg1 owner:(id)arg2 completion:(id /* block */)arg3;
- (void)resolveWithResultJson:(id)arg1;
- (void)rejectWithMessage:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)identity;
- (void)setIdentity:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (void).cxx_destruct;
@end
