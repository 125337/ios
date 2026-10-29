@interface MsgBrowserLogic : NSObject
+ (id)titleForCategoryType:(long long)arg1;
+ (id)selectedTitleForCategoryType:(long long)arg1 count:(long long)arg2 isAll:(BOOL)arg3;
+ (BOOL)isMsg:(id)arg1 simpleMsg:(id)arg2 matchCategoryType:(long long)arg3;
+ (void)updateCellDisplay:(id)arg1 withMsg:(id)arg2 dataLogic:(id)arg3;
+ (id)senderUserNameForMessage:(id)arg1;
+ (id)senderUserNameForMessageIgnoringChatType:(id)arg1;
+ (id)senderContactForMessage:(id)arg1 roomContact:(id *)arg2;
+ (id)senderDisplayNameForMessage:(id)arg1;
+ (void)updateCellDisplay:(id)arg1 withMsg:(id)arg2 searchKeyWord:(id)arg3;
+ (id)subtitle2TextForMessage:(id)arg1;
+ (unsigned long long)chatTypeForContactName:(id)arg1;
+ (void)openWeApp:(id)arg1 contactName:(id)arg2 nav:(id)arg3 vc:(id)arg4;
+ (void)openOpenSDKAppBrand:(id)arg1 contactName:(id)arg2 nav:(id)arg3 vc:(id)arg4;
+ (void)selectCellMsg:(id)arg1 fromViewController:(id)arg2 contactName:(id)arg3 navigationController:(id)arg4;
+ (id)footerButtonTypesForCategoryType:(long long)arg1;
+ (id)menuActionTypesForCategoryType:(long long)arg1;
+ (void)handleForwardWithLocalIds:(id)arg1 contactName:(id)arg2 multiSelectController:(id)arg3 fromViewController:(id)arg4;
+ (void)handleFavoriteWithLocalIds:(id)arg1 contactName:(id)arg2 multiSelectController:(id)arg3 fromViewController:(id)arg4;
+ (void)handleDeleteWithLocalIds:(id)arg1 contactName:(id)arg2 multiSelectController:(id)arg3 dataLogic:(id)arg4 fromViewController:(id)arg5 completion:(id /* block */)arg6;
+ (void)doDeleteWithLocalIds:(id)arg1 contactName:(id)arg2 multiSelectController:(id)arg3 dataLogic:(id)arg4;
+ (void)handleMoreWithLocalIds:(id)arg1 contactName:(id)arg2 multiSelectController:(id)arg3 fromViewController:(id)arg4 saveDelegate:(id)arg5;
+ (void)openSavePageSheetWithLocalIds:(id)arg1 contactName:(id)arg2 multiSelectController:(id)arg3 isAlbum:(BOOL)arg4 saveDelegate:(id)arg5 fromViewController:(id)arg6;
@end
