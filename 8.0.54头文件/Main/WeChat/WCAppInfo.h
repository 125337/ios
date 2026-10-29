@interface WCAppInfo : NSObject <NSCoding, PBCoding>
{
    BOOL _isForceUpdate; // +0x8
    BOOL _clickable; // +0x9
    BOOL _isNewMusicStyle; // +0xa
    BOOL _isHidden; // +0xb
    NSString * _appID; // +0x10
    NSString * _appName; // +0x18
    NSString * _version; // +0x20
    NSString * _installUrl; // +0x28
    NSString * _fromUrl; // +0x30
}
+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_appName;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_installUrl;
+ (void)PBArrayAdd_fromUrl;
+ (void)PBArrayAdd_isForceUpdate;
+ (void)PBArrayAdd_clickable;
+ (void)PBArrayAdd_isNewMusicStyle;
+ (void)PBArrayAdd_isHidden;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)installUrl;
- (void)setInstallUrl:(id)arg1;
- (id)fromUrl;
- (void)setFromUrl:(id)arg1;
- (BOOL)isForceUpdate;
- (void)setIsForceUpdate:(BOOL)arg1;
- (BOOL)clickable;
- (void)setClickable:(BOOL)arg1;
- (BOOL)isNewMusicStyle;
- (void)setIsNewMusicStyle:(BOOL)arg1;
- (BOOL)isHidden;
- (void)setIsHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end

