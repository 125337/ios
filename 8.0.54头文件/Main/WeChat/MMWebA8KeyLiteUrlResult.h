@interface MMWebA8KeyLiteUrlResult : MMObject
{
    unsigned int _scene; // +0x8
    long long _subBizScene; // +0x10
    MMWebOptimizationAuthLiteControlData * _authControlData; // +0x18
    NSDictionary * _httpHeader; // +0x20
    NSString * _extInfo; // +0x28
    NSString * _prefetchId; // +0x30
}
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (long long)subBizScene;
- (void)setSubBizScene:(long long)arg1;
- (id)authControlData;
- (void)setAuthControlData:(id)arg1;
- (id)httpHeader;
- (void)setHttpHeader:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)prefetchId;
- (void)setPrefetchId:(id)arg1;
- (void).cxx_destruct;
@end

