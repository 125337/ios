@interface SREMessageHandler : NSObject <INSendMessageIntentHandling>
- (void)dealloc;
- (void)handleSendMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmSendMessage:(id)arg1 completion:(id /* block */)arg2;
- (id)searchContactListByKeyword:(id)arg1;
- (id)getResultOnMatchPerson:(id)arg1;
- (void)resolveRecipientsForSendMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveContentForSendMessage:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveSpeakableGroupNameForSendMessage:(id)arg1 withCompletion:(id /* block */)arg2;
@end

