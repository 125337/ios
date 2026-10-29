@interface MJShootComposingDraftManager : NSObject
{
    BOOL _isDraftsAllLoaded; // +0x8
    NSMutableDictionary * _finderDraftsByID; // +0x10
}
+ (id)defaultMMKV;
+ (id)aigcAsyncDraftsRelativeDirectoryPath;
+ (id)aigcAsyncDraftsAbsoluteDirPathWithID:(id)arg1;
- (id)init;
- (void)prepareDraftsWithCompletion:(id /* block */)arg1;
- (void)loadAllDraftAsyncWithCompletion:(id /* block */)arg1;
- (void)loadAllDraft;
- (BOOL)saveDraft:(id)arg1;
- (void)removeDraftWithID:(id)arg1;
- (void)removeAllDraftsWithExcludeDraftID:(id)arg1;
- (id)draftWithID:(id)arg1;
- (id)finderDraftsByID;
- (void)setFinderDraftsByID:(id)arg1;
- (BOOL)isDraftsAllLoaded;
- (void)setIsDraftsAllLoaded:(BOOL)arg1;
- (void).cxx_destruct;
@end
