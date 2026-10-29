@interface WCCommentReportUtil : NSObject
+ (void)reportCommentPostErrorWithCommentItem:(id)arg1 error:(int)arg2 platform:(int)arg3;
+ (void)reportCommentPostSuccess:(id)arg1;
+ (void)reportCommentShowFail:(id)arg1 comment:(id)arg2;
+ (long long)getSnsCommentItemType:(id)arg1;
+ (long long)getSnsCommentInfoType:(id)arg1;
+ (long long)getWCUserCommentType:(id)arg1;
@end
