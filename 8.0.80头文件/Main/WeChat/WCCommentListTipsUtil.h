@interface WCCommentListTipsUtil : NSObject
+ (BOOL)shouldShowMuteTipsWithUnReadMessages:(id)arg1 feedID:(id *)arg2;
+ (void)setHasUseNoMoreNoticeAfterShowMuteTips;
+ (void)setMuteTipsShowTimesIncrease;
+ (id)getObjIDByWCMessage:(id)arg1;
@end
