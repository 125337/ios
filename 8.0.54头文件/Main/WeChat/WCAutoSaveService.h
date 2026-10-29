@interface WCAutoSaveService : MMUserService <MMServiceProtocol>
- (id)init;
- (id)provideDraftController:(unsigned long long)arg1 darftTypeID:(id)arg2;
- (void)cleanUnReferenceImageFile;
- (void)clearAllDraft;
@end

