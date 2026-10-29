@interface EmoticonSentMd5Stat : NSObject
{
    unsigned int _latestTime; // +0x8
    NSString * _md5; // +0x10
    unsigned long long _inWindowCount; // +0x18
    unsigned long long _totalCount; // +0x20
}
- (id)md5;
- (void)setMd5:(id)arg1;
- (unsigned long long)inWindowCount;
- (void)setInWindowCount:(unsigned long long)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (unsigned int)latestTime;
- (void)setLatestTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
