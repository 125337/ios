@interface MMWebPrefetchDocumentInfo : MMObject
{
    unsigned int _status; // +0x8
    unsigned int _maxCacheTime; // +0xc
    unsigned int _clientCacheTime; // +0x10
    unsigned int _lastModifyTime; // +0x14
    unsigned int _prefetchResOption; // +0x18
    unsigned int _bizScene; // +0x1c
    unsigned int _subBizScene; // +0x20
    NSString * _htmlString; // +0x28
    NSDictionary * _respHeader; // +0x30
    unsigned long long _version; // +0x38
}
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (id)htmlString;
- (void)setHtmlString:(id)arg1;
- (id)respHeader;
- (void)setRespHeader:(id)arg1;
- (unsigned int)maxCacheTime;
- (void)setMaxCacheTime:(unsigned int)arg1;
- (unsigned int)clientCacheTime;
- (void)setClientCacheTime:(unsigned int)arg1;
- (unsigned int)lastModifyTime;
- (void)setLastModifyTime:(unsigned int)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned int)prefetchResOption;
- (void)setPrefetchResOption:(unsigned int)arg1;
- (unsigned int)bizScene;
- (void)setBizScene:(unsigned int)arg1;
- (unsigned int)subBizScene;
- (void)setSubBizScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

