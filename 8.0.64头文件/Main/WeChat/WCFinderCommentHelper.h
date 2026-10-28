@interface WCFinderCommentHelper : NSObject
+ (id)getDetailPageCommentCountDescriptionWithCommentCount:(long long)arg1 authorScene:(BOOL)arg2;
+ (id)getCommentCountDescriptionWithDataItem:(id)arg1 commentCount:(long long)arg2 authorScene:(BOOL)arg3;
+ (id)getSuffixCommentCountDescriptionWithDataItem:(id)arg1 commentCount:(long long)arg2 authorScene:(BOOL)arg3 selectedType:(unsigned long long)arg4;
+ (id)getCommentCountValueStrWithCommentCount:(long long)arg1 authorScene:(BOOL)arg2;
+ (id)getWechatProfileVCWithFeedTid:(id)arg1 comment:(id)arg2 isSelfPost:(BOOL)arg3 authorScene:(BOOL)arg4 delegate:(id)arg5 halfScreenDelegate:(id)arg6;
+ (void)reportUserComment:(id)arg1 feedID:(id)arg2 commentScene:(int)arg3 uiScene:(id)arg4 nav:(id)arg5;
+ (id)parseExtLink:(id)arg1 commentScene:(int)arg2;
+ (BOOL)commentFunctionIsSpam;
+ (void)pushProfileWithClickCommentUsername:(id)arg1 contact:(id)arg2 isWeChatFriend:(BOOL)arg3 dataItem:(id)arg4 fromVC:(id)arg5;
+ (void)reportFeedCommentDeleteClickWithComment:(id)arg1 fromVC:(id)arg2;
+ (void)reportCommentLikeClick:(id)arg1;
+ (void)reportCommentAvatarClick:(id)arg1 clickType:(unsigned long long)arg2 commentViewScene:(int)arg3 feedID:(id)arg4;
+ (void)reportCommentPostClickWithRootCommentID:(unsigned long long)arg1;
+ (void)reportCommentReplyEventWithDataItem:(id)arg1 replyComment:(id)arg2 commentScene:(int)arg3 vc:(id)arg4;
+ (id)createCommentAdPlayerViewWithFrame:(CGRect)arg1 argsWrap:(id)arg2;
+ (BOOL)canUseCacheCommentVC:(id)arg1 contentVM:(id)arg2 refCommentID:(unsigned long long)arg3 appendCommentModel:(id)arg4;
+ (BOOL)checkCanPostBigEmoticonCommentWithItemSwitch:(BOOL)arg1 isMemberShip:(BOOL)arg2;
+ (BOOL)checkCanPostBigImageCommentWithItemSwitch:(BOOL)arg1 isMemberShip:(BOOL)arg2;
@end
