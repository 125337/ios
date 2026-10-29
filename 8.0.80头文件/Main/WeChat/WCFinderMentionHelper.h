@interface WCFinderMentionHelper : NSObject
+ (id)mockCommentForReplyWithMention:(id)arg1 withDisplayName:(id)arg2;
+ (void)modifyReplyComment:(id)arg1 withMention:(id)arg2 commentScene:(int)arg3;
+ (id)genReplyCommentWithMention:(id)arg1 commentScene:(int)arg2 replyContent:(id)arg3;
+ (id)genLikeCommentWithMention:(id)arg1 likeFlag:(BOOL)arg2 commentScene:(int)arg3;
+ (id)genMentionCommentActionUdfKVWithMention:(id)arg1;
+ (id)feedTypeTagTextWithMention:(id)arg1;
+ (id)feedLikeIconContentWithMention:(id)arg1;
+ (id)messageReportParamsWithMention:(id)arg1 msgTabID:(unsigned long long)arg2;
+ (void)reportPulledMentionList:(id)arg1 msgTabID:(unsigned long long)arg2 commentScene:(int)arg3;
+ (void)followMentionContact:(id)arg1 enterType:(int)arg2 commentScene:(int)arg3;
+ (id)fansProfileParamsWithMention:(id)arg1 getMentionListScene:(unsigned long long)arg2 profileRefScene:(unsigned long long)arg3;
+ (void)tryShowMentionSilentEduWithMentionList:(id)arg1 showBlock:(id /* block */)arg2;
@end
