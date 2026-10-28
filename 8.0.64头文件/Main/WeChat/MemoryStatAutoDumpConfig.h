@interface MemoryStatAutoDumpConfig : NSObject <PBCoding>
{
    BOOL _enabled; // +0x8
    BOOL _uploadReport; // +0x9
    int _internal; // +0xc
    int _threshold; // +0x10
}
+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_internal;
+ (void)PBArrayAdd_threshold;
+ (void)PBArrayAdd_uploadReport;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)uploadReport;
- (void)setUploadReport:(BOOL)arg1;
- (int)internal;
- (void)setInternal:(int)arg1;
- (int)threshold;
- (void)setThreshold:(int)arg1;
@end
