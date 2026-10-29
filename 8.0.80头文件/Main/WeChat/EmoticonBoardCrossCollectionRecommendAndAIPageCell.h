@interface EmoticonBoardCrossCollectionRecommendAndAIPageCell : EmoticonBoardCrossCollectionBasePageCell <UICollectionViewDataSource, EmoticonRecommendBoardCgiDelegate, EmoticonBoardCrossCollectionRecommendEmoticonHeaderViewDelegate, EmoticonBoardCrossCollectionRecommendEmoticonSearchViewDelegate, EmoticonBoardCrossCollectionEmoticonFooterViewDelegate, EmoticonRecommendDelegate, UIGestureRecognizerDelegate, EmoticonDescMgrExt, EmoticonDownloadTaskDelegate, EmoticonBoradCrossCollectionRecommendAndAICellDelegate>
{
    BOOL _isLoading; // +0x8
    BOOL _needShowErrorTip; // +0x9
    BOOL _keywordsFinishLoading; // +0xa
    BOOL _isRecommendAllowed; // +0xb
    BOOL _forceGetChatContext; // +0xc
    BOOL _isInputRecommendAllowed; // +0xd
    BOOL _isLocalEmoticonRecommendAllowed; // +0xe
    BOOL _doinglocalSearch; // +0xf
    BOOL _localsearchIsReady; // +0x10
    BOOL _isUseLocalModel; // +0x11
    BOOL _newDataRefreshed; // +0x12
    BOOL _isHiding; // +0x13
    BOOL _enableParallelDownload; // +0x14
    BOOL _needShowErrorTipForPatch; // +0x15
    BOOL _fromChangeNewRecommend; // +0x16
    int _firstLoadVisibleCount; // +0x18
    RecommendPanelEmojiCtxs * _ctxs; // +0x20
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0x28
    NSIndexPath * _selectedIndexPath; // +0x30
    EmoticonRecommendBoardCgi * _cgiRecommend; // +0x38
    NSString * _errorTip; // +0x40
    NSMutableArray * _emojiSectionInfoArray; // +0x48
    EmoticonRecommendPrivacyLogic * _privacyLogic; // +0x50
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x58
    NSMutableSet * _localMatchKeywords; // +0x60
    NSMutableArray * _localRecommendEmoticonList; // +0x68
    NSMutableArray * _chatContents; // +0x70
    NSString * _inputContents; // +0x78
    NSMutableArray * _recommendEmoticonList; // +0x80
    EmoticonEmotionPredictor * _predictor; // +0x88
    NSMutableString * _debugInfo; // +0x90
    EmoticonKeywordMatcher * _emoticonKeywordMatcher; // +0x98
    ReportStruct * _reportStruct; // +0xa0
    StoreEmoticonDownloadMgr * _downloadMgr; // +0xa8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configCollectionViewWithFrame:(CGRect)arg1;
- (void)configGestureRecognizer;
- (void)setSectionInfo:(id)arg1;
- (void)upadteCtxsAndConfigData:(BOOL)arg1;
- (void)doLocalSearch;
- (void)asyncdoSearchLocalEmoticons:(id)arg1;
- (void)continueQuery;
- (void)makePredict:(id)arg1;
- (void)onKeywordMatcheFinished:(id)arg1;
- (void)doSearchLocalEmoticons;
- (void)initCacheData;
- (void)dealloc;
- (void)onGetEmoticonDesc:(id)arg1 emoticonWrapList:(id)arg2;
- (void)onGetEmoticonDescNoResult:(id)arg1;
- (void)finishLocalSearch;
- (void)reloadData;
- (void)buildDefaultRecommendSection;
- (void)reloadViews;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)configSvrData:(unsigned long long)arg1;
- (id)getEmoticonWarpAtIndexPath:(id)arg1;
- (unsigned long long)getRecommendPrivacyViewTypeInSection:(long long)arg1;
- (id)privacyLogic;
- (void)onCellHide;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)isCellFullyVisibleAtIndexPath:(id)arg1;
- (void)checkFullyVisibleCells;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onLongPressToPreview:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (unsigned long long)maximumNumberOfItemsInRow;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onEmoticonRecommendBoardCgiOk:(id)arg1 recommendWraps:(id)arg2;
- (void)onEmoticonRecommendBoardCgiFailed:(id)arg1;
- (void)doFromSelfRefreshRequestReport;
- (void)doCgiRequestReport:(BOOL)arg1 emoticonCount:(int)arg2 emoticonList:(id)arg3;
- (void)onTapSearchButton;
- (void)doEventReport:(id)arg1 eventId:(id)arg2 params:(id)arg3;
- (void)onTapFullPrivacyConfirmButton;
- (void)onTapFullPrivacyCancelButton;
- (void)onTapBriefPrivacyConfirmButton;
- (void)onTapBriefPrivacyCancelButton;
- (void)onTapFullPrivacyShow;
- (void)onTabFullPrivacyLearnMore;
- (void)onTapRefreshButton;
- (void)doEmoticonLoadingReport;
- (void)tryReloadData;
- (id)getWorkerQueue;
- (void)onEmoticonShow:(id)arg1;
- (void)onDownloadTaskFinished:(id)arg1 successful:(BOOL)arg2 fromLocal:(BOOL)arg3;
- (id)ctxs;
- (void)setCtxs:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)cgiRecommend;
- (void)setCgiRecommend:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)needShowErrorTip;
- (void)setNeedShowErrorTip:(BOOL)arg1;
- (id)errorTip;
- (void)setErrorTip:(id)arg1;
- (id)emojiSectionInfoArray;
- (void)setEmojiSectionInfoArray:(id)arg1;
- (void)setPrivacyLogic:(id)arg1;
- (BOOL)keywordsFinishLoading;
- (void)setKeywordsFinishLoading:(BOOL)arg1;
- (id)workerQueue;
- (void)setWorkerQueue:(id)arg1;
- (BOOL)isRecommendAllowed;
- (void)setIsRecommendAllowed:(BOOL)arg1;
- (BOOL)forceGetChatContext;
- (void)setForceGetChatContext:(BOOL)arg1;
- (BOOL)isInputRecommendAllowed;
- (void)setIsInputRecommendAllowed:(BOOL)arg1;
- (BOOL)isLocalEmoticonRecommendAllowed;
- (void)setIsLocalEmoticonRecommendAllowed:(BOOL)arg1;
- (id)localMatchKeywords;
- (void)setLocalMatchKeywords:(id)arg1;
- (id)localRecommendEmoticonList;
- (void)setLocalRecommendEmoticonList:(id)arg1;
- (id)chatContents;
- (void)setChatContents:(id)arg1;
- (id)inputContents;
- (void)setInputContents:(id)arg1;
- (id)recommendEmoticonList;
- (void)setRecommendEmoticonList:(id)arg1;
- (id)predictor;
- (void)setPredictor:(id)arg1;
- (id)debugInfo;
- (void)setDebugInfo:(id)arg1;
- (BOOL)doinglocalSearch;
- (void)setDoinglocalSearch:(BOOL)arg1;
- (id)emoticonKeywordMatcher;
- (void)setEmoticonKeywordMatcher:(id)arg1;
- (BOOL)localsearchIsReady;
- (void)setLocalsearchIsReady:(BOOL)arg1;
- (BOOL)isUseLocalModel;
- (void)setIsUseLocalModel:(BOOL)arg1;
- (BOOL)newDataRefreshed;
- (void)setNewDataRefreshed:(BOOL)arg1;
- (BOOL)isHiding;
- (void)setIsHiding:(BOOL)arg1;
- (int)firstLoadVisibleCount;
- (void)setFirstLoadVisibleCount:(int)arg1;
- (BOOL)enableParallelDownload;
- (void)setEnableParallelDownload:(BOOL)arg1;
- (id)reportStruct;
- (void)setReportStruct:(id)arg1;
- (BOOL)needShowErrorTipForPatch;
- (void)setNeedShowErrorTipForPatch:(BOOL)arg1;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (BOOL)fromChangeNewRecommend;
- (void)setFromChangeNewRecommend:(BOOL)arg1;
- (void).cxx_destruct;
@end
