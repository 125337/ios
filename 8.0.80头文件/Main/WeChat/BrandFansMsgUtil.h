@interface BrandFansMsgUtil : NSObject
+ (id)removeBizSuffix:(id)arg1;
+ (id)addBizSuffix:(id)arg1 bizType:(int)arg2;
+ (int)bizTypeFromBizSuffix:(id)arg1;
+ (void)fixBypMsgIfNeed:(id)arg1;
+ (BOOL)isGreetMsgFromWrap:(id)arg1;
+ (id)digestForMessage:(id)arg1;
+ (id)sendFailedWordingForFailCode:(unsigned int)arg1;
+ (void)goToBizProfileWithUsername:(id)arg1 topViewController:(id)arg2;
+ (void)goToFinderProfileWithUsername:(id)arg1 currentNavController:(id)arg2;
+ (id)getContactByUsername:(id)arg1;
@end
