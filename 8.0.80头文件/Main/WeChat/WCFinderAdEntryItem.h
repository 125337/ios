@interface WCFinderAdEntryItem : NSObject <WCTColumnCoding, PBCoding>
{
    int _scene; // +0x8
    unsigned int _productType; // +0xc
    unsigned int _posType; // +0x10
    NSString * _tid; // +0x18
    unsigned long long _cacheTime; // +0x20
    NSString * _iconUrl; // +0x28
    NSString * _recommendReason; // +0x30
    NSString * _wording; // +0x38
    NSString * _url; // +0x40
    unsigned long long _destType; // +0x48
    NSString * _uxinfo; // +0x50
    NSString * _rl; // +0x58
    NSString * _apUrl; // +0x60
    NSString * _traceId; // +0x68
    NSString * _adPosId; // +0x70
    NSString * _aid; // +0x78
    NSString * _groupId; // +0x80
    unsigned long long _pt; // +0x88
    NSString * _reportExtraData; // +0x90
}
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_destType;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_recommendReason;
+ (void)PBArrayAdd_wording;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_uxinfo;
+ (void)PBArrayAdd_rl;
+ (void)PBArrayAdd_apUrl;
+ (void)PBArrayAdd_traceId;
+ (void)PBArrayAdd_adPosId;
+ (void)PBArrayAdd_productType;
+ (void)PBArrayAdd_aid;
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_posType;
+ (void)PBArrayAdd_pt;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_reportExtraData;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)destType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_destType;
+ (const void *)iconUrl;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_iconUrl;
+ (const void *)recommendReason;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_recommendReason;
+ (const void *)wording;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_wording;
+ (const void *)url;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_url;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)uxinfo;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_uxinfo;
+ (const void *)rl;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_rl;
+ (const void *)apUrl;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_apUrl;
+ (const void *)traceId;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_traceId;
+ (const void *)adPosId;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_adPosId;
+ (const void *)productType;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_productType;
+ (const void *)aid;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_aid;
+ (const void *)groupId;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_groupId;
+ (const void *)posType;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_posType;
+ (const void *)pt;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_pt;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_scene;
+ (const void *)reportExtraData;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_reportExtraData;
+ (void)__wcdb_column_constraint_19:(void *)arg1;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (BOOL)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned long long)destType;
- (void)setDestType:(unsigned long long)arg1;
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (id)rl;
- (void)setRl:(id)arg1;
- (id)apUrl;
- (void)setApUrl:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)adPosId;
- (void)setAdPosId:(id)arg1;
- (unsigned int)productType;
- (void)setProductType:(unsigned int)arg1;
- (id)aid;
- (void)setAid:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (unsigned int)posType;
- (void)setPosType:(unsigned int)arg1;
- (unsigned long long)pt;
- (void)setPt:(unsigned long long)arg1;
- (id)reportExtraData;
- (void)setReportExtraData:(id)arg1;
- (void).cxx_destruct;
@end
