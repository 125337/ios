@interface MPPageDownloadedTemplateRecord : NSObject <PBCoding>
{
    unsigned int _version; // +0x8
    unsigned int _downloadSize; // +0xc
    NSString * _md5; // +0x10
    NSString * _url; // +0x18
    NSString * _fullVersion; // +0x20
    NSMutableDictionary * _httpHeaderMap; // +0x28
    NSString * _versionGroup; // +0x30
    unsigned long long _startTime; // +0x38
    unsigned long long _endTime; // +0x40
}
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_fullVersion;
+ (void)PBArrayAdd_httpHeaderMap;
+ (void)PBArrayAdd_versionGroup;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)fullVersion;
- (void)setFullVersion:(id)arg1;
- (id)httpHeaderMap;
- (void)setHttpHeaderMap:(id)arg1;
- (id)versionGroup;
- (void)setVersionGroup:(id)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (unsigned int)downloadSize;
- (void)setDownloadSize:(unsigned int)arg1;
- (void).cxx_destruct;
@end
