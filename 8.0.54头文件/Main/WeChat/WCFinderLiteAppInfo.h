@interface WCFinderLiteAppInfo : NSObject <WCFinderLiteAppInfoProvider>
{
    NSString * _appID; // +0x8
    NSString * _path; // +0x10
    NSString * _query; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)genFinderLiteAppInfo;
- (id)convertToFinderJumpInfoLiteappInfo;
- (BOOL)isValid;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (void).cxx_destruct;
@end

