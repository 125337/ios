@interface CBTContactGetHelper : NSObject <IContactMgrExt, IStrangerContactMgrExt>
+ (id)sharedInstance;
- (id)init;
- (id)getContactWithUername:(id)arg1 withListener:(id)arg2;
- (void)handleFriendContact:(id)arg1;
- (void)handleStrangerContact:(id)arg1;
- (void)onNewContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onAddNewStrangerContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
@end
