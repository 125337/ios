@interface IntelligentMsgImgMgr : MMUserService <MMServiceProtocol>
{
    NSRecursiveLock * _lock; // +0x8
    NSRecursiveLock * _faceClusterSequenceLock; // +0x10
    BOOL m_faceClusterSequenceLoad; // +0x18
    IntelligentMessageDataPB * m_intelligentMessageData; // +0x20
    NSMutableSet * m_setAllNeedBuildIndexSessionUserName; // +0x28
    NSMutableDictionary * m_temporaryDataDic; // +0x30
    IntelligentOCR * m_intelligentOCR; // +0x38
    IntelligentClassification * m_intelligentClassification; // +0x40
    IntelligentFaceAlbum * m_intelligentFaceAlbum; // +0x48
    NSNumber * _intelligentOCRInitResult; // +0x50
}
- (void)reportIntelligentMsgImgActionLog:(id)arg1;
- (id)getMatchTypeStr:(unsigned int)arg1;
- (void)reportIntelligentMsgImgExposureActionLog:(id)arg1 userName:(id)arg2 scene:(unsigned int)arg3 imageAllCount:(unsigned long long)arg4 categoryDisplayType:(unsigned int)arg5;
- (void)reportIntelligentMsgBrowseViewControllerActionLog:(id)arg1 userName:(id)arg2 action:(unsigned int)arg3 categoryDisplayType:(unsigned int)arg4;
- (void)reportIntelligentMsgBrowseViewControllerClickToSearchBannerActionLog:(id)arg1 userName:(id)arg2 isPopUp:(BOOL)arg3 categoryDisplayType:(unsigned int)arg4;
- (void)reportIntelligentMsgImgClickCategoryWordActionLog:(id)arg1 userName:(id)arg2 searchSessionId:(id)arg3 classification:(id)arg4 isHadPriorityBuildIndex:(BOOL)arg5 categoryDisplayType:(unsigned int)arg6;
- (void)reportIntelligentMsgStartUsingActionLog:(id)arg1 userName:(id)arg2 action:(unsigned int)arg3 categoryDisplayType:(unsigned int)arg4;
- (void)reportIntelligentMsgSearchActionLog:(id)arg1 userName:(id)arg2 action:(unsigned int)arg3 searchSessionId:(id)arg4 isHadPriorityBuildIndex:(BOOL)arg5 printQuery:(id)arg6 searchQuery:(id)arg7 searchScene:(unsigned int)arg8 tab:(unsigned int)arg9 categoryDisplayType:(unsigned int)arg10;
- (void)reportIntelligentMsgSearchClickCancelActionLog:(id)arg1 userName:(id)arg2 searchSessionId:(id)arg3 isHadPriorityBuildIndex:(BOOL)arg4 searchQuery:(id)arg5 searchCost:(unsigned int)arg6 categoryDisplayType:(unsigned int)arg7;
- (void)reportIntelligentMsgSearchResultActionLog:(id)arg1 userName:(id)arg2 action:(unsigned int)arg3 searchSessionId:(id)arg4 isHadPriorityBuildIndex:(BOOL)arg5 searchQuery:(id)arg6 keyWord:(id)arg7 imageCnt:(unsigned int)arg8 peopleCnt:(unsigned int)arg9 finderCnt:(unsigned int)arg10 searchCost:(unsigned int)arg11 categoryDisplayType:(unsigned int)arg12;
- (void)reportIntelligentMsgSearchClickFigureActionLog:(id)arg1 userName:(id)arg2 searchSessionId:(id)arg3 isHadPriorityBuildIndex:(BOOL)arg4 searchQuery:(id)arg5 peopleCnt:(unsigned int)arg6 categoryDisplayType:(unsigned int)arg7;
- (void)reportIntelligentMsgSearchClickPictureActionLog:(id)arg1 userName:(id)arg2 searchSessionId:(id)arg3 isHadPriorityBuildIndex:(BOOL)arg4 searchQuery:(id)arg5 keyWord:(id)arg6 peopleCnt:(unsigned int)arg7 imageSendTime:(unsigned int)arg8 tab:(unsigned int)arg9 categoryDisplayType:(unsigned int)arg10;
- (void)reportIntelligentMsgSearchInputQueryActionLog:(id)arg1 userName:(id)arg2 searchSessionId:(id)arg3 isHadPriorityBuildIndex:(BOOL)arg4 categoryDisplayType:(unsigned int)arg5;
- (unsigned int)getReportIntelligentMsgCategoryFilterTypeWithCategoryDisplayType:(unsigned int)arg1;
- (id)init;
- (void)initData;
- (void)initIntelligentMsgData;
- (id)getIntelligentOCR;
- (BOOL)checkOCRHasInitSuccessed;
- (void)updateOCRHasInitSuccessedIfNeed;
- (id)getIntelligentClassification;
- (id)getIntelligentFaceAlbum;
- (unsigned long long)getAvailableMemory;
- (void)initAllNeedBuildIndexSessionUserName;
- (BOOL)checkRepairCurrentIntelligentMsgVersion;
- (id)cpKeyForIntelligentMsg:(id)arg1 msgLocalID:(unsigned int)arg2;
- (BOOL)isIntelligentMessageUnsafe:(id)arg1 msgLocalID:(unsigned int)arg2;
- (id)getOcrTextWithImage:(id)arg1;
- (id)getOcrLineTextWithImage:(id)arg1;
- (BOOL)releaseOcrXNetCache;
- (id)generatePHashWithImage:(id)arg1;
- (id)getCodeClassify:(id)arg1;
- (id)batchExecuteOcrText:(id)arg1 error:(id)arg2;
- (id)batchExecuteClassification:(id)arg1 error:(id)arg2;
- (id)batchExecuteFaceAlbum:(id)arg1 error:(id)arg2;
- (id)getLabelNameWithLabelId:(unsigned int)arg1;
- (id)searchLabelInfoDic:(id)arg1;
- (id)getLabelIdListWithQuery:(id)arg1;
- (id)getLabelIdListAlwaySimplifyChinaWithQuery:(id)arg1;
- (id)searchSynonymLabelInfoDic:(id)arg1;
- (id)getSynonymLabelIdListWithQuery:(id)arg1;
- (id)getSynonymLabelIdListAlwaySimplifyChinaWithQuery:(id)arg1;
- (id)locateOcrTextPointInImage:(id)arg1 searchText:(id)arg2;
- (id)batchGetIntelligentMsg:(id)arg1 error:(id)arg2;
- (id)getIntelligentClassificationIdWithSearchQuery:(id)arg1;
- (void)releaseInternalMemory;
- (id)getClassificationWithImage:(id)arg1;
- (id)getArrPreFaceCluster;
- (void)updateOrInsertFaceClusterListToDbWithBlock:(id /* block */)arg1 dicLabelDbLabel:(id)arg2;
- (id)getFaceAlbumMessageSurfaceImage:(id)arg1;
- (BOOL)checkCanDoIntelligent;
- (BOOL)checkCanDoIntelligentInRAM;
- (id)getTemporaryDataWithUserName:(id)arg1 msgLocalID:(unsigned int)arg2;
- (void)addOcrTemporaryDataWithUserName:(id)arg1 msgLocalID:(unsigned int)arg2 ocrItem:(id)arg3;
- (void)addClassificationTemporaryDataWithUserName:(id)arg1 msgLocalID:(unsigned int)arg2 classificationData:(id)arg3;
- (void)addFaceAlbumTemporaryDataWithUserName:(id)arg1 msgLocalID:(unsigned int)arg2 arrFaceAlbumData:(id)arg3;
- (void)clearTemporaryData;
- (id)getgetTemporaryIDWithUserName:(id)arg1 msgLocalID:(unsigned int)arg2;
- (BOOL)isGPUIntelligentPattern;
- (long long)getFaceClusterSequence;
- (void)repairFaceCluster;
- (void)handleRepairFaceCluster;
- (BOOL)asyncCheckAndRepairFaceCluster;
- (id)getIntelligentMsgRepairFaceClusterId;
- (BOOL)isOpenFaceFeatureHardwareAcceleration;
- (BOOL)checkQueryIsSecureRank:(id)arg1;
- (void)insertSecureRank:(id)arg1;
- (id)p_getIntelligentMsgDirPath;
- (id)p_getIntelligentMsgDataFilePath;
- (void)p_saveIntelligentMsgToDataFileInternal;
- (void)p_loadStrongNotificationInternal;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceClearMemoryCacheInBackground;
- (void)handleOnModelUpdate:(id)arg1;
- (void)handleOnModelListWillUpdate:(id)arg1;
- (id)m_intelligentOCR;
- (void)setM_intelligentOCR:(id)arg1;
- (id)m_intelligentClassification;
- (void)setM_intelligentClassification:(id)arg1;
- (id)m_intelligentFaceAlbum;
- (void)setM_intelligentFaceAlbum:(id)arg1;
- (id)intelligentOCRInitResult;
- (void)setIntelligentOCRInitResult:(id)arg1;
- (void).cxx_destruct;
@end
