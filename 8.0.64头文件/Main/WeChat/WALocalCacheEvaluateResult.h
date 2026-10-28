@interface WALocalCacheEvaluateResult : NSObject
{
    unsigned int _scriptLength; // +0x8
    unsigned int _ret; // +0xc
    unsigned int _costTimeInMs; // +0x10
    NSString * _fileName; // +0x18
    NSURL * _sourceUrl; // +0x20
    unsigned long long _startInjectTimeInMs; // +0x28
    unsigned long long _endInjectTimeInMs; // +0x30
    JSC2CodeCacheDetail * _codeCacheDetail; // +0x38
}
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (unsigned int)scriptLength;
- (void)setScriptLength:(unsigned int)arg1;
- (unsigned int)ret;
- (void)setRet:(unsigned int)arg1;
- (unsigned long long)startInjectTimeInMs;
- (void)setStartInjectTimeInMs:(unsigned long long)arg1;
- (unsigned long long)endInjectTimeInMs;
- (void)setEndInjectTimeInMs:(unsigned long long)arg1;
- (unsigned int)costTimeInMs;
- (void)setCostTimeInMs:(unsigned int)arg1;
- (id)codeCacheDetail;
- (void)setCodeCacheDetail:(id)arg1;
- (void).cxx_destruct;
@end
