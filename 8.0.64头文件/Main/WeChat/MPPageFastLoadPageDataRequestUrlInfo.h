@interface MPPageFastLoadPageDataRequestUrlInfo : NSObject
{
    BOOL _isOfflineCache; // +0x8
    unsigned int _templateType; // +0xc
    unsigned int _scene; // +0x10
    unsigned int _enterType; // +0x14
    unsigned int _lastModifyTime; // +0x18
    NSString * _url; // +0x20
    NSString * _identity; // +0x28
    NSString * _sourceUserName; // +0x30
}
+ (id)generateRequestUrlInfoWithForwardUrl:(id)arg1 scene:(unsigned int)arg2 enterType:(unsigned int)arg3 sourceUserName:(id)arg4;
+ (id)generateRequestUrlInfoIfSupport:(BOOL)arg1 itemShowType:(unsigned int)arg2 url:(id)arg3 scene:(unsigned int)arg4 enterType:(unsigned int)arg5 sourceUserName:(id)arg6;
+ (id)generateRequestUrlInfoIfSupport:(BOOL)arg1 itemShowType:(unsigned int)arg2 url:(id)arg3 scene:(unsigned int)arg4 enterType:(unsigned int)arg5 isOfflineCache:(BOOL)arg6 sourceUserName:(id)arg7;
- (void)setUrl:(id)arg1;
- (void)setIsOfflineCache:(BOOL)arg1;
- (id)description;
- (id)url;
- (id)identity;
- (unsigned int)templateType;
- (void)setTemplateType:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)enterType;
- (void)setEnterType:(unsigned int)arg1;
- (BOOL)isOfflineCache;
- (id)sourceUserName;
- (void)setSourceUserName:(id)arg1;
- (unsigned int)lastModifyTime;
- (void)setLastModifyTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
