@interface MMFinderLiveWebPageSheetCacheInfo : NSObject
{
    unsigned int _cacheTsSec; // +0x8
    MMPageSheetAdapter * _adpater; // +0x10
    MMFinderLiveWebPageSheetParams * _params; // +0x18
}
- (id)initWithPageSheet:(id)arg1 cacheTsSec:(unsigned int)arg2 params:(id)arg3;
- (id)adpater;
- (void)setAdpater:(id)arg1;
- (unsigned int)cacheTsSec;
- (void)setCacheTsSec:(unsigned int)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
