@interface MMFinderLiveReplayStopgapPreloadRecord : NSObject
{
    BOOL _completed; // +0x8
    unsigned int _qualityLevel; // +0xc
    unsigned long long _liveId; // +0x10
    unsigned long long _stopgapId; // +0x18
    NSString * _qualityTag; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)liveId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_liveId;
+ (const void *)stopgapId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_stopgapId;
+ (const void *)qualityLevel;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_qualityLevel;
+ (const void *)qualityTag;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_qualityTag;
+ (const void *)completed;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_completed;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
- (id)stopgapKey;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)stopgapId;
- (void)setStopgapId:(unsigned long long)arg1;
- (unsigned int)qualityLevel;
- (void)setQualityLevel:(unsigned int)arg1;
- (id)qualityTag;
- (void)setQualityTag:(id)arg1;
- (BOOL)completed;
- (void)setCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end
