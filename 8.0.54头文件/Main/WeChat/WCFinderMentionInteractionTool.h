@interface WCFinderMentionInteractionTool : NSObject
+ (unsigned long long)interactionBusinessTypeWithMention:(id)arg1;
+ (unsigned long long)supportInteractionActionWithMention:(id)arg1;
+ (void)modCommentLikeStatus:(BOOL)arg1 withMention:(id)arg2 commentScene:(int)arg3;
+ (void)postReplyComment:(id)arg1 withMention:(id)arg2;
+ (void)modMentionThankStatus:(BOOL)arg1 withMention:(id)arg2 finderUsername:(id)arg3;
+ (void)modSilentStateWithMention:(id)arg1 finderUsername:(id)arg2 vc:(id)arg3;
@end

