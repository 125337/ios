@interface WCFinderMessageMgr : NSObject
+ (BOOL)isFinderMsg:(id)arg1;
+ (void)clickFinderFeed:(id)arg1 shareEnterUsername:(id)arg2 reportModel:(id)arg3 fromCell:(id)arg4 cardType:(int)arg5 adParamInofStr:(id)arg6 encryptedTid:(id)arg7 notGetReleatedList:(BOOL)arg8 entranceGMsgID:(id)arg9 fromVC:(id)arg10;
+ (void)pushFinderShareDetailViewControllerWithItem:(id)arg1 notGetReleatedList:(BOOL)arg2 entranceGMsgID:(id)arg3 reportModel:(id)arg4 currentNavController:(id)arg5 enterScene:(unsigned long long)arg6 customParam:(id)arg7 fromVC:(id)arg8;
+ (void)clickFinderFeed:(id)arg1 shareEnterUsername:(id)arg2 reportModel:(id)arg3 fromCell:(id)arg4 entranceGMsgID:(id)arg5 fromVC:(id)arg6;
+ (void)clickFinderNameCard:(id)arg1 isChatRoom:(BOOL)arg2 fromUserName:(id)arg3 talkerName:(id)arg4 profileEnterType:(int)arg5 finderEntryScene:(int)arg6;
+ (void)clickFinderNameCard:(id)arg1 messageWrap:(id)arg2 isChatRoom:(BOOL)arg3 fromUserName:(id)arg4 talkerName:(id)arg5 profileEnterType:(int)arg6 finderEntryScene:(int)arg7;
+ (void)clickFinderNameCard:(id)arg1 messageWrap:(id)arg2 isChatRoom:(BOOL)arg3 fromUserName:(id)arg4 talkerName:(id)arg5 profileEnterType:(int)arg6 finderEntryScene:(int)arg7 fromVC:(id)arg8;
+ (void)pushMembershipViewControllerWithNameCard:(id)arg1 followInfo:(id)arg2;
+ (void)clickFinderTopic:(id)arg1 shareScene:(unsigned long long)arg2;
+ (void)clickFinderCollection:(id)arg1 shareScene:(unsigned long long)arg2;
+ (void)clickFinderLongVideo:(id)arg1 shareEnterUsername:(id)arg2 reportModel:(id)arg3 fromCell:(id)arg4;
+ (void)clickFinderLongVideo:(id)arg1 shareEnterUsername:(id)arg2 reportModel:(id)arg3 fromCell:(id)arg4 notGetReleatedList:(BOOL)arg5;
+ (void)clickFinderLongVideo:(id)arg1 fromUserName:(id)arg2 toUserName:(id)arg3;
+ (void)clickFinderLive:(id)arg1 entryScene:(int)arg2 fromViewController:(id)arg3 fromChatUsername:(id)arg4 customParams:(id)arg5;
+ (void)clickFinderLive:(id)arg1 entryScene:(int)arg2 fromViewController:(id)arg3 fromChatUsername:(id)arg4 fromShareUsername:(id)arg5 customParams:(id)arg6;
+ (void)clickFinderLive:(id)arg1 entryScene:(int)arg2 fromViewController:(id)arg3 customParams:(id)arg4;
+ (void)clickFinderLive:(id)arg1 entryScene:(int)arg2 fromViewController:(id)arg3 fromChatUsername:(id)arg4;
+ (void)clickFinderLive:(id)arg1 entryScene:(int)arg2 fromViewController:(id)arg3;
+ (void)clickFinderLive:(id)arg1 entryScene:(int)arg2;
+ (void)clickFinderPOIRelatedItem:(id)arg1 enterScene:(int)arg2 userName:(id)arg3 reportID:(id)arg4;
+ (void)clickFinderOrder:(id)arg1 fromVC:(id)arg2;
+ (void)clickFinderOrder:(id)arg1 fromVC:(id)arg2 isKefuContact:(BOOL)arg3;
+ (void)clickFinderShopWindow:(id)arg1 fromVC:(id)arg2;
@end
