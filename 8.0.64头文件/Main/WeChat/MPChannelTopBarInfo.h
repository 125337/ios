@interface MPChannelTopBarInfo : NSObject <PBCoding>
{
    BOOL _isDotNotice; // +0x8
    BOOL _showGreenDot; // +0x9
    BOOL _showSmallIcon; // +0xa
    unsigned int _funcVersion; // +0xc
    unsigned int _iconType; // +0x10
    unsigned int _titleType; // +0x14
    NSString * _title; // +0x18
    NSString * _appId; // +0x20
    NSString * _logoUrl; // +0x28
    unsigned long long _appDebugModeType; // +0x30
    NSString * _defaultLogoUrl; // +0x38
    NSString * _dataBuffer; // +0x40
    NSString * _syncBuffer; // +0x48
    NSString * _defaultTitle; // +0x50
    NSString * _informMsgCnt; // +0x58
    NSString * _smallIconUrl; // +0x60
    NSString * _appPath; // +0x68
    NSString * _dmLogoUrl; // +0x70
    NSString * _dmDefaultLogoUrl; // +0x78
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_logoUrl;
+ (void)PBArrayAdd_appDebugModeType;
+ (void)PBArrayAdd_funcVersion;
+ (void)PBArrayAdd_isDotNotice;
+ (void)PBArrayAdd_defaultLogoUrl;
+ (void)PBArrayAdd_dataBuffer;
+ (void)PBArrayAdd_syncBuffer;
+ (void)PBArrayAdd_iconType;
+ (void)PBArrayAdd_defaultTitle;
+ (void)PBArrayAdd_titleType;
+ (void)PBArrayAdd_appPath;
+ (void)PBArrayAdd_showGreenDot;
+ (void)PBArrayAdd_informMsgCnt;
+ (void)PBArrayAdd_showSmallIcon;
+ (void)PBArrayAdd_smallIconUrl;
+ (void)PBArrayAdd_dmLogoUrl;
+ (void)PBArrayAdd_dmDefaultLogoUrl;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isValid;
- (id)description;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)logoUrl;
- (void)setLogoUrl:(id)arg1;
- (unsigned long long)appDebugModeType;
- (void)setAppDebugModeType:(unsigned long long)arg1;
- (unsigned int)funcVersion;
- (void)setFuncVersion:(unsigned int)arg1;
- (BOOL)isDotNotice;
- (void)setIsDotNotice:(BOOL)arg1;
- (id)defaultLogoUrl;
- (void)setDefaultLogoUrl:(id)arg1;
- (id)dataBuffer;
- (void)setDataBuffer:(id)arg1;
- (id)syncBuffer;
- (void)setSyncBuffer:(id)arg1;
- (unsigned int)iconType;
- (void)setIconType:(unsigned int)arg1;
- (id)defaultTitle;
- (void)setDefaultTitle:(id)arg1;
- (unsigned int)titleType;
- (void)setTitleType:(unsigned int)arg1;
- (BOOL)showGreenDot;
- (void)setShowGreenDot:(BOOL)arg1;
- (id)informMsgCnt;
- (void)setInformMsgCnt:(id)arg1;
- (BOOL)showSmallIcon;
- (void)setShowSmallIcon:(BOOL)arg1;
- (id)smallIconUrl;
- (void)setSmallIconUrl:(id)arg1;
- (id)appPath;
- (void)setAppPath:(id)arg1;
- (id)dmLogoUrl;
- (void)setDmLogoUrl:(id)arg1;
- (id)dmDefaultLogoUrl;
- (void)setDmDefaultLogoUrl:(id)arg1;
- (void).cxx_destruct;
@end
