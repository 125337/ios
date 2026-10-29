@interface MMFinderLiveReplayWatchHistoryRecord : NSObject
{
    unsigned int _lastExitTime; // +0x8
    unsigned long long _liveId; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)liveId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_liveId;
+ (const void *)lastExitTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_lastExitTime;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned int)lastExitTime;
- (void)setLastExitTime:(unsigned int)arg1;
@end
