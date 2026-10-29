@interface JSApiScopeAuthorizeInfo : WAAuthorizeSheetInfo
{
    BOOL _isBanModifyAvatar; // +0x8
    unsigned int _avatarLimit; // +0xc
    unsigned int _defaultAvatarId; // +0x10
    NSMutableArray * _avatarInfoList; // +0x18
    NSString * _appId; // +0x20
    NSString * _defaultHeadimgUrl; // +0x28
    NSString * _defaultHeadimgFileid; // +0x30
    NSString * _addAvatarBtnNormalWording; // +0x38
    NSString * _addAvatarBtnLimitWording; // +0x40
}
- (id)avatarInfoList;
- (void)setAvatarInfoList:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (BOOL)isBanModifyAvatar;
- (void)setIsBanModifyAvatar:(BOOL)arg1;
- (unsigned int)avatarLimit;
- (void)setAvatarLimit:(unsigned int)arg1;
- (unsigned int)defaultAvatarId;
- (void)setDefaultAvatarId:(unsigned int)arg1;
- (id)defaultHeadimgUrl;
- (void)setDefaultHeadimgUrl:(id)arg1;
- (id)defaultHeadimgFileid;
- (void)setDefaultHeadimgFileid:(id)arg1;
- (id)addAvatarBtnNormalWording;
- (void)setAddAvatarBtnNormalWording:(id)arg1;
- (id)addAvatarBtnLimitWording;
- (void)setAddAvatarBtnLimitWording:(id)arg1;
- (void).cxx_destruct;
@end

