@interface MMWebA8KeyLiteParams : MMObject
{
    BOOL _skipPrefetch; // +0x8
    BOOL _fromKara; // +0x9
    unsigned int _scene; // +0xc
    unsigned int _msgType; // +0x10
    unsigned int _appMsgInnerType; // +0x14
    NSString * _urlString; // +0x18
    NSString * _referUrl; // +0x20
    NSString * _appId; // +0x28
    NSString * _title; // +0x30
    NSString * _desc; // +0x38
    unsigned long long _readerIndex; // +0x40
    long long _subBizScene; // +0x48
    NSString * _extInfo; // +0x50
    NSString * _prefetcherId; // +0x58
}
- (id)urlString;
- (void)setUrlString:(id)arg1;
- (id)referUrl;
- (void)setReferUrl:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (unsigned long long)readerIndex;
- (void)setReaderIndex:(unsigned long long)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (long long)subBizScene;
- (void)setSubBizScene:(long long)arg1;
- (BOOL)skipPrefetch;
- (void)setSkipPrefetch:(BOOL)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (BOOL)fromKara;
- (void)setFromKara:(BOOL)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (unsigned int)appMsgInnerType;
- (void)setAppMsgInnerType:(unsigned int)arg1;
- (id)prefetcherId;
- (void)setPrefetcherId:(id)arg1;
- (void).cxx_destruct;
@end
