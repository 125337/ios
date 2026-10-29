@interface BTRecoFlowUtil : NSObject
+ (id)buildWebImageView;
+ (id)buildXButton;
+ (void)reigisterTableViewCells:(id)arg1;
+ (BOOL)isSupportedRecoFlowStyleWithCardMsg:(id)arg1;
+ (BOOL)isAllRecoFlowCardsUnsupportedWithCardMsgArr:(id)arg1;
+ (id)tableView:(id)arg1 cellForIndexPath:(id)arg2 sectionData:(id)arg3 shouldShowBottomSeperateLine:(BOOL)arg4;
+ (id)genOpenParamsWithIndexPath:(id)arg1 sectionData:(id)arg2;
+ (BOOL)shouldCellShowBottomSeperateLineWithSectionData:(id)arg1 andNextSectionData:(id)arg2 isLastSectionData:(BOOL)arg3;
+ (BOOL)isRecoFlowFuncSectionWithType:(unsigned long long)arg1;
+ (BOOL)isItemShowTypeValidValue:(unsigned long long)arg1;
+ (id)cellReuseIdentifierForFeedStyleFlag:(int)arg1 itemShowType:(unsigned long long)arg2 hasDigest:(BOOL)arg3;
@end
