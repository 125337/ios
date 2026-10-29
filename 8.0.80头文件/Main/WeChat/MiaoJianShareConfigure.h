@interface MiaoJianShareConfigure : NSObject
{
    NSString * _appstoreUrl; // +0x8
    NSString * _scheme; // +0x10
    unsigned long long _scene; // +0x18
    MiaoJianShareParams * _shareParams; // +0x20
}
+ (BOOL)takePhotoEntranceEnable;
+ (BOOL)longVideoEntranceEnable;
+ (BOOL)isMiaoJianAppInstalled;
+ (BOOL)isMiaoJianAppId:(id)arg1;
+ (id)configureWithScene:(unsigned long long)arg1;
+ (id)configureWithScene:(unsigned long long)arg1 shareParams:(id)arg2;
- (id)initWithScene:(unsigned long long)arg1 shareParams:(id)arg2;
- (void)commentInit;
- (void)updateParams:(id)arg1;
- (id)description;
- (id)_generateUniversalLinkUrl;
- (id)_generateAppstoreUrl;
- (id)appstoreUrl;
- (void)setAppstoreUrl:(id)arg1;
- (id)scheme;
- (void)setScheme:(id)arg1;
- (unsigned long long)scene;
- (id)shareParams;
- (void)setShareParams:(id)arg1;
- (void).cxx_destruct;
@end
