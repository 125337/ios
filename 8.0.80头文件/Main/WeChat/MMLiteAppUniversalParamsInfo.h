@interface MMLiteAppUniversalParamsInfo : NSObject
{
    NSMutableDictionary * _query; // +0x8
    NSDictionary * _extra; // +0x10
    NSString * _appId; // +0x18
    NSString * _path; // +0x20
}
- (id)initWithUniversalUrl:(id)arg1;
- (void)parseUniversalUrl:(id)arg1;
- (BOOL)isValid;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)extra;
- (void)setExtra:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end
