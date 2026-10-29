@interface WCLiteAppInfo : NSObject <NSCoding, PBCoding>
{
    BOOL _isTransparent; // +0x8
    BOOL _hideIcon; // +0x9
    NSString * _appId; // +0x10
    NSString * _path; // +0x18
    NSString * _query; // +0x20
}
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_query;
+ (void)PBArrayAdd_isTransparent;
+ (void)PBArrayAdd_hideIcon;
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
- (BOOL)isTransparent;
- (void)setIsTransparent:(BOOL)arg1;
- (BOOL)hideIcon;
- (void)setHideIcon:(BOOL)arg1;
- (void).cxx_destruct;
@end
