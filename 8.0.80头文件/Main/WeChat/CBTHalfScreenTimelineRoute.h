@interface CBTHalfScreenTimelineRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (BOOL)isExternalEntryEnabled;
+ (void)showFromVC:(id)arg1 feedId:(id)arg2 selectedText:(id)arg3 isFullTextSelected:(BOOL)arg4 dismissCallback:(id /* block */)arg5;
+ (id)optionsWithFeedId:(id)arg1 selectedText:(id)arg2 isFullTextSelected:(BOOL)arg3 srcInfoParams:(id)arg4;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
@end
