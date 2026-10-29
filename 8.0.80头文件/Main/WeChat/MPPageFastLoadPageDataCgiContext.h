@interface MPPageFastLoadPageDataCgiContext : NSObject
{
    BOOL _isResponseSuccess; // +0x8
    unsigned int _enterType; // +0xc
    unsigned int _responseContentUpdateCount; // +0x10
    unsigned int _responseContentNoUpdateCount; // +0x14
    unsigned int _responseContentSize; // +0x18
    unsigned long long _sceneForFetch; // +0x20
    NSArray * _urlInfoList; // +0x28
    unsigned long long _startTime; // +0x30
    unsigned long long _endTime; // +0x38
}
- (unsigned int)enterType;
- (void)setEnterType:(unsigned int)arg1;
- (unsigned long long)sceneForFetch;
- (void)setSceneForFetch:(unsigned long long)arg1;
- (id)urlInfoList;
- (void)setUrlInfoList:(id)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (BOOL)isResponseSuccess;
- (void)setIsResponseSuccess:(BOOL)arg1;
- (unsigned int)responseContentUpdateCount;
- (void)setResponseContentUpdateCount:(unsigned int)arg1;
- (unsigned int)responseContentNoUpdateCount;
- (void)setResponseContentNoUpdateCount:(unsigned int)arg1;
- (unsigned int)responseContentSize;
- (void)setResponseContentSize:(unsigned int)arg1;
- (void).cxx_destruct;
@end
