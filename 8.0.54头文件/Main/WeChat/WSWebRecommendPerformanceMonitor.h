@interface WSWebRecommendPerformanceMonitor : MMUserService <MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * _monitorQueue; // +0x8
    double _webRecommendTLInitTime; // +0x10
    double _webRecommendTLUIBeginRenderTime; // +0x18
    double _webRecommendTLBePushedTime; // +0x20
    double _webRecommendTLSuperViewInitDuration; // +0x28
    double _webRecommendTLUIRenderDuration; // +0x30
    double _webRecommendTLUIRenderDurationFromInit; // +0x38
    double _videoPageInitTime; // +0x40
    double _videoRequestWebRecommendBeginTime; // +0x48
    double _videoRequestWebRecommendEndTime; // +0x50
    double _videoWaitForAllUrlEndFromInit; // +0x58
    double _videoWaitForAllUrlEndFromFirstOne; // +0x60
    NSMutableDictionary * _videoApiRequestBeginDic; // +0x68
    NSMutableDictionary * _videoUrlRequestBeginDic; // +0x70
    NSMutableDictionary * _videoDecideCellForUrlDic; // +0x78
    double _videoPageRenderDuration; // +0x80
    double _videoRequestWebRecommendDuration; // +0x88
    double _videoFirstVideoPlayFromInitDuration; // +0x90
    double _videoFirstVideoPlayFromRequestEndDuration; // +0x98
    NSMutableDictionary * _videoApiRequestDurationDic; // +0xa0
    NSMutableDictionary * _videoUrlRequestDurationDic; // +0xa8
    NSMutableDictionary * _videoUrlPlayDurationDic; // +0xb0
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)resetTLData;
- (void)resetVideoData;
- (void)uploadData;
- (void)uploadTLData:(BOOL)arg1;
- (void)uploadVideoData;
- (void)devideUploadVideoDataWithSlice:(long long)arg1 requestId:(id)arg2;
- (void)sendToMonitorQueueToExcute:(id /* block */)arg1;
- (void)recordWebRecommendTLInit;
- (void)recordWebRecommendTLUIInit;
- (void)recordWebRecommendTLUIWillRender;
- (void)recordWebRecommendTLUIReady;
- (void)recordWebRecommendTLBePushed;
- (void)recordWebRecommendTLBePoped;
- (void)recordVideoFlowInit;
- (void)recordVideoFlowDidAppear;
- (void)recordVideoFlowRequestWebRecommend;
- (void)recordVideoFlowRequestWebRecommendEnd;
- (void)recordVideoFlowFetchVideo:(id)arg1;
- (void)recordVideoFlowFetchVideoEnd:(id)arg1 returnUrlHead:(id)arg2;
- (void)recordVideoFlowWaitForAllUrlEnd;
- (void)recordVideoBeginDownloadFromUrl:(id)arg1;
- (void)recordVideoDecideCellForUrl:(id)arg1;
- (void)recordVideoBeginPlayFromUrl:(id)arg1;
- (void)recordVideoFlowLeave;
- (double)webRecommendTLInitTime;
- (void)setWebRecommendTLInitTime:(double)arg1;
- (double)webRecommendTLUIBeginRenderTime;
- (void)setWebRecommendTLUIBeginRenderTime:(double)arg1;
- (double)webRecommendTLBePushedTime;
- (void)setWebRecommendTLBePushedTime:(double)arg1;
- (double)webRecommendTLSuperViewInitDuration;
- (void)setWebRecommendTLSuperViewInitDuration:(double)arg1;
- (double)webRecommendTLUIRenderDuration;
- (void)setWebRecommendTLUIRenderDuration:(double)arg1;
- (double)webRecommendTLUIRenderDurationFromInit;
- (void)setWebRecommendTLUIRenderDurationFromInit:(double)arg1;
- (double)videoPageInitTime;
- (void)setVideoPageInitTime:(double)arg1;
- (double)videoRequestWebRecommendBeginTime;
- (void)setVideoRequestWebRecommendBeginTime:(double)arg1;
- (double)videoRequestWebRecommendEndTime;
- (void)setVideoRequestWebRecommendEndTime:(double)arg1;
- (double)videoWaitForAllUrlEndFromInit;
- (void)setVideoWaitForAllUrlEndFromInit:(double)arg1;
- (double)videoWaitForAllUrlEndFromFirstOne;
- (void)setVideoWaitForAllUrlEndFromFirstOne:(double)arg1;
- (id)videoApiRequestBeginDic;
- (void)setVideoApiRequestBeginDic:(id)arg1;
- (id)videoUrlRequestBeginDic;
- (void)setVideoUrlRequestBeginDic:(id)arg1;
- (id)videoDecideCellForUrlDic;
- (void)setVideoDecideCellForUrlDic:(id)arg1;
- (double)videoPageRenderDuration;
- (void)setVideoPageRenderDuration:(double)arg1;
- (double)videoRequestWebRecommendDuration;
- (void)setVideoRequestWebRecommendDuration:(double)arg1;
- (double)videoFirstVideoPlayFromInitDuration;
- (void)setVideoFirstVideoPlayFromInitDuration:(double)arg1;
- (double)videoFirstVideoPlayFromRequestEndDuration;
- (void)setVideoFirstVideoPlayFromRequestEndDuration:(double)arg1;
- (id)videoApiRequestDurationDic;
- (void)setVideoApiRequestDurationDic:(id)arg1;
- (id)videoUrlRequestDurationDic;
- (void)setVideoUrlRequestDurationDic:(id)arg1;
- (id)videoUrlPlayDurationDic;
- (void)setVideoUrlPlayDurationDic:(id)arg1;
- (void).cxx_destruct;
@end

