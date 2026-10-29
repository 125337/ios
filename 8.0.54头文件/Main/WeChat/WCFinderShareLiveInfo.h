@interface WCFinderShareLiveInfo : NSObject <WCTTableCoding>
{
    BOOL _disableShareCardExpose; // +0x8
    unsigned int _anchorLiveStatus; // +0xc
    unsigned int _sharePageStatus; // +0x10
    unsigned int _chargeFlag; // +0x14
    unsigned int _replayStatus; // +0x18
    unsigned int _liveFlag; // +0x1c
    unsigned int _audiencePrivilege; // +0x20
    unsigned int _liveMode; // +0x24
    unsigned int _liveSubMode; // +0x28
    NSString * _tid; // +0x30
    NSString * _liveId; // +0x38
    unsigned long long _liveStatus; // +0x40
    unsigned long long _cacheTimestamp; // +0x48
    unsigned long long _audienceMode; // +0x50
    NSString * _streamUrl; // +0x58
    unsigned long long _refReplayObjectId; // +0x60
    unsigned long long _replayControlFlag; // +0x68
    NSString * _exportId; // +0x70
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)liveId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_liveId;
+ (const void *)liveStatus;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_liveStatus;
+ (const void *)cacheTimestamp;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_cacheTimestamp;
+ (const void *)audienceMode;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_audienceMode;
+ (const void *)streamUrl;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_streamUrl;
+ (const void *)liveVrType;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_liveVrType;
+ (const void *)chargeFlag;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_chargeFlag;
+ (const void *)replayStatus;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_replayStatus;
+ (const void *)exportId;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_exportId;
+ (const void *)liveFlag;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_liveFlag;
+ (const void *)audiencePrivilege;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_audiencePrivilege;
+ (const void *)refReplayObjectId;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_refReplayObjectId;
+ (const void *)replayControlFlag;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_replayControlFlag;
+ (const void *)liveMode;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_liveMode;
+ (const void *)liveSubMode;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_liveSubMode;
+ (const void *)anchorLiveStatus;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_anchorLiveStatus;
+ (const void *)sharePageStatus;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_sharePageStatus;
+ (const void *)disableShareCardExpose;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_disableShareCardExpose;
+ (void)__wcdb_table_constraint_19:(void *)arg1;
+ (void)__wcdb_table_constraint_20:(void *)arg1;
+ (void)__wcdb_index_21:(void *)arg1;
- (id)initWithDataItem:(id)arg1;
- (void)updateWithDataItem:(id)arg1;
- (id)description;
- (void)setLiveVrType:(unsigned int)arg1;
- (unsigned int)liveVrType;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)liveId;
- (void)setLiveId:(id)arg1;
- (unsigned long long)liveStatus;
- (void)setLiveStatus:(unsigned long long)arg1;
- (unsigned int)anchorLiveStatus;
- (void)setAnchorLiveStatus:(unsigned int)arg1;
- (unsigned int)sharePageStatus;
- (void)setSharePageStatus:(unsigned int)arg1;
- (unsigned long long)cacheTimestamp;
- (void)setCacheTimestamp:(unsigned long long)arg1;
- (unsigned long long)audienceMode;
- (void)setAudienceMode:(unsigned long long)arg1;
- (id)streamUrl;
- (void)setStreamUrl:(id)arg1;
- (unsigned int)chargeFlag;
- (void)setChargeFlag:(unsigned int)arg1;
- (unsigned int)replayStatus;
- (void)setReplayStatus:(unsigned int)arg1;
- (unsigned long long)refReplayObjectId;
- (void)setRefReplayObjectId:(unsigned long long)arg1;
- (unsigned long long)replayControlFlag;
- (void)setReplayControlFlag:(unsigned long long)arg1;
- (unsigned int)liveFlag;
- (void)setLiveFlag:(unsigned int)arg1;
- (unsigned int)audiencePrivilege;
- (void)setAudiencePrivilege:(unsigned int)arg1;
- (id)exportId;
- (void)setExportId:(id)arg1;
- (unsigned int)liveMode;
- (void)setLiveMode:(unsigned int)arg1;
- (unsigned int)liveSubMode;
- (void)setLiveSubMode:(unsigned int)arg1;
- (BOOL)disableShareCardExpose;
- (void)setDisableShareCardExpose:(BOOL)arg1;
- (void).cxx_destruct;
@end

