@interface MJCaptionReporter : NSObject
{
    MJCaptionReportInfo * _captionReportInfo; // +0x8
    double _captionEditingStartTimestamp; // +0x10
}
- (id)init;
- (void)markCaptionRecognitionFinishedWithAssetID:(id)arg1 audioID:(id)arg2 captionGroups:(id)arg3 sttReportInfo:(id)arg4 audioProcessTimeCost:(unsigned long long)arg5;
- (void)markEditingStartedWithCaptionSegment:(id)arg1;
- (void)markEditingFinishedWithCaptionSegment:(id)arg1;
- (void)markWillRemoveCaptionSegment:(id)arg1;
- (void)collectFinalCaptionResultWithStorylineVM:(id)arg1 sessionID:(id)arg2 postID:(id)arg3 editID:(id)arg4;
- (id)captionReportInfo;
- (double)captionEditingStartTimestamp;
- (void)setCaptionEditingStartTimestamp:(double)arg1;
- (void).cxx_destruct;
@end
