@interface MPPageTemplateInfo : NSObject <PBCoding>
{
    unsigned int _latestVersion; // +0x8
    unsigned int _minValidVersion; // +0xc
    unsigned int _latestDownloadedVersion; // +0x10
    unsigned int _templateType; // +0x14
    unsigned int _reportId; // +0x18
    NSMutableArray * _downloadedRecordList; // +0x20
    NSString * _latestFullVersion; // +0x28
}
+ (void)PBArrayAdd_latestVersion;
+ (void)PBArrayAdd_minValidVersion;
+ (void)PBArrayAdd_latestDownloadedVersion;
+ (void)PBArrayAdd_downloadedRecordList;
+ (void)PBArrayAdd_templateType;
+ (void)PBArrayAdd_reportId;
+ (void)PBArrayAdd_latestFullVersion;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)latestDownloadedFullVersion;
- (id)latestDownloadedVersionGroup;
- (id)downloadedRecordWithVersion:(unsigned int)arg1;
- (void)removeDownloadedRecordWithVersion:(unsigned int)arg1;
- (void)removeDownloadedRecordWhichIsNotVersion:(unsigned int)arg1 getHasDelete:(BOOL *)arg2;
- (void)removeDownloadedRecordWithFullVersion:(id)arg1 getHasDelete:(BOOL *)arg2;
- (void)removeDownloadedRecordWhichIsDeprecatedAndGetHasDelete:(BOOL *)arg1;
- (unsigned int)latestVersion;
- (void)setLatestVersion:(unsigned int)arg1;
- (unsigned int)minValidVersion;
- (void)setMinValidVersion:(unsigned int)arg1;
- (unsigned int)latestDownloadedVersion;
- (void)setLatestDownloadedVersion:(unsigned int)arg1;
- (id)downloadedRecordList;
- (void)setDownloadedRecordList:(id)arg1;
- (unsigned int)templateType;
- (void)setTemplateType:(unsigned int)arg1;
- (unsigned int)reportId;
- (void)setReportId:(unsigned int)arg1;
- (id)latestFullVersion;
- (void)setLatestFullVersion:(id)arg1;
- (void).cxx_destruct;
@end
