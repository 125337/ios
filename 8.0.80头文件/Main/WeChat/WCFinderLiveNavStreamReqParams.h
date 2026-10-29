@interface WCFinderLiveNavStreamReqParams : NSObject
{
    BOOL _isPreRecommendRequest; // +0x8
    BOOL _parallelCgiWithLite; // +0x9
    int _fromScene; // +0xc
    int _commentScene; // +0x10
    float _predictScore; // +0x14
    unsigned int _nextPagePullType; // +0x18
    NSData * _lastBuffer; // +0x20
    unsigned long long _pullType; // +0x28
    NSMutableArray * _markUnreadList; // +0x30
    NSString * _fromSceneStr; // +0x38
    NSString * _byPass; // +0x40
    unsigned long long _containerId; // +0x48
    unsigned long long _relatedObjectId; // +0x50
    NSMutableArray * _containerContext; // +0x58
    WCFinderRedDotCtrlInfo * _redDotCtrlInfo; // +0x60
    WCFinderLiveTabInfo * _liveTabInfo; // +0x68
    unsigned long long _cacheDurationInSeconds; // +0x70
    FinderLiveDiscoverPreloadConfig * _preloadConfig; // +0x78
    NSData * _jumpNavliveBuffer; // +0x80
    unsigned long long _homePageScene; // +0x88
    NSData * _prefetchObjectsBuffer; // +0x90
    ClientSpecificConfig * _clientSpecConfig; // +0x98
    EndNavBuffer * _endNavBuffer; // +0xa0
}
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned long long)pullType;
- (void)setPullType:(unsigned long long)arg1;
- (id)markUnreadList;
- (void)setMarkUnreadList:(id)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (id)fromSceneStr;
- (void)setFromSceneStr:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)byPass;
- (void)setByPass:(id)arg1;
- (unsigned long long)containerId;
- (void)setContainerId:(unsigned long long)arg1;
- (unsigned long long)relatedObjectId;
- (void)setRelatedObjectId:(unsigned long long)arg1;
- (id)containerContext;
- (void)setContainerContext:(id)arg1;
- (id)redDotCtrlInfo;
- (void)setRedDotCtrlInfo:(id)arg1;
- (id)liveTabInfo;
- (void)setLiveTabInfo:(id)arg1;
- (unsigned long long)cacheDurationInSeconds;
- (void)setCacheDurationInSeconds:(unsigned long long)arg1;
- (BOOL)isPreRecommendRequest;
- (void)setIsPreRecommendRequest:(BOOL)arg1;
- (float)predictScore;
- (void)setPredictScore:(float)arg1;
- (id)preloadConfig;
- (void)setPreloadConfig:(id)arg1;
- (BOOL)parallelCgiWithLite;
- (void)setParallelCgiWithLite:(BOOL)arg1;
- (id)jumpNavliveBuffer;
- (void)setJumpNavliveBuffer:(id)arg1;
- (unsigned long long)homePageScene;
- (void)setHomePageScene:(unsigned long long)arg1;
- (id)prefetchObjectsBuffer;
- (void)setPrefetchObjectsBuffer:(id)arg1;
- (id)clientSpecConfig;
- (void)setClientSpecConfig:(id)arg1;
- (unsigned int)nextPagePullType;
- (void)setNextPagePullType:(unsigned int)arg1;
- (id)endNavBuffer;
- (void)setEndNavBuffer:(id)arg1;
- (void).cxx_destruct;
@end
