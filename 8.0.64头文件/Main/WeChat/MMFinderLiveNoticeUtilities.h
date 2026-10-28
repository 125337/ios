@interface MMFinderLiveNoticeUtilities : NSObject
+ (BOOL)updateNoticeInfo:(id)arg1 withReserveStatus:(unsigned long long)arg2 byMatchingNoticeId:(id)arg3;
+ (BOOL)updateNoticeList:(id)arg1 withReserveStatus:(unsigned long long)arg2 aggregateTypeArray:(id)arg3 byMatchingNoticeIds:(id)arg4;
+ (BOOL)updateNoticeInfo:(id)arg1 noticeList:(id)arg2 withNoticeId:(id)arg3 hasPurchase:(BOOL)arg4;
+ (BOOL)updateNoticeInfo:(id)arg1 noticeList:(id)arg2 withNoticeId:(id)arg3 isTop:(BOOL)arg4;
+ (BOOL)updateNoticeInfo:(id)arg1 noticeList:(id)arg2 withReserveStatus:(unsigned long long)arg3 opType:(unsigned long long)arg4 changedNoticeIds:(id)arg5 failureNoticeIds:(id)arg6 aggregateTypeArray:(id)arg7;
+ (void)setupProfileParams:(id)arg1 fromProfileURLString:(id)arg2;
@end
