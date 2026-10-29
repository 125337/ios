@interface WCLiteAppInfo : NSObject <NSCoding, PBCoding>
{
    NSString * _appId; // +0x8
    NSString * _path; // +0x10
    NSString * _query; // +0x18
}
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_query;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (void).cxx_destruct;
@end

