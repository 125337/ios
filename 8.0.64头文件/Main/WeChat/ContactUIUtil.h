@interface ContactUIUtil : MMObject
+ (void)alignPanelViewToSearchBarView:(id)arg1 panelView:(id)arg2 headSearchPanelView:(id)arg3 isHiddenheadSearchPanelView:(BOOL)arg4 headSearchPanelViewTop:(double)arg5;
+ (void)makeSearchSectionHeaderView:(id)arg1 headerViewWidth:(double)arg2;
+ (void)makeSearchSectionHeaderViewMultiSelectBtnChange:(id)arg1 isShow:(BOOL)arg2;
+ (void)resetContactCell:(id)arg1;
+ (void)disableSelectContactCell:(id)arg1;
+ (double)getSearchPanelViewHeight:(BOOL)arg1;
+ (double)getSearchPanelHeadImagesize:(BOOL)arg1;
+ (double)getSearchPanelInputViewHeight:(BOOL)arg1;
+ (double)getSearchPanelCellSize:(BOOL)arg1;
+ (void)resetNewContactsSearchPanelViewAccessibility:(id)arg1;
+ (void)resetFavourContactIconViewAccessibility:(id)arg1;
+ (BOOL)checkNewTokenPickSearch;
+ (id)makeRecommendTextView:(id)arg1 viewWidth:(double)arg2;
+ (id)getContactsHistoryGroupWord;
+ (id)getPermissionTextWithContact:(id)arg1;
+ (id)getWCAddBlacklistCellTitleWithContact:(id)arg1;
+ (id)getWCOutsiderCellTitleWithContact:(id)arg1;
+ (id)getWCAddBlacklistAndOutsiderCellTitleWithContact:(id)arg1;
+ (id)getViewControllerTitleWithSectionType:(unsigned int)arg1;
+ (id)getCreateChatSectionHeadViewWord;
+ (id)getContactsRecommendContactWord;
+ (id)getChatRoomInvitationListTipsBarTitle:(id)arg1;
+ (void)addOuterBorderToView:(id)arg1 color:(id)arg2 width:(double)arg3 cornerRadius:(double)arg4;
+ (id)getMessageRoomContentStillNotificationMsgDescitleWithContact:(id)arg1;
+ (id)printArrContact:(id)arg1;
+ (BOOL)checkShareCardCanForward:(id)arg1;
@end
