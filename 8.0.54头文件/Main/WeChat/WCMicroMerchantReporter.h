@interface WCMicroMerchantReporter : NSObject <IWCTimeLineSessionExt>
{
    BOOL _hasClickedUnfold; // +0x8
    BOOL _hasConfirmedUnfold; // +0x9
    unsigned int _browseStart; // +0xc
    NSMutableDictionary * _foldExposureInfo; // +0x10
    NSMutableSet * _exposureSessionExposureFeedIds; // +0x18
    NSString * _exposureSessionID; // +0x20
    NSString * _browseSessionID; // +0x28
    WCDataItem * _browseFoldItem; // +0x30
    WCMicroMerchantFeedsGroup * _browseFoldItemWsGroup; // +0x38
    NSMutableSet * _browseFeedListInFold; // +0x40
}
+ (void)asyncDoReportExposure:(id)arg1 sessionID:(id)arg2 exposureSessionExposureFeedIdsCnt:(unsigned int)arg3;
- (id)init;
- (void)beginExposureSession;
- (void)endExposureSession;
- (void)resetFoldExposure;
- (void)recordFoldItemGenerate:(id)arg1 index:(unsigned int)arg2;
- (void)updateExposureClicked:(BOOL)arg1 forFeedID:(id)arg2;
- (void)onTimeLineSessionStat:(id)arg1;
- (void)beginBrowseSession:(id)arg1 wsGroup:(id)arg2;
- (void)endBrowseSession;
- (void)recordExposureFeedIDInBrowseFold:(id)arg1;
- (void)recordOnClickUnfoldTimelineButton;
- (void)recordOnComfirmUnfoldTimeline;
- (id)browseFeedListInFold;
- (void)doReportBrowse;
- (void)resetFoldBrowse;
- (id)foldExposureInfo;
- (void)setFoldExposureInfo:(id)arg1;
- (id)exposureSessionExposureFeedIds;
- (void)setExposureSessionExposureFeedIds:(id)arg1;
- (id)exposureSessionID;
- (void)setExposureSessionID:(id)arg1;
- (id)browseSessionID;
- (void)setBrowseSessionID:(id)arg1;
- (unsigned int)browseStart;
- (void)setBrowseStart:(unsigned int)arg1;
- (id)browseFoldItem;
- (void)setBrowseFoldItem:(id)arg1;
- (id)browseFoldItemWsGroup;
- (void)setBrowseFoldItemWsGroup:(id)arg1;
- (void)setBrowseFeedListInFold:(id)arg1;
- (BOOL)hasClickedUnfold;
- (void)setHasClickedUnfold:(BOOL)arg1;
- (BOOL)hasConfirmedUnfold;
- (void)setHasConfirmedUnfold:(BOOL)arg1;
- (void).cxx_destruct;
@end

