@interface FinderLiveNotifyReporter : NSObject
+ (void)reportNoticeOperation:(long long)arg1 commentScene:(id)arg2 notifyMsgItem:(id)arg3 msgExt:(id)arg4;
+ (void)reportNoticeOperation:(long long)arg1 commentScene:(id)arg2 notifyMsgItem:(id)arg3 msgExt:(id)arg4 sessionBuffer:(id)arg5;
+ (void)reportNoticeOperation:(long long)arg1 commentScene:(id)arg2 notifyMsgItem:(id)arg3 msgExt:(id)arg4 chnlExtraDict:(id)arg5;
+ (void)reportNoticeOperation:(long long)arg1 commentScene:(id)arg2 notifyMsgItem:(id)arg3 msgExt:(id)arg4 chnlExtraDict:(id)arg5 sessionBuffer:(id)arg6;
+ (void)reportMainFrameExposeWithMsg:(id)arg1 rowIndex:(unsigned long long)arg2 firstExpose:(BOOL)arg3 unreadCount:(unsigned int)arg4 sessionBuffer:(id)arg5;
+ (void)reportMainFrameClickWithMsg:(id)arg1 rowIndex:(unsigned long long)arg2 firstClick:(BOOL)arg3 unreadCount:(unsigned int)arg4 sessionBuffer:(id)arg5;
+ (void)reportReplaceMsgTipsID:(id)arg1 unReadAndLiveEndCount:(unsigned int)arg2 deleteTipsID:(id)arg3;
+ (id)getReportExtInfoFromMsg:(id)arg1;
@end
