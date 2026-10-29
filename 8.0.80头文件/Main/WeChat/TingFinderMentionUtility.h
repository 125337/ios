@interface TingFinderMentionUtility : MMObject
+ (BOOL)isSupportJumpTing;
+ (BOOL)isTingFinderMention:(id)arg1;
+ (unsigned long long)tingFinderMentionSourceType:(id)arg1;
+ (id)gen20763KVReportDictFromMention:(id)arg1;
+ (id)uniCommentBypassMessageFromMention:(id)arg1;
+ (void)openTingPageWithMention:(id)arg1 refCommentId:(unsigned long long)arg2 fromViewController:(id)arg3;
+ (void)playWithListenId:(id)arg1 refCommentId:(unsigned long long)arg2 fromViewController:(id)arg3 mention:(id)arg4;
+ (void)openCatgeoryWithCategoryId:(id)arg1 refCommentId:(unsigned long long)arg2 fromViewController:(id)arg3 mention:(id)arg4;
+ (BOOL)isSupportTingInteractionAction;
+ (BOOL)isTingFinderMentionSupportInteractionActionThanks:(id)arg1;
+ (void)modMentionThankStatus:(BOOL)arg1 withMention:(id)arg2 finderUsername:(id)arg3;
+ (BOOL)isTingFinderMentionSupportInteractionActionCommentLike:(id)arg1;
+ (void)modCommentLikeStatus:(BOOL)arg1 withMention:(id)arg2 commentScene:(int)arg3;
+ (BOOL)isTingFinderMentionSupportInteractionActionCommentReply:(id)arg1;
+ (void)replyCommentWithComment:(id)arg1 withMention:(id)arg2;
+ (unsigned long long)commentCgiTypeWithMention:(id)arg1;
+ (BOOL)shouldJumpToTingCommentWithMention:(id)arg1;
+ (void)showForbidJumpTips:(id)arg1;
@end
