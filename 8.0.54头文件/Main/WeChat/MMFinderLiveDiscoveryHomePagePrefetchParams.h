@interface MMFinderLiveDiscoveryHomePagePrefetchParams : NSObject
{
    BOOL _isHomePageVCCached; // +0x8
    unsigned long long _prefetchType; // +0x10
    WCFinderRedDotCtrlInfo * _redDotCtrlInfo; // +0x18
    FinderRedDotExtInfo * _redDotExtInfo; // +0x20
}
- (unsigned long long)prefetchType;
- (void)setPrefetchType:(unsigned long long)arg1;
- (BOOL)isHomePageVCCached;
- (void)setIsHomePageVCCached:(BOOL)arg1;
- (id)redDotCtrlInfo;
- (void)setRedDotCtrlInfo:(id)arg1;
- (id)redDotExtInfo;
- (void)setRedDotExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

