@interface MMListenRecommendInfo : WXPBGeneratedMessage
+ (void)initialize;
- (BOOL)shouldShowFriendRecommend;
- (id)friendRecommendReasonLabelStr;
- (id)friendRecommendReasonLabelStrWithoutTime;
- (id)firstUserNickNameRichText;
- (id)rawRecommendReasonLabelStrForAudio;
- (id)socialRecommendReasonLabelStr;
- (id)friendRecommendUserListLabelStr;
- (BOOL)shouldShowJumpCategoryEntry;
- (id)jumpCategoryEntryStr;
@end
