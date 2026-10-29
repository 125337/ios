@interface MpDraftStore : NSObject
+ (id)_draftsRoot;
+ (id)currentDraftPbPath;
+ (id)loadDraftBytes;
+ (BOOL)saveDraftBytes:(id)arg1;
+ (BOOL)deleteDraft;
+ (BOOL)deleteDraftWithClearWeappDraft:(BOOL)arg1;
+ (BOOL)draftExists;
@end
