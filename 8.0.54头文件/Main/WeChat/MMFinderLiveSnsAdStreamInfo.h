@interface MMFinderLiveSnsAdStreamInfo : NSObject <WCTTableCoding>
{
    BOOL _previewCtrlInfoEnable; // +0x8
    unsigned int _previewCtrlInfoEffectSeconds; // +0xc
    unsigned int _refreshIntervalInSecond; // +0x10
    NSString * _liveId; // +0x18
    NSString * _finderUsername; // +0x20
    NSString * _exportId; // +0x28
    NSString * _nonceId; // +0x30
    unsigned long long _cacheTimestamp; // +0x38
    WCFinderLiveInfo * _liveInfo; // +0x40
    NSString * _tid; // +0x48
    NSString * _sessionBuffer; // +0x50
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)liveId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_liveId;
+ (const void *)finderUsername;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_finderUsername;
+ (const void *)exportId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_exportId;
+ (const void *)nonceId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_nonceId;
+ (const void *)cacheTimestamp;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_cacheTimestamp;
+ (const void *)liveInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_liveInfo;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_tid;
+ (const void *)sessionBuffer;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_sessionBuffer;
+ (const void *)previewCtrlInfoEnable;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_previewCtrlInfoEnable;
+ (const void *)previewCtrlInfoEffectSeconds;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_previewCtrlInfoEffectSeconds;
+ (const void *)refreshIntervalInSecond;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_refreshIntervalInSecond;
+ (void)__wcdb_table_constraint_11:(void *)arg1;
+ (void)__wcdb_table_constraint_12:(void *)arg1;
+ (void)__wcdb_index_13:(void *)arg1;
+ (void)__wcdb_index_14:(void *)arg1;
- (id)toDataItem;
- (id)liveId;
- (void)setLiveId:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)exportId;
- (void)setExportId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (unsigned long long)cacheTimestamp;
- (void)setCacheTimestamp:(unsigned long long)arg1;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (BOOL)previewCtrlInfoEnable;
- (void)setPreviewCtrlInfoEnable:(BOOL)arg1;
- (unsigned int)previewCtrlInfoEffectSeconds;
- (void)setPreviewCtrlInfoEffectSeconds:(unsigned int)arg1;
- (unsigned int)refreshIntervalInSecond;
- (void)setRefreshIntervalInSecond:(unsigned int)arg1;
- (void).cxx_destruct;
@end

