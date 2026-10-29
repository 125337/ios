@interface WCMomentsPostReportSession : NSObject <NSCopying>
{
    BOOL _didDisplayActionSheet; // +0x8
    BOOL _isShowingBadgeWhenClickRightBarBtn; // +0x9
    BOOL _isAssetAsyncCompositionEnabled; // +0xa
    BOOL _MiaoJian_usedOriginalAudio; // +0xb
    BOOL _MiaoJian_didOpenMiaoJianAppInCreation; // +0xc
    BOOL _hasEverEnteredNewCommitPage; // +0xd
    int _sendType; // +0x10
    NSString * _sessionID; // +0x18
    NSString * _cycleID; // +0x20
    long long _scene; // +0x28
    long long _entrance; // +0x30
    unsigned long long _actionSheetSection; // +0x38
    NSArray * _postAssetInfoList; // +0x40
    SightDraft * _sightDraft; // +0x48
    double _videoDurationForPosting; // +0x50
    EditVideoAttr * _videoEditAttributes; // +0x58
    VideoCompositionAttr * _compositionAttr; // +0x60
    unsigned long long _mediaCountWhileBeginning; // +0x68
    unsigned long long _mediaTakenCountWhileBeginning; // +0x70
    unsigned long long _mediaCountWhileFinishing; // +0x78
    unsigned long long _mediaTakenCountWhileFinishing; // +0x80
    unsigned long long _takingMediaTimes; // +0x88
    long long _MiaoJianType; // +0x90
    unsigned long long _MiaoJian_templateType; // +0x98
    WCMomentsTemplateInfo * _MiaoJian_selectedTemplateInfo; // +0xa0
    NSString * _maasSessionKey; // +0xa8
    unsigned long long _MiaoJian_regularGuideDisplayedCount; // +0xb0
    unsigned long long _MiaoJian_regularGuideAcceptedCount; // +0xb8
    unsigned long long _MiaoJian_regularGuideRejectedCount; // +0xc0
    unsigned long long _MiaoJian_regularGuideTappedBlankAreaCount; // +0xc8
    NSString * _MiaoJian_AIServerTaskID; // +0xd0
    WCMomentsInputAreaReportInfo * _inputAreaReportInfo; // +0xd8
    WCShareExcerptReportInfo * _shareExcerptReportInfo; // +0xe0
    WCDataItem * _localDataItem; // +0xe8
    NSString * _localFeedID; // +0xf0
    WCDataItem * _postedDataItem; // +0xf8
    NSString * _feedID; // +0x100
    NSArray * _thumbSizeList; // +0x108
    NSDate * _postButtonClickedTime; // +0x110
    NSDate * _postPageDismissedTime; // +0x118
    long long _finishAction; // +0x120
    unsigned long long _postTaskSumDurationMS; // +0x128
    unsigned long long _postTaskPendingDurationMS; // +0x130
    unsigned long long _postTaskPrepareDataDurationMS; // +0x138
    long long _videoEncodeType; // +0x140
    unsigned long long _cgiReconnectCnt; // +0x148
    NSMutableArray * _cgiResult; // +0x150
    unsigned long long _clickrRetryCnt; // +0x158
    NSString * _newlifeShareFeedId; // +0x160
    EcsShareSnsInfo * _ecsShareSnsInfo; // +0x168
    WCMomentsPostMusicInfo * _musicInfo; // +0x170
    WCMomentsPickerActionRecorder * _currentPickerActionRecorder; // +0x178
    WCVideoProducerActionRecorder * _currentVideoProducerActionRecorder; // +0x180
    NSMutableArray * _videoProducerActionRecorderList; // +0x188
    NSMutableArray * _editActionTracers; // +0x190
    NSMutableArray * _pageActionTracers; // +0x198
    NSMutableArray * _actionDetailTracers; // +0x1a0
    NSMutableDictionary * _pageDurationDictionary; // +0x1a8
    NSMutableDictionary * _pageActionCountDictionary; // +0x1b0
    long long _currentPageAction; // +0x1b8
    NSDate * _appearedTimeForCurrentPage; // +0x1c0
    NSMutableDictionary * _postCompositeOperationDictionary; // +0x1c8
    NSDictionary * _Together_contactSelectionRecords; // +0x1d0
}
- (void)startPickerActionRecorder;
- (id)currentPickerActionRecorder;
- (void)stopPickerActionRecorder;
- (void)startVideoProducerActionRecorder:(unsigned int)arg1;
- (id)currentVideoProducerActionRecorder;
- (void)stopVideoProducerActionRecorder;
- (void)Together_didFinishSelectingContacts:(id)arg1 withSelectionRecords:(id)arg2;
- (id)Together_contactSelectionInfoReportDictionary;
- (id)_init;
- (void)dealloc;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)editActionTracers;
- (id)pageActionTracers;
- (id)actionDetailTracers;
- (id)pageDurationDictionary;
- (id)pageActionCountDictionary;
- (id)postCompositeOperationDictionary;
- (void)didSelectImages:(id)arg1;
- (void)didSelectSightDraft:(id)arg1;
- (void)didSelectForwardDataItem:(id)arg1;
- (long long)mediaTypeFromUploadMedia:(id)arg1;
- (long long)_mediaSourceOfImageAsset:(id)arg1;
- (long long)_mediaSourceOfSightDraft:(id)arg1;
- (void)didTakeEditAction:(long long)arg1;
- (void)recordEditAction:(long long)arg1;
- (void)recordPageAction:(long long)arg1;
- (void)recordActionDetail:(long long)arg1;
- (long long)msSumDurationForPageAction:(long long)arg1;
- (unsigned long long)msDurationInPickerForPageAction:(long long)arg1;
- (unsigned long long)msDurationInNewCommitForPageAction:(long long)arg1;
- (unsigned long long)actionCountForPageAction:(long long)arg1;
- (unsigned long long)actionCountInPickerForEditAction:(long long)arg1;
- (unsigned long long)actionCountInNewCommitForEditAction:(long long)arg1;
- (void)didStartAssetPreparationWithFeedType:(long long)arg1;
- (void)didEndAssetPreparationWithFeedType:(long long)arg1 error:(id)arg2;
- (void)didFallbackAssetPreparationWithFeedType:(long long)arg1;
- (void)didStartAssetCompositionWithFeedType:(long long)arg1 compositeId:(id)arg2 fromSource:(long long)arg3;
- (void)didEndAssetCompositionWithFeedType:(long long)arg1 compositeId:(id)arg2 error:(id)arg3;
- (void)didCancelAssetCompositionWithFeedType:(long long)arg1 compositeId:(id)arg2;
- (id)_createAssetCompositionOperationForId:(id)arg1;
- (void)didStartAssetThumbWithFeedType:(long long)arg1;
- (void)didEndAssetThumbWithFeedType:(long long)arg1 error:(id)arg2;
- (void)didStartMediaUploadingWithFeedType:(long long)arg1;
- (void)didEndMediaUploadingWithFeedType:(long long)arg1 error:(id)arg2;
- (void)didCancelMediaUploadingWithFeedType:(long long)arg1;
- (void)didStartPostRequestWithFeedType:(long long)arg1;
- (void)didEndPostRequestWithFeedType:(long long)arg1 error:(id)arg2;
- (void)didCancelPostRequestWithFeedType:(long long)arg1;
- (void)reportPostFlowAction:(long long)arg1 forPostOperation:(id)arg2;
- (id)_generatePostContextJsonStr;
- (void)reportAssetCompositionPost;
- (long long)_convertToAssetCompositionPostResultFromFinishAction:(long long)arg1;
- (void)setMiaoJian_selectedTemplateInfo:(id)arg1;
- (id)inputAreaReportInfo;
- (void)doInputAreaReport;
- (id)shareExcerptReportInfo;
- (void)doShareExcerptReportIfNeeded;
- (void)didPrepareUploadTask:(id)arg1;
- (void)didTakeFinishAction:(long long)arg1 feedType:(int)arg2;
- (id)generateReportString;
- (id)safeJSONStringWithObject:(id)arg1;
- (id)safeStringWithString:(id)arg1;
- (void)report;
- (void)reportEcsIfNeeded;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id)cycleID;
- (void)setCycleID:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)entrance;
- (void)setEntrance:(long long)arg1;
- (BOOL)didDisplayActionSheet;
- (void)setDidDisplayActionSheet:(BOOL)arg1;
- (BOOL)isShowingBadgeWhenClickRightBarBtn;
- (void)setIsShowingBadgeWhenClickRightBarBtn:(BOOL)arg1;
- (unsigned long long)actionSheetSection;
- (void)setActionSheetSection:(unsigned long long)arg1;
- (id)postAssetInfoList;
- (void)setPostAssetInfoList:(id)arg1;
- (id)sightDraft;
- (void)setSightDraft:(id)arg1;
- (double)videoDurationForPosting;
- (void)setVideoDurationForPosting:(double)arg1;
- (id)videoEditAttributes;
- (void)setVideoEditAttributes:(id)arg1;
- (id)compositionAttr;
- (void)setCompositionAttr:(id)arg1;
- (unsigned long long)mediaCountWhileBeginning;
- (void)setMediaCountWhileBeginning:(unsigned long long)arg1;
- (unsigned long long)mediaTakenCountWhileBeginning;
- (void)setMediaTakenCountWhileBeginning:(unsigned long long)arg1;
- (unsigned long long)mediaCountWhileFinishing;
- (void)setMediaCountWhileFinishing:(unsigned long long)arg1;
- (unsigned long long)mediaTakenCountWhileFinishing;
- (void)setMediaTakenCountWhileFinishing:(unsigned long long)arg1;
- (unsigned long long)takingMediaTimes;
- (void)setTakingMediaTimes:(unsigned long long)arg1;
- (BOOL)isAssetAsyncCompositionEnabled;
- (void)setIsAssetAsyncCompositionEnabled:(BOOL)arg1;
- (long long)MiaoJianType;
- (void)setMiaoJianType:(long long)arg1;
- (unsigned long long)MiaoJian_templateType;
- (void)setMiaoJian_templateType:(unsigned long long)arg1;
- (id)MiaoJian_selectedTemplateInfo;
- (BOOL)MiaoJian_usedOriginalAudio;
- (void)setMiaoJian_usedOriginalAudio:(BOOL)arg1;
- (BOOL)MiaoJian_didOpenMiaoJianAppInCreation;
- (void)setMiaoJian_didOpenMiaoJianAppInCreation:(BOOL)arg1;
- (id)maasSessionKey;
- (void)setMaasSessionKey:(id)arg1;
- (unsigned long long)MiaoJian_regularGuideDisplayedCount;
- (void)setMiaoJian_regularGuideDisplayedCount:(unsigned long long)arg1;
- (unsigned long long)MiaoJian_regularGuideAcceptedCount;
- (void)setMiaoJian_regularGuideAcceptedCount:(unsigned long long)arg1;
- (unsigned long long)MiaoJian_regularGuideRejectedCount;
- (void)setMiaoJian_regularGuideRejectedCount:(unsigned long long)arg1;
- (unsigned long long)MiaoJian_regularGuideTappedBlankAreaCount;
- (void)setMiaoJian_regularGuideTappedBlankAreaCount:(unsigned long long)arg1;
- (id)MiaoJian_AIServerTaskID;
- (void)setMiaoJian_AIServerTaskID:(id)arg1;
- (void)setInputAreaReportInfo:(id)arg1;
- (void)setShareExcerptReportInfo:(id)arg1;
- (id)localDataItem;
- (void)setLocalDataItem:(id)arg1;
- (id)localFeedID;
- (void)setLocalFeedID:(id)arg1;
- (id)postedDataItem;
- (void)setPostedDataItem:(id)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)thumbSizeList;
- (void)setThumbSizeList:(id)arg1;
- (id)postButtonClickedTime;
- (void)setPostButtonClickedTime:(id)arg1;
- (id)postPageDismissedTime;
- (void)setPostPageDismissedTime:(id)arg1;
- (long long)finishAction;
- (void)setFinishAction:(long long)arg1;
- (unsigned long long)postTaskSumDurationMS;
- (void)setPostTaskSumDurationMS:(unsigned long long)arg1;
- (unsigned long long)postTaskPendingDurationMS;
- (void)setPostTaskPendingDurationMS:(unsigned long long)arg1;
- (unsigned long long)postTaskPrepareDataDurationMS;
- (void)setPostTaskPrepareDataDurationMS:(unsigned long long)arg1;
- (int)sendType;
- (void)setSendType:(int)arg1;
- (long long)videoEncodeType;
- (void)setVideoEncodeType:(long long)arg1;
- (unsigned long long)cgiReconnectCnt;
- (void)setCgiReconnectCnt:(unsigned long long)arg1;
- (id)cgiResult;
- (void)setCgiResult:(id)arg1;
- (unsigned long long)clickrRetryCnt;
- (void)setClickrRetryCnt:(unsigned long long)arg1;
- (id)newlifeShareFeedId;
- (void)setNewlifeShareFeedId:(id)arg1;
- (id)ecsShareSnsInfo;
- (void)setEcsShareSnsInfo:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)currentPickerActionRecorder;
- (void)setCurrentPickerActionRecorder:(id)arg1;
- (id)currentVideoProducerActionRecorder;
- (void)setCurrentVideoProducerActionRecorder:(id)arg1;
- (id)videoProducerActionRecorderList;
- (void)setVideoProducerActionRecorderList:(id)arg1;
- (void)setEditActionTracers:(id)arg1;
- (void)setPageActionTracers:(id)arg1;
- (void)setActionDetailTracers:(id)arg1;
- (void)setPageDurationDictionary:(id)arg1;
- (void)setPageActionCountDictionary:(id)arg1;
- (long long)currentPageAction;
- (void)setCurrentPageAction:(long long)arg1;
- (id)appearedTimeForCurrentPage;
- (void)setAppearedTimeForCurrentPage:(id)arg1;
- (BOOL)hasEverEnteredNewCommitPage;
- (void)setHasEverEnteredNewCommitPage:(BOOL)arg1;
- (void)setPostCompositeOperationDictionary:(id)arg1;
- (id)Together_contactSelectionRecords;
- (void)setTogether_contactSelectionRecords:(id)arg1;
- (void).cxx_destruct;
@end
