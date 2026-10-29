@interface ChatRoomUtils : NSObject
+ (void)openAddContactWithMemberList:(id)arg1 inViewController:(id)arg2 contactsDataScene:(unsigned long long)arg3 delegate:(id)arg4;
+ (void)openContactProfile:(id)arg1 ofChatRoomContact:(id)arg2 inViewController:(id)arg3 delegate:(id)arg4;
+ (void)openContactProfile:(id)arg1 ofChatRoomContact:(id)arg2 inViewController:(id)arg3 delegate:(id)arg4 searchScene:(unsigned long long)arg5;
+ (void)onNeedUpgradeChatRoom:(id)arg1 delegate:(id)arg2 tag:(int)arg3;
+ (void)onAddChatroomMemberTooMuch:(id)arg1 delegate:(id)arg2;
+ (BOOL)checkRowHadOpenIMContactWithRow:(unsigned long long)arg1 numCellCol:(unsigned long long)arg2 numCellCnt:(unsigned long long)arg3 arrMemberList:(id)arg4;
+ (double)getMemListCellHeight:(BOOL)arg1;
@end
