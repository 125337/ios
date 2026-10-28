@interface MMResDownloadInfo : MMObject <WCTTableCoding>
{
    unsigned int resType; // +0x8
    unsigned int networkType; // +0xc
    unsigned int scene; // +0x10
    unsigned int expiredTime; // +0x14
    unsigned int subType; // +0x18
    unsigned int retryTime; // +0x1c
    unsigned int reportId; // +0x20
    unsigned int eid; // +0x24
    NSString * appId; // +0x28
    NSString * domain; // +0x30
    NSString * baseDir; // +0x38
    NSString * sampleId; // +0x40
    NSString * packageId; // +0x48
    MMResDownloadUrlInfo * resUrlInfo; // +0x50
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)resType;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (id)swift_resType;
+ (const void *)networkType;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (id)swift_networkType;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (id)swift_scene;
+ (const void *)expiredTime;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (id)swift_expiredTime;
+ (const void *)subType;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (id)swift_subType;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (id)swift_appId;
+ (const void *)domain;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (id)swift_domain;
+ (const void *)baseDir;
+ (const void *)__wcdb_synthesize_38:(void *)arg1;
+ (id)swift_baseDir;
+ (const void *)retryTime;
+ (const void *)__wcdb_synthesize_39:(void *)arg1;
+ (id)swift_retryTime;
+ (const void *)reportId;
+ (const void *)__wcdb_synthesize_40:(void *)arg1;
+ (id)swift_reportId;
+ (const void *)sampleId;
+ (const void *)__wcdb_synthesize_41:(void *)arg1;
+ (id)swift_sampleId;
+ (const void *)packageId;
+ (const void *)__wcdb_synthesize_42:(void *)arg1;
+ (id)swift_packageId;
+ (const void *)resUrlInfo;
+ (const void *)__wcdb_synthesize_43:(void *)arg1;
+ (id)swift_resUrlInfo;
+ (const void *)eid;
+ (const void *)__wcdb_synthesize_44:(void *)arg1;
+ (id)swift_eid;
- (id)resourceDirectory;
- (id)resourceFilePath;
- (unsigned int)resType;
- (void)setResType:(unsigned int)arg1;
- (unsigned int)networkType;
- (void)setNetworkType:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)expiredTime;
- (void)setExpiredTime:(unsigned int)arg1;
- (unsigned int)subType;
- (void)setSubType:(unsigned int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)domain;
- (void)setDomain:(id)arg1;
- (id)baseDir;
- (void)setBaseDir:(id)arg1;
- (unsigned int)retryTime;
- (void)setRetryTime:(unsigned int)arg1;
- (unsigned int)reportId;
- (void)setReportId:(unsigned int)arg1;
- (id)sampleId;
- (void)setSampleId:(id)arg1;
- (id)packageId;
- (void)setPackageId:(id)arg1;
- (id)resUrlInfo;
- (void)setResUrlInfo:(id)arg1;
- (unsigned int)eid;
- (void)setEid:(unsigned int)arg1;
- (void).cxx_destruct;
@end
