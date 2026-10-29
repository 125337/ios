@interface WeNotePreloadHelper : MMObject
+ (void)ensureProceededMessageKeySet;
+ (void)clearProceededMessageKeySet;
+ (id)keyForMessage:(id)arg1;
+ (BOOL)needPreloadNote;
+ (BOOL)isNoteMessage:(id)arg1;
+ (void)preloadNoteHtmlIfNeeded:(id)arg1;
@end
