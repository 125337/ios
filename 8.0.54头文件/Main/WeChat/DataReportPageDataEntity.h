@interface DataReportPageDataEntity : NSObject
{
    BOOL _isFullSubPage; // +0x8
    unsigned long long _pageId; // +0x10
    unsigned long long _bizGroupId; // +0x18
    NSString * _pageName; // +0x20
    NSMutableDictionary * _pageParams; // +0x28
    NSMutableDictionary * _pageEventParams; // +0x30
    NSMutableDictionary * _refPageParams; // +0x38
    NSMutableDictionary * _sourcePageParams; // +0x40
    NSMutableDictionary * _innerProperty; // +0x48
    NSMutableDictionary * _reportPolicy; // +0x50
    long long _pageStep; // +0x58
    unsigned long long _pageInTime; // +0x60
    unsigned long long _sessionInTime; // +0x68
    NSMutableDictionary * _dynamicParamsBlocks; // +0x70
    NSMutableDictionary * _reportIntervals; // +0x78
    NSMutableDictionary * _lastReportTimes; // +0x80
    id _relatedModel; // +0x88
    NSString * _sourceViewId; // +0x90
    NSMutableDictionary * _bizOutDynamicParamsCache; // +0x98
    NSMutableDictionary * _sessionOutDynamicParamsCache; // +0xa0
    NSMutableDictionary * _pageOutDynamicParamsCache; // +0xa8
}
- (id)init;
- (void)reset;
- (id)toString;
- (unsigned long long)pageId;
- (void)setPageId:(unsigned long long)arg1;
- (unsigned long long)bizGroupId;
- (void)setBizGroupId:(unsigned long long)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)pageParams;
- (void)setPageParams:(id)arg1;
- (id)pageEventParams;
- (void)setPageEventParams:(id)arg1;
- (id)refPageParams;
- (void)setRefPageParams:(id)arg1;
- (id)sourcePageParams;
- (void)setSourcePageParams:(id)arg1;
- (id)innerProperty;
- (void)setInnerProperty:(id)arg1;
- (id)reportPolicy;
- (void)setReportPolicy:(id)arg1;
- (long long)pageStep;
- (void)setPageStep:(long long)arg1;
- (unsigned long long)pageInTime;
- (void)setPageInTime:(unsigned long long)arg1;
- (unsigned long long)sessionInTime;
- (void)setSessionInTime:(unsigned long long)arg1;
- (id)dynamicParamsBlocks;
- (void)setDynamicParamsBlocks:(id)arg1;
- (id)reportIntervals;
- (void)setReportIntervals:(id)arg1;
- (id)lastReportTimes;
- (void)setLastReportTimes:(id)arg1;
- (id)relatedModel;
- (void)setRelatedModel:(id)arg1;
- (id)sourceViewId;
- (void)setSourceViewId:(id)arg1;
- (BOOL)isFullSubPage;
- (void)setIsFullSubPage:(BOOL)arg1;
- (id)bizOutDynamicParamsCache;
- (void)setBizOutDynamicParamsCache:(id)arg1;
- (id)sessionOutDynamicParamsCache;
- (void)setSessionOutDynamicParamsCache:(id)arg1;
- (id)pageOutDynamicParamsCache;
- (void)setPageOutDynamicParamsCache:(id)arg1;
- (void).cxx_destruct;
@end

