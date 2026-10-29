@interface MMFinderLiveCoverEnhanceGuideLogic : NSObject <MMFinderLiveCoverEnhanceTaskDelegate>
{
    BOOL _isCoverEnhanceGuideShowing; // +0x8
    id <MMFinderLiveCoverEnhanceGuideLogicDelegate> _delegate; // +0x10
    NSString * _rawCoverImgUrl; // +0x18
    UIImage * _rawCoverImg; // +0x20
    MMFinderLiveCoverEnhanceTask * _checkCoverNeedEnhanceTask; // +0x28
    WCFinderLiveStarterReporter * _reporter; // +0x30
}
- (id)initWithReporter:(id)arg1;
- (void)checkNeedShowCoverEnhanceGuideWithTaskId:(id)arg1 url:(id)arg2 img:(id)arg3;
- (void)dismissCoverEnhanceGuide;
- (void)onUserEditCoverImage;
- (void)startCheckTask;
- (void)startCheckTaskWithUrl:(id)arg1;
- (void)uploadImg:(id)arg1 completion:(id /* block */)arg2;
- (void)innerShowCoverEnhanceGuide;
- (void)innerDismissCoverEnhanceGuideWithAnimated:(BOOL)arg1;
- (unsigned int)getShowPreviousCoverEnhanceGuideCnt;
- (void)updateShowPreviousCoverEnhanceGuideCnt;
- (BOOL)forceShowGuide;
- (void)onLiveCoverEnhanceTaskSucceed:(id)arg1;
- (void)onLiveCoverEnhanceTaskFailed:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)rawCoverImgUrl;
- (void)setRawCoverImgUrl:(id)arg1;
- (id)rawCoverImg;
- (void)setRawCoverImg:(id)arg1;
- (BOOL)isCoverEnhanceGuideShowing;
- (void)setIsCoverEnhanceGuideShowing:(BOOL)arg1;
- (id)checkCoverNeedEnhanceTask;
- (void)setCheckCoverNeedEnhanceTask:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
