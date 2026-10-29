@interface GCOpenReportParam : NSObject
{
    unsigned long long _outSsid; // +0x8
    unsigned long long _innerSourceId; // +0x10
    NSDictionary * _extInfoDic; // +0x18
}
- (unsigned long long)outSsid;
- (void)setOutSsid:(unsigned long long)arg1;
- (unsigned long long)innerSourceId;
- (void)setInnerSourceId:(unsigned long long)arg1;
- (id)extInfoDic;
- (void)setExtInfoDic:(id)arg1;
- (void).cxx_destruct;
@end

