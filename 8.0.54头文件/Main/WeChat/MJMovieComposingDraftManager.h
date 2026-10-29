@interface MJMovieComposingDraftManager : NSObject
{
    NSMutableDictionary * _finderDraftsByID; // +0x8
    NSMutableDictionary * _weGameDraftsByID; // +0x10
}
+ (id)defaultMMKV;
- (id)init;
- (void)setupDraftsByIDs;
- (BOOL)saveDraft:(id)arg1 withEntryScene:(long long)arg2;
- (void)loadAllDrafts;
- (id)latestDraftWithEntryScene:(long long)arg1;
- (void)clearOutdatedDraftsWithEntryScene:(long long)arg1;
- (void)removeDraftWithID:(id)arg1;
- (void)removeAllDraftsWithEntryScene:(long long)arg1;
- (void)removeAllDraftsWithEntryScene:(long long)arg1 excludeDraftID:(id)arg2;
- (id)_draftsByIDWithEntryScene:(long long)arg1;
- (id)finderDraftsByID;
- (void)setFinderDraftsByID:(id)arg1;
- (id)weGameDraftsByID;
- (void)setWeGameDraftsByID:(id)arg1;
- (void).cxx_destruct;
@end

