@interface AppPatMessageRefreshContext : NSObject
{
    BOOL _useLightStyle; // +0x8
    BOOL _useLink; // +0x9
    BOOL _needCleanRefresh; // +0xa
    double _width; // +0x10
    NSMutableDictionary * _contentIdToTimeOffset; // +0x18
}
- (id)init;
- (void)updateNeedCleanRefreshWithContext:(id)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (BOOL)useLightStyle;
- (void)setUseLightStyle:(BOOL)arg1;
- (BOOL)useLink;
- (void)setUseLink:(BOOL)arg1;
- (BOOL)needCleanRefresh;
- (void)setNeedCleanRefresh:(BOOL)arg1;
- (id)contentIdToTimeOffset;
- (void)setContentIdToTimeOffset:(id)arg1;
- (void).cxx_destruct;
@end
