@interface AppRegisterInfo : NSObject <NSCoding>
{
    BOOL needUpdateInfo; // +0x8
    BOOL needUpdateIcon; // +0x9
    BOOL needUpdateWatermark; // +0xa
    BOOL appAddedByUser; // +0xb
    BOOL appCanShowNew; // +0xc
    BOOL isNewApp; // +0xd
    BOOL isAppIconUrlChanged; // +0xe
    BOOL isAppWatermarkUrlChanged; // +0xf
    unsigned int lastUpdateInfoTime; // +0x10
    unsigned int lastUpdateWatermarkTime; // +0x14
    unsigned int lastUpdateIconTime; // +0x18
    unsigned int appInfoFlag; // +0x1c
    unsigned int appUpdateVersion; // +0x20
    unsigned int nextUpdateInfoTime; // +0x24
    unsigned int rankWeight; // +0x28
    unsigned int uiShowInShareList; // +0x2c
    unsigned long long appInfoVer; // +0x30
    NSString * appName; // +0x38
    NSString * appName4ZhTw; // +0x40
    NSString * appName4EnUs; // +0x48
    NSString * appID; // +0x50
    NSString * appIdentifier; // +0x58
    NSString * appDescription; // +0x60
    NSString * appDescription4ZhTw; // +0x68
    NSString * appDescription4EnUs; // +0x70
    NSString * appInstallUrl; // +0x78
    NSString * appIconUrl; // +0x80
    NSString * appWatermarkUrl; // +0x88
    NSString * appTypeList; // +0x90
    NSString * appDevInfo; // +0x98
    NSString * appDownloadUrl; // +0xa0
    NSString * appDownloadUrlMD5; // +0xa8
    NSMutableDictionary * dicShowInShareListSeq; // +0xb0
    unsigned long long appSupportContentType; // +0xb8
    unsigned long long appSupportContentTypeBy3rdApp; // +0xc0
}
- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)appInfoVer;
- (void)setAppInfoVer:(unsigned long long)arg1;
- (BOOL)needUpdateInfo;
- (void)setNeedUpdateInfo:(BOOL)arg1;
- (BOOL)needUpdateIcon;
- (void)setNeedUpdateIcon:(BOOL)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)appName4ZhTw;
- (void)setAppName4ZhTw:(id)arg1;
- (id)appName4EnUs;
- (void)setAppName4EnUs:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)appIdentifier;
- (void)setAppIdentifier:(id)arg1;
- (BOOL)needUpdateWatermark;
- (void)setNeedUpdateWatermark:(BOOL)arg1;
- (BOOL)appAddedByUser;
- (void)setAppAddedByUser:(BOOL)arg1;
- (id)appDescription;
- (void)setAppDescription:(id)arg1;
- (id)appDescription4ZhTw;
- (void)setAppDescription4ZhTw:(id)arg1;
- (id)appDescription4EnUs;
- (void)setAppDescription4EnUs:(id)arg1;
- (id)appInstallUrl;
- (void)setAppInstallUrl:(id)arg1;
- (id)appIconUrl;
- (void)setAppIconUrl:(id)arg1;
- (id)appWatermarkUrl;
- (void)setAppWatermarkUrl:(id)arg1;
- (unsigned int)lastUpdateInfoTime;
- (void)setLastUpdateInfoTime:(unsigned int)arg1;
- (unsigned int)lastUpdateWatermarkTime;
- (void)setLastUpdateWatermarkTime:(unsigned int)arg1;
- (unsigned int)lastUpdateIconTime;
- (void)setLastUpdateIconTime:(unsigned int)arg1;
- (id)appTypeList;
- (void)setAppTypeList:(id)arg1;
- (id)appDevInfo;
- (void)setAppDevInfo:(id)arg1;
- (unsigned int)appInfoFlag;
- (void)setAppInfoFlag:(unsigned int)arg1;
- (unsigned int)appUpdateVersion;
- (void)setAppUpdateVersion:(unsigned int)arg1;
- (BOOL)appCanShowNew;
- (void)setAppCanShowNew:(BOOL)arg1;
- (BOOL)isNewApp;
- (void)setIsNewApp:(BOOL)arg1;
- (id)appDownloadUrl;
- (void)setAppDownloadUrl:(id)arg1;
- (id)appDownloadUrlMD5;
- (void)setAppDownloadUrlMD5:(id)arg1;
- (unsigned int)nextUpdateInfoTime;
- (void)setNextUpdateInfoTime:(unsigned int)arg1;
- (unsigned int)rankWeight;
- (void)setRankWeight:(unsigned int)arg1;
- (id)dicShowInShareListSeq;
- (void)setDicShowInShareListSeq:(id)arg1;
- (unsigned int)uiShowInShareList;
- (void)setUiShowInShareList:(unsigned int)arg1;
- (unsigned long long)appSupportContentType;
- (void)setAppSupportContentType:(unsigned long long)arg1;
- (unsigned long long)appSupportContentTypeBy3rdApp;
- (void)setAppSupportContentTypeBy3rdApp:(unsigned long long)arg1;
- (BOOL)isAppIconUrlChanged;
- (void)setIsAppIconUrlChanged:(BOOL)arg1;
- (BOOL)isAppWatermarkUrlChanged;
- (void)setIsAppWatermarkUrlChanged:(BOOL)arg1;
- (void).cxx_destruct;
@end

