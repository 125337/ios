@interface EcsFinderLiveInfo : NSObject
{
    NSString * _finderExportId; // +0x8
    NSNumber * _liveStatus; // +0x10
    NSString * _liveDesc; // +0x18
}
+ (id)makeWithFinderExportId:(id)arg1 liveStatus:(id)arg2 liveDesc:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)finderExportId;
- (void)setFinderExportId:(id)arg1;
- (id)liveStatus;
- (void)setLiveStatus:(id)arg1;
- (id)liveDesc;
- (void)setLiveDesc:(id)arg1;
- (void).cxx_destruct;
@end
