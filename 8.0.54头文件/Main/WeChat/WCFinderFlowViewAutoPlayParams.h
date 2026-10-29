@interface WCFinderFlowViewAutoPlayParams : NSObject
{
    id /* block */ _visibleRectProvider; // +0x8
    id /* block */ _playableCellsFilterBlock; // +0x10
    id /* block */ _preventChangePlayableBlock; // +0x18
    unsigned long long _maxPlayCount; // +0x20
}
+ (id /* block */)defaultAutoPlayVisibleRectProvider;
+ (id)defaultParams;
+ (id)paramsForFollowFlowScene;
- (id /* block */)visibleRectProvider;
- (void)setVisibleRectProvider:(id /* block */)arg1;
- (id /* block */)playableCellsFilterBlock;
- (void)setPlayableCellsFilterBlock:(id /* block */)arg1;
- (id /* block */)preventChangePlayableBlock;
- (void)setPreventChangePlayableBlock:(id /* block */)arg1;
- (unsigned long long)maxPlayCount;
- (void)setMaxPlayCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

