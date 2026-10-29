@interface ContactReportUtils : NSObject
+ (unsigned int)getSendVerifyReportEnterSceneWithFriendScene:(unsigned int)arg1 uiContactInfoViewSource:(unsigned int)arg2;
+ (unsigned int)getContactInfoViewGetContactSceneWithContactInfoViewFromScene:(unsigned int)arg1;
+ (void)reportContactRelationUpdateDoActionWithRequestPage:(unsigned int)arg1 toUserNames:(id)arg2 requestContent:(unsigned int)arg3;
+ (void)reportContactRelationUpdateActionWithRequestPage:(unsigned int)arg1 toUserNames:(id)arg2 eventType:(unsigned int)arg3 requestContent:(unsigned int)arg4 returnCode:(int)arg5;
+ (unsigned int)getExtraRemarkCandidateOutputType:(unsigned int)arg1;
+ (id)getNewFriendsPageTypeExtraDic;
@end
