@interface WeClawShortcutReportManager : MMObject
+ (void)configShortcutListPageReportWithViewController:(id)arg1 username:(id)arg2 isAvailable:(BOOL)arg3;
+ (id)commonParamsWithUsername:(id)arg1 isAvailable:(BOOL)arg2;
+ (void)reportShortcutCreateEndWithUsername:(id)arg1 contentLength:(unsigned long long)arg2 nameLength:(unsigned long long)arg3;
+ (void)reportShortcutEditEndWithUsername:(id)arg1 shortcutId:(unsigned long long)arg2 contentLength:(unsigned long long)arg3 nameLength:(unsigned long long)arg4;
+ (void)reportShortcutDeleteEndWithUsername:(id)arg1 deletedIndices:(id)arg2;
+ (void)reportShortcutSortSuccWithUsername:(id)arg1;
@end
