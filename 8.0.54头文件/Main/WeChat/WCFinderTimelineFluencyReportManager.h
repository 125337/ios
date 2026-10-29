@interface WCFinderTimelineFluencyReportManager : NSObject
{
    WCFinderFluencyReportCenter * _reportCenter; // +0x8
    id /* block */ _reportBlock; // +0x10
    NSMutableArray * _infoBuffer; // +0x18
}
+ (id)genSceneKeyWithCommentScene:(int)arg1 andPullType:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;
- (id)initWithReportCenter:(id)arg1;
- (void)setEnterTimestamp:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setStartScene:(long long)arg1 sceneKey:(id)arg2;
- (void)setCommentScene:(int)arg1 sceneKey:(id)arg2;
- (BOOL)isStartSceneEnterWithSceneKey:(id)arg1;
- (void)setLocalOperationFinishTime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setGetCommentDetailCGITime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setGetCommentDetailCGIFinishTime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setPullStreamCGITime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setPullHistoryCGITime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setPullCGIFinishTime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (BOOL)isPullCGIFinished:(id)arg1;
- (void)setPullCGIProfile:(id)arg1 sceneKey:(id)arg2;
- (void)setPullCGIFailWithSceneKey:(id)arg1;
- (void)setIsFromPrefetch:(BOOL)arg1 sceneKey:(id)arg2;
- (void)setDebugMessage:(id)arg1 sceneKey:(id)arg2;
- (void)setShowUIFinishTime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setFirstFeedId:(id)arg1 sceneKey:(id)arg2;
- (void)setFirstVideoMediaId:(id)arg1 sceneKey:(id)arg2;
- (void)setFirstVideoWithMediaId:(id)arg1 preloadStartTime:(unsigned long long)arg2 sceneKey:(id)arg3;
- (void)setFirstVideoWithMediaId:(id)arg1 preloadFinishTime:(unsigned long long)arg2 sceneKey:(id)arg3;
- (void)setFirstVideoWithMediaId:(id)arg1 startPlayTime:(unsigned long long)arg2 sceneKey:(id)arg3;
- (void)setPullStatus:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setLoadingStartTime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setLoadingEndTime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (id)getStoredMediaIdWithSceneKey:(id)arg1;
- (id /* block */)reportBlock;
- (id)infoBuffer;
- (id)reportCenter;
- (void)setReportCenter:(id)arg1;
- (void)setReportBlock:(id /* block */)arg1;
- (void)setInfoBuffer:(id)arg1;
- (void).cxx_destruct;
@end

