@interface WCFinderLiveReplayPreviewImgResult : NSObject
{
    MMFinderLiveReplayGreateTimeModel * _greateTimeModel; // +0x8
    WCFinderLiveReplayPreviewImgInfo * _previewImgInfo; // +0x10
}
- (id)getPreviewImgUrl;
- (id)getPreviewImgTargetUrl;
- (double)getPreviewTime;
- (id)greateTimeModel;
- (void)setGreateTimeModel:(id)arg1;
- (id)previewImgInfo;
- (void)setPreviewImgInfo:(id)arg1;
- (void).cxx_destruct;
@end

