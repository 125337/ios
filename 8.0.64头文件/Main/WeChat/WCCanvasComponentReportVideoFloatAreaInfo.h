@interface WCCanvasComponentReportVideoFloatAreaInfo : MMObject
{
    unsigned int _exposureCount; // +0x8
    unsigned int _clickCount; // +0xc
    WCCanvasComponentReportVideoFloatAreaButtonInfo * _buttonInfo; // +0x10
    unsigned long long _stayTime; // +0x18
}
- (id)init;
- (id)dictionaryRepresentation;
- (id)buttonInfo;
- (void)setButtonInfo:(id)arg1;
- (unsigned int)exposureCount;
- (void)setExposureCount:(unsigned int)arg1;
- (unsigned long long)stayTime;
- (void)setStayTime:(unsigned long long)arg1;
- (unsigned int)clickCount;
- (void)setClickCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
