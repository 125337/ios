@interface WAJSEventHandler_batchGetContact : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)getContactFromServerWithAppIdList:(id)arg1;
- (void)returnResultWithContactList:(id)arg1;
- (void)asyncBatchUpdateContacts:(id)arg1;
@end
