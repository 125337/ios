@interface MMWebViewPreloadContentMPPageParam : NSObject
{
    BOOL _isOfflineCache; // +0x8
    unsigned int _templateType; // +0xc
    unsigned int _templateVersion; // +0x10
    unsigned int _templateReportId; // +0x14
    NSString * _pageFrameUrl; // +0x18
    NSString * _templateFullVersion; // +0x20
    NSString * _latestTemplateFullVersion; // +0x28
    NSString * _templateVersionGroup; // +0x30
}
- (id)description;
- (id)pageFrameUrl;
- (void)setPageFrameUrl:(id)arg1;
- (unsigned int)templateType;
- (void)setTemplateType:(unsigned int)arg1;
- (unsigned int)templateVersion;
- (void)setTemplateVersion:(unsigned int)arg1;
- (id)templateFullVersion;
- (void)setTemplateFullVersion:(id)arg1;
- (id)latestTemplateFullVersion;
- (void)setLatestTemplateFullVersion:(id)arg1;
- (unsigned int)templateReportId;
- (void)setTemplateReportId:(unsigned int)arg1;
- (id)templateVersionGroup;
- (void)setTemplateVersionGroup:(id)arg1;
- (BOOL)isOfflineCache;
- (void)setIsOfflineCache:(BOOL)arg1;
- (void).cxx_destruct;
@end

