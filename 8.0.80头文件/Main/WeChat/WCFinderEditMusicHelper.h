@interface WCFinderEditMusicHelper : NSObject
+ (BOOL)shouldShowEditMusicInfoMenuForContentVM:(id)arg1;
+ (BOOL)shouldShowEditMusicInfoMenuForContentVM:(id)arg1 fetchOriginalItem:(id *)arg2;
+ (id)createOpenCtxForContentVM:(id)arg1;
+ (void)pushEditViewWithFeedCtx:(id)arg1 fromVC:(id)arg2;
+ (id)_fillMusicOriginaInfoToLiteAppQuery:(id)arg1 ctx:(id)arg2;
@end
