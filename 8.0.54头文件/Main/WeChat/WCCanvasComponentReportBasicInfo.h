@interface WCCanvasComponentReportBasicInfo : MMObject
{
    unsigned int _exposureCount; // +0x8
    NSString * _cid; // +0x10
    unsigned long long _stayTime; // +0x18
}
- (id)initWithCid:(id)arg1;
- (id)dictionaryRepresentation;
- (id)cid;
- (void)setCid:(id)arg1;
- (unsigned int)exposureCount;
- (void)setExposureCount:(unsigned int)arg1;
- (unsigned long long)stayTime;
- (void)setStayTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

