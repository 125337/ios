@interface WWKFContact : NSObject
{
    BOOL _needLocation; // +0x8
    unsigned int _source; // +0xc
    unsigned int _lastUpdateTime; // +0x10
    NSString * _userName; // +0x18
    NSString * _nickName; // +0x20
    NSString * _bigAvatarUrl; // +0x28
    NSString * _smallAvatarUrl; // +0x30
    NSString * _nickNameJianPin; // +0x38
    NSString * _nickNameQuanPin; // +0x40
    NSString * _appId; // +0x48
    COpenIMInfo * _openIMInfo; // +0x50
    NSString * _headImgStatus; // +0x58
    NSString * _ticket; // +0x60
    unsigned long long _settingFlag; // +0x68
    NSString * _locationType; // +0x70
}
+ (id)contactWithOpenIMKefuContact:(id)arg1;
- (id)init;
- (id)description;
- (id)toCContact;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)bigAvatarUrl;
- (void)setBigAvatarUrl:(id)arg1;
- (id)smallAvatarUrl;
- (void)setSmallAvatarUrl:(id)arg1;
- (id)nickNameJianPin;
- (void)setNickNameJianPin:(id)arg1;
- (id)nickNameQuanPin;
- (void)setNickNameQuanPin:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)openIMInfo;
- (void)setOpenIMInfo:(id)arg1;
- (id)headImgStatus;
- (void)setHeadImgStatus:(id)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (unsigned long long)settingFlag;
- (void)setSettingFlag:(unsigned long long)arg1;
- (BOOL)needLocation;
- (void)setNeedLocation:(BOOL)arg1;
- (id)locationType;
- (void)setLocationType:(id)arg1;
- (unsigned int)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
