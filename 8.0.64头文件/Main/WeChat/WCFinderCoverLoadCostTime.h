@interface WCFinderCoverLoadCostTime : NSObject
{
    BOOL _needRecord; // +0x8
    double _beginTime; // +0x10
    NSMutableSet * _firstScreenFeeds; // +0x18
    NSMutableDictionary * _resourceCostInfo; // +0x20
}
- (id)init;
- (void)recordFirstScreenFeed:(id)arg1;
- (void)recordFirstScreenFeedCoverRender:(id)arg1 beginTime:(double)arg2 costTime:(unsigned long long)arg3;
- (double)allResourceFinishTimePoint;
- (id)createMediaLoadInfo;
- (double)beginTime;
- (void)setBeginTime:(double)arg1;
- (BOOL)needRecord;
- (void)setNeedRecord:(BOOL)arg1;
- (id)firstScreenFeeds;
- (void)setFirstScreenFeeds:(id)arg1;
- (id)resourceCostInfo;
- (void)setResourceCostInfo:(id)arg1;
- (void).cxx_destruct;
@end
