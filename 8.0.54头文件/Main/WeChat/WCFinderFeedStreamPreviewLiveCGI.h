@interface WCFinderFeedStreamPreviewLiveCGI : WCFinderLiveBaseCgi
{
    int _commentScene; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    NSString * _livePkId; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
    long long _previewDelaySec; // +0x30
    NSData * _multiStyleInfo; // +0x38
}
- (id)initWithFinderFeedPreviewDataItem:(id)arg1 commentScene:(int)arg2 liveTaskId:(id)arg3 multiStyleInfo:(id)arg4 previewDelaySec:(long long)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)shouldAutoProcessingToastWithError:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)livePkId;
- (void)setLivePkId:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (long long)previewDelaySec;
- (void)setPreviewDelaySec:(long long)arg1;
- (id)multiStyleInfo;
- (void)setMultiStyleInfo:(id)arg1;
- (void).cxx_destruct;
@end

