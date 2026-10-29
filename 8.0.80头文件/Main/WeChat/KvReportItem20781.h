@interface KvReportItem20781 : KvReportBaseItem
{
    unsigned int _WxaVersion_22; // +0x8
    unsigned int _PkgVersion_23; // +0xc
    unsigned int _PkgType_24; // +0x10
    NSString * _AppId_21; // +0x18
    NSString * _ErrMsg_25; // +0x20
}
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportNSStringPreprocessType;
- (id)AppId_21;
- (void)setAppId_21:(id)arg1;
- (unsigned int)WxaVersion_22;
- (void)setWxaVersion_22:(unsigned int)arg1;
- (unsigned int)PkgVersion_23;
- (void)setPkgVersion_23:(unsigned int)arg1;
- (unsigned int)PkgType_24;
- (void)setPkgType_24:(unsigned int)arg1;
- (id)ErrMsg_25;
- (void)setErrMsg_25:(id)arg1;
- (void).cxx_destruct;
@end
