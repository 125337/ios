@interface WCSnsPreLoadInfo : MMObject <PBCoding>
{
    BOOL _sightAutoDownloadOn3GPlus; // +0x8
    BOOL _sightAutoDownloadOnWifi; // +0x9
    NSString * _layerId; // +0x10
    NSString * _expId; // +0x18
}
+ (void)PBArrayAdd_layerId;
+ (void)PBArrayAdd_expId;
+ (void)PBArrayAdd_sightAutoDownloadOn3GPlus;
+ (void)PBArrayAdd_sightAutoDownloadOnWifi;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (BOOL)parsePreLoadInfo:(id)arg1;
- (id)layerId;
- (void)setLayerId:(id)arg1;
- (id)expId;
- (void)setExpId:(id)arg1;
- (BOOL)sightAutoDownloadOn3GPlus;
- (void)setSightAutoDownloadOn3GPlus:(BOOL)arg1;
- (BOOL)sightAutoDownloadOnWifi;
- (void)setSightAutoDownloadOnWifi:(BOOL)arg1;
- (void).cxx_destruct;
@end
