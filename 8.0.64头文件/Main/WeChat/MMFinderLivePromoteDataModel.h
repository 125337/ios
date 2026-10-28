@interface MMFinderLivePromoteDataModel : NSObject
{
    MMFinderLiveTaskId * _taskId; // +0x8
    long long _errorCode; // +0x10
    NSMutableArray * _promoteInfoList; // +0x18
    NSMutableArray * _promoteAvailableItemList; // +0x20
    NSMutableArray * _functionPanelDataArray; // +0x28
}
+ (id)initWithTaskId:(id)arg1 promoteInfoList:(id)arg2 promoteAvailableItemList:(id)arg3 errorCode:(long long)arg4;
- (BOOL)isContainPromoteItem:(id)arg1;
- (void)insertPrmoteItem:(id)arg1;
- (void)updateNoticePrmoteItem:(id)arg1;
- (void)updatePromoteInfoList:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)deletePromoteItem:(id)arg1;
- (id)promoteInfoItemsOfType:(unsigned int)arg1;
- (id)availableItemOfItemType:(unsigned int)arg1;
- (id)promoteInfoItemsOfPromoteId:(unsigned long long)arg1;
- (BOOL)isContainPromoteItemWithType:(unsigned int)arg1;
- (id)getCurrentShowPromoteInfo;
- (id)promoteInfoList;
- (id)promoteAvailableItemList;
- (id)getFunctionPanelDataArray;
- (id)addChooseFunctionItem:(id)arg1 functionList:(id)arg2 disableList:(id)arg3;
- (id)getChangeStringWithString:(id)arg1 size:(long long)arg2;
- (id)changeModelWithItem:(id)arg1;
- (void)setupPaidCollectionItemWithSize:(long long)arg1 functionItem:(id)arg2;
- (void)setupPaidCollectionItemStyle:(long long)arg1 functionItem:(id)arg2;
- (void)setSubPath:(id)arg1;
- (BOOL)shouldShowAnchorTaskGuide:(id)arg1;
- (long long)getLiveNoticeItemsCont;
- (BOOL)isLiveNotice:(id)arg1;
- (id)functionPanelDataArray;
- (id)finderLiveTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (void)setPromoteInfoList:(id)arg1;
- (void)setPromoteAvailableItemList:(id)arg1;
- (void)setFunctionPanelDataArray:(id)arg1;
- (void).cxx_destruct;
@end
