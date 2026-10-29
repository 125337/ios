@interface MMResDecryptInfo : MMObject
{
    unsigned int _resType; // +0x8
    unsigned int _subResType; // +0xc
    unsigned int _eid; // +0x10
    unsigned int _scene; // +0x14
    unsigned int _reportId; // +0x18
    NSString * _sampleId; // +0x20
    MMResDecryptUrlInfo * _resDecryptInfo; // +0x28
}
- (unsigned int)resType;
- (void)setResType:(unsigned int)arg1;
- (unsigned int)subResType;
- (void)setSubResType:(unsigned int)arg1;
- (unsigned int)eid;
- (void)setEid:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)sampleId;
- (void)setSampleId:(id)arg1;
- (unsigned int)reportId;
- (void)setReportId:(unsigned int)arg1;
- (id)resDecryptInfo;
- (void)setResDecryptInfo:(id)arg1;
- (void).cxx_destruct;
@end
