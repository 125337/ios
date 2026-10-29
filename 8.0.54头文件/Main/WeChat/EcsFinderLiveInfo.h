@interface EcsFinderLiveInfo : NSObject
{
    NSString * _finderExportId; // +0x8
    NSNumber * _liveStatus; // +0x10
}
+ (id)makeWithFinderExportId:(id)arg1 liveStatus:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)finderExportId;
- (void)setFinderExportId:(id)arg1;
- (id)liveStatus;
- (void)setLiveStatus:(id)arg1;
- (void).cxx_destruct;
@end

