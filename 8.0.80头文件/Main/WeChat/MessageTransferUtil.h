@interface MessageTransferUtil : NSObject
+ (unsigned long long)fileExpiredTimeInterval;
+ (long long)secondsBeforeFileExpired:(id)arg1;
+ (long long)daysBeforeFileExpired:(id)arg1;
+ (BOOL)isMessageFileExpired:(id)arg1;
+ (BOOL)isMessageFileExist:(id)arg1;
+ (BOOL)isMessageFileOtherUploadingFail:(id)arg1;
+ (id)GetMsg:(id)arg1 n64SvrID:(long long)arg2 Brand:(id)arg3;
@end
