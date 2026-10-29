@interface WCSnsPrivatePublishReporter : NSObject
+ (void)reportDraftPopupExp:(long long)arg1 visibleType:(long long)arg2;
+ (void)reportDraftPopupClk:(long long)arg1 visibleType:(long long)arg2 btnType:(long long)arg3;
+ (long long)draftTypeFromController:(id)arg1;
+ (long long)visibleTypeFromPrivacy:(unsigned long long)arg1;
@end
