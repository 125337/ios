@interface CBTHalfScreenTimelinePostRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (BOOL)isExternalEntryEnabled;
+ (void)showFromVC:(id)arg1 draftId:(id)arg2 modifyId:(id)arg3 content:(id)arg4 contentEmpty:(BOOL)arg5 selectedText:(id)arg6 dismissCallback:(id /* block */)arg7;
+ (id)optionsWithDraftId:(id)arg1 modifyId:(id)arg2 content:(id)arg3 contentEmpty:(BOOL)arg4 selectedText:(id)arg5 srcInfoParams:(id)arg6;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
@end
