@interface KvReportItem20780 : KvReportBaseItem
{
    unsigned int _WxaVersion_22; // +0x8
    unsigned int _PkgVersion_23; // +0xc
    unsigned int _DownloadStatus_24; // +0x10
    NSString * _AppId_21; // +0x18
}
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportNSStringPreprocessType;
- (id)AppId_21;
- (void)setAppId_21:(id)arg1;
- (unsigned int)WxaVersion_22;
- (void)setWxaVersion_22:(unsigned int)arg1;
- (unsigned int)PkgVersion_23;
- (void)setPkgVersion_23:(unsigned int)arg1;
- (unsigned int)DownloadStatus_24;
- (void)setDownloadStatus_24:(unsigned int)arg1;
- (void).cxx_destruct;
@end
