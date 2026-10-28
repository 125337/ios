@interface WCFinderVideoPreDownloadInfo : NSObject
{
    BOOL _isComplete; // +0x8
    BOOL _isMinBytesComplete; // +0x9
    BOOL _isIdleMonitorTask; // +0xa
    NSString * _tid; // +0x10
    unsigned long long _videoIndex; // +0x18
    NSString * _videoFlag; // +0x20
    NSString * _mediaIdentifier; // +0x28
    unsigned long long _preloadSize; // +0x30
    unsigned long long _videoTotalSize; // +0x38
    unsigned long long _cacheTime; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)videoIndex;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_videoIndex;
+ (const void *)videoFlag;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_videoFlag;
+ (const void *)preloadSize;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_preloadSize;
+ (const void *)videoTotalSize;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_videoTotalSize;
+ (const void *)isComplete;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_isComplete;
+ (const void *)isMinBytesComplete;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_isMinBytesComplete;
+ (const void *)isIdleMonitorTask;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_isIdleMonitorTask;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)mediaIdentifier;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_mediaIdentifier;
+ (void)__wcdb_table_constraint_10:(void *)arg1;
+ (void)__wcdb_table_constraint_11:(void *)arg1;
+ (void)__wcdb_index_12:(void *)arg1;
+ (void)__wcdb_index_13:(void *)arg1;
- (BOOL)isPreloadComplete;
- (void)setVideoFlag:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)videoIndex;
- (void)setVideoIndex:(unsigned long long)arg1;
- (id)videoFlag;
- (id)mediaIdentifier;
- (void)setMediaIdentifier:(id)arg1;
- (unsigned long long)preloadSize;
- (void)setPreloadSize:(unsigned long long)arg1;
- (unsigned long long)videoTotalSize;
- (void)setVideoTotalSize:(unsigned long long)arg1;
- (BOOL)isComplete;
- (void)setIsComplete:(BOOL)arg1;
- (BOOL)isMinBytesComplete;
- (void)setIsMinBytesComplete:(BOOL)arg1;
- (BOOL)isIdleMonitorTask;
- (void)setIsIdleMonitorTask:(BOOL)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
