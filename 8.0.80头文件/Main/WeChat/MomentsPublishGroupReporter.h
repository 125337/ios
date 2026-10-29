@interface MomentsPublishGroupReporter : NSObject
+ (void)reportPublishLastGroupViewEvent:(id)arg1;
+ (void)reportPublishGroupCellEvent:(id)arg1 privacy:(long long)arg2;
+ (long long)_privacyToReportStatus:(long long)arg1;
@end
