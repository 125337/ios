@interface WAAppExtJSModel : MMObject
{
    unsigned int _downloadCostTimeInMs; // +0x8
    unsigned long long _target; // +0x10
    unsigned long long _timing; // +0x18
    NSString * _jsContent; // +0x20
}
- (unsigned long long)target;
- (void)setTarget:(unsigned long long)arg1;
- (unsigned long long)timing;
- (void)setTiming:(unsigned long long)arg1;
- (unsigned int)downloadCostTimeInMs;
- (void)setDownloadCostTimeInMs:(unsigned int)arg1;
- (id)jsContent;
- (void)setJsContent:(id)arg1;
- (void).cxx_destruct;
@end

