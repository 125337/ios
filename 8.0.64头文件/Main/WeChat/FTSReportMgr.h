@interface FTSReportMgr : NSObject
{
    WCSearchCTRInfo * _ctrInfo; // +0x8
    WCSearchCTRInfo * _detailCtrInfo; // +0x10
    NSMutableSet * _resultHittedKeywordSet; // +0x18
    FTSBrowseReportHelper * _mainBrowseHelper; // +0x20
    FTSBrowseReportHelper * _subBrowseHelper; // +0x28
}
- (id)init;
- (id)safeKVString:(id)arg1;
- (void)addMainSearchFTSLog:(id)arg1;
- (void)logBeginSearch:(unsigned long long)arg1;
- (void)logAddAddressFriend:(unsigned long long)arg1;
- (void)addSubSearchFTSLog:(id)arg1;
- (void)clearCacheHitKeyword;
- (void)logNewHitResult:(id)arg1 hasWebSearchCellShow:(BOOL)arg2 clickType:(unsigned int)arg3 cellStyle:(unsigned int)arg4;
- (void)logGuidePageClick:(unsigned long long)arg1 sessionId:(id)arg2;
- (void)logGroupHitPos:(unsigned int)arg1 totalCount:(unsigned int)arg2;
- (void)logGroupHitPos:(unsigned int)arg1 totalCount:(unsigned int)arg2 isInMainPage:(BOOL)arg3 isClickMore:(BOOL)arg4;
- (void)reportGlobalSearchResult:(id)arg1;
- (BOOL)searchFavDone:(id)arg1;
- (BOOL)searchMemoryDone:(id)arg1;
- (BOOL)searchMatchTopHit:(id)arg1;
- (unsigned int)searchTopHitCount:(id)arg1;
- (BOOL)searchMatchNormalContact:(id)arg1;
- (unsigned int)searchNormalContactCount:(id)arg1;
- (BOOL)searchMatchGroupContact:(id)arg1;
- (unsigned int)searchGroupCount:(id)arg1;
- (BOOL)searchMatchBrandContact:(id)arg1;
- (unsigned int)searchBrandContactCount:(id)arg1;
- (BOOL)searchMatchFeature:(id)arg1;
- (unsigned int)searchFeatureCount:(id)arg1;
- (BOOL)searchMatchMsg:(id)arg1;
- (unsigned int)searchMsgCount:(id)arg1;
- (BOOL)searchMatchIndexMsg:(id)arg1;
- (BOOL)searchMatchMemoryMsg:(id)arg1;
- (BOOL)searchMatchFavItems:(id)arg1;
- (unsigned int)searchFavCount:(id)arg1;
- (void)startBrowseMainSearchResult;
- (void)startBrowseSubSearchResult;
- (void)reportIDKeyContactSearchTime:(unsigned int)arg1;
- (void)reportKVContactSearchInfo:(id)arg1;
- (unsigned int)getReportDeviceCode;
- (void)cancelSearch;
- (void)createChatRoomOperationKVReport:(BOOL)arg1;
- (void)reportKVMsgResultClickType:(unsigned long long)arg1 pageType:(unsigned long long)arg2 showTalkerEntry:(BOOL)arg3;
- (void)reportKVMsgResultClickType:(unsigned long long)arg1 pageType:(unsigned long long)arg2 showTalkerEntry:(BOOL)arg3 userName:(id)arg4;
- (void)reportDBFileSize:(long long)arg1 pageCount:(unsigned int)arg2 freeListCount:(unsigned int)arg3 unbatchGetFavItemCount:(unsigned int)arg4;
- (void)reportFavSearchTime:(unsigned long long)arg1 QueryTime:(unsigned long long)arg2 CheckDBTime:(unsigned long long)arg3 ResultCount:(unsigned int)arg4 isFromFav:(BOOL)arg5 byType:(long long)arg6 tagsCount:(int)arg7 isFTS5:(BOOL)arg8;
- (void)reportFavIndexOperationType:(unsigned int)arg1 OperationTime:(unsigned long long)arg2 OperationCount:(unsigned int)arg3 updateCount:(unsigned int)arg4 isFTS5:(BOOL)arg5;
- (void)reportContactIndexOperationType:(unsigned int)arg1 OperationTime:(unsigned long long)arg2 OperationCount:(unsigned int)arg3 updateCount:(unsigned int)arg4 singleContactCount:(unsigned int)arg5 groupContactCount:(unsigned int)arg6 isBuildingIndex:(BOOL)arg7;
- (void)reportMessageFTSResultCnt:(unsigned long long)arg1 FTSQueryTime:(unsigned long long)arg2 MainDBTime:(unsigned long long)arg3 GroupTime:(unsigned long long)arg4 limitSessionCount:(unsigned long long)arg5 targetSessionCount:(unsigned long long)arg6 itemLimit:(unsigned long long)arg7 maxCreateTime:(unsigned long long)arg8 totalTime:(unsigned long long)arg9;
- (void)reportMessageFTSModify:(int)arg1 MessageCount:(unsigned long long)arg2 CostTime:(unsigned long long)arg3;
- (void)reportContactSearchMonitor:(id)arg1;
- (void)reportKVMsgSearchInfo:(unsigned long long)arg1 pageType:(unsigned long long)arg2 searchAgain:(BOOL)arg3 appendMode:(BOOL)arg4;
- (void)reportSelectedGroupTrains:(id)arg1;
- (void)batchReportUnSelectedGroupTrains:(id)arg1 exclude:(id)arg2 dicMatchTips:(id)arg3 query:(id)arg4 topHits:(id)arg5;
- (void)initCrtInfo;
- (void)newCTRBeginSearch:(id)arg1 isVoiceInput:(BOOL)arg2;
- (void)newCTREndSearch:(id)arg1 force:(BOOL)arg2;
- (void)weshopCTRBeginSearch:(id)arg1;
- (void)weshopCTREndSearch;
- (unsigned int)getFTSCustomerServiceTypeWithUserName:(id)arg1;
- (unsigned int)getFTSCustomerServiceMatchTypeWithMatchTip:(id)arg1;
- (unsigned int)getFTSMsgResultChatType:(id)arg1;
- (id)ctrInfo;
- (void)setCtrInfo:(id)arg1;
- (id)detailCtrInfo;
- (void)setDetailCtrInfo:(id)arg1;
- (id)resultHittedKeywordSet;
- (void)setResultHittedKeywordSet:(id)arg1;
- (id)mainBrowseHelper;
- (void)setMainBrowseHelper:(id)arg1;
- (id)subBrowseHelper;
- (void)setSubBrowseHelper:(id)arg1;
- (void).cxx_destruct;
@end
