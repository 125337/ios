@interface WxaLiteAppWidgetGenLiteAppUuidMessage : NSObject
{
    NSString * _appId; // +0x8
    NSString * _page; // +0x10
    NSString * _path; // +0x18
}
+ (id)makeWithAppId:(id)arg1 page:(id)arg2 path:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end
