@interface MMFinderLiveKTVCacheObj : NSObject
{
    BOOL _used; // +0x8
    UIView * _containerView; // +0x10
    MMFinderLiveKTVBox * _ktvBox; // +0x18
    NSString * _cacheKey; // +0x20
    id /* block */ _surviveTimeoutCallback; // +0x28
}
- (void)startSurvive;
- (void)timeoutForSurvive;
- (void)tagUsed;
- (id)description;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)ktvBox;
- (void)setKtvBox:(id)arg1;
- (id)cacheKey;
- (void)setCacheKey:(id)arg1;
- (id /* block */)surviveTimeoutCallback;
- (void)setSurviveTimeoutCallback:(id /* block */)arg1;
- (BOOL)used;
- (void)setUsed:(BOOL)arg1;
- (void).cxx_destruct;
@end
