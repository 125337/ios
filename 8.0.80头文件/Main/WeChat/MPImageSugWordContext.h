@interface MPImageSugWordContext : MMObject
{
    unsigned int _scene; // +0x8
    unsigned int _itemShowType; // +0xc
    NSString * _url; // +0x10
    NSString * _sessionId; // +0x18
}
+ (id)contextFromWebViewController:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
