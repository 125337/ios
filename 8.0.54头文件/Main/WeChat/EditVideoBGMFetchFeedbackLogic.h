@interface EditVideoBGMFetchFeedbackLogic : NSObject
{
    id <EditVideoBGMFetchFeedbackLogicDelegate> _delegate; // +0x8
    NSMutableArray * _recommendedMusicFeedbacks; // +0x10
    RecommendedMusicFeedback * _currentRecommendedMusicFeedback; // +0x18
    WCStatTimerHelper * _statTimeHelper; // +0x20
}
- (id)init;
- (void)reportForSearch:(unsigned long long)arg1 recommentId:(unsigned long long)arg2 queryStr:(id)arg3 reportType:(unsigned long long)arg4 maxIndex:(unsigned long long)arg5;
- (void)reportFetchBgmFeedback:(BOOL)arg1 withSelected:(id)arg2 andRequestId:(unsigned long long)arg3 andIsmusicOn:(BOOL)arg4 isSearchMusic:(BOOL)arg5;
- (void)endLastFeedbackInfo;
- (void)addNewFeedbackInfo:(id)arg1 musicIndex:(unsigned long long)arg2 behaviorType:(unsigned char)arg3;
- (void)addNewFeedbackInfo:(id)arg1 musicIndex:(unsigned long long)arg2 behaviorType:(unsigned char)arg3 searchID:(unsigned long long)arg4 searchKeyWork:(id)arg5;
- (unsigned long long)bussId;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)recommendedMusicFeedbacks;
- (void)setRecommendedMusicFeedbacks:(id)arg1;
- (id)currentRecommendedMusicFeedback;
- (void)setCurrentRecommendedMusicFeedback:(id)arg1;
- (id)statTimeHelper;
- (void)setStatTimeHelper:(id)arg1;
- (void).cxx_destruct;
@end

