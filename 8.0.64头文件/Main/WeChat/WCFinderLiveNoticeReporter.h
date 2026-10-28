@interface WCFinderLiveNoticeReporter : NSObject
+ (void)reportProfileLiveNotice:(unsigned long long)arg1 withNoticeInfo:(id)arg2 actionJsonDictionary:(id)arg3 sourceScene:(unsigned long long)arg4;
+ (void)reportProfileLiveNotice:(unsigned long long)arg1 withNoticeInfo:(id)arg2 actionJsonDictionary:(id)arg3 sourceScene:(unsigned long long)arg4 sessionId:(id)arg5;
+ (void)reportProfileNoticeOk:(unsigned long long)arg1 withNoticeInfo:(id)arg2 sourceScene:(unsigned long long)arg3 sessionId:(id)arg4;
@end
