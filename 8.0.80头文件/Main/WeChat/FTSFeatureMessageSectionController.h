@interface FTSFeatureMessageSectionController : FTSMessageSectionController
- (id)sectionTitle;
- (unsigned long long)sectionType;
- (id)countLimitConifg;
- (id)displayItems;
- (id)displayedMgrSessionIndexes;
- (unsigned long long)displayedSessionUserCount;
- (BOOL)isTalkerEntryEnabled;
- (id)sessionUsernameForDisplayedItemRow:(long long)arg1;
- (id)sessionMsgItemsForDisplayedItemRow:(long long)arg1;
@end
