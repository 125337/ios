@interface WCFinderLiveReplayPreviewImgLoader : NSObject
{
    BOOL _hasCompletePreRequest; // +0x8
    BOOL _isStartLoad; // +0x9
    id /* block */ _preLoadCompletion; // +0x10
    double _currPreviewTime; // +0x18
    long long _currPreviewImgInfoIndex; // +0x20
    WCFinderLiveReplayPreviewImgInfo * _currPreviewImgInfo; // +0x28
    NSMutableArray * _previewImgList; // +0x30
    unsigned long long _currPreRequestCnt; // +0x38
    unsigned long long _lastPreRequestBySide; // +0x40
}
- (void)startLoad;
- (void)appendPreviewThumbList:(id)arg1;
- (id)getNearestPreviewImgInfoWithTime:(double)arg1;
- (void)updateCurrentPreviewTime:(double)arg1;
- (void)updateCurrPreviewImgInfo;
- (void)reUpdateCurrPreviewImgInfoIndex;
- (void)sortPreviewImgList;
- (long long)getNearestPreviewImgInfoIndexWithTime:(double)arg1;
- (void)tryToPreLoadPreviewImgs;
- (void)checkHasCompletePreRequest;
- (void)updateHasCompletePreRequest:(BOOL)arg1;
- (id)getNextPreRequestPreviewImgInfo:(unsigned long long *)arg1;
- (id)getLeftSideNearestUnLoadedImgInfo:(unsigned long long)arg1;
- (id)getRightSideNearestUnLoadedImgInfo:(unsigned long long)arg1;
- (id)previewImgList;
- (unsigned long long)previewImgCount;
- (id /* block */)preLoadCompletion;
- (void)setPreLoadCompletion:(id /* block */)arg1;
- (BOOL)hasCompletePreRequest;
- (void)setHasCompletePreRequest:(BOOL)arg1;
- (BOOL)isStartLoad;
- (void)setIsStartLoad:(BOOL)arg1;
- (double)currPreviewTime;
- (void)setCurrPreviewTime:(double)arg1;
- (long long)currPreviewImgInfoIndex;
- (void)setCurrPreviewImgInfoIndex:(long long)arg1;
- (id)currPreviewImgInfo;
- (void)setCurrPreviewImgInfo:(id)arg1;
- (void)setPreviewImgList:(id)arg1;
- (unsigned long long)currPreRequestCnt;
- (void)setCurrPreRequestCnt:(unsigned long long)arg1;
- (unsigned long long)lastPreRequestBySide;
- (void)setLastPreRequestBySide:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
