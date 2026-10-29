@interface WCFinderLiteAppParams : NSObject
{
    NSString * _appId; // +0x8
    NSString * _page; // +0x10
    NSString * _query; // +0x18
    NSString * _defaultUrl; // +0x20
    NSString * _extInfo; // +0x28
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (BOOL)isValid;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)defaultUrl;
- (void)setDefaultUrl:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

