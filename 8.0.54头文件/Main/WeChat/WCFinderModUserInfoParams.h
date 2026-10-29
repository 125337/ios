@interface WCFinderModUserInfoParams : NSObject
{
    BOOL _notShowLocation; // +0x8
    BOOL _notShowSex; // +0x9
    BOOL _notShowBirth; // +0xa
    int _sex; // +0xc
    unsigned int _birthYear; // +0x10
    unsigned int _birthMonth; // +0x14
    unsigned int _birthDay; // +0x18
    unsigned int _privateSwitch; // +0x1c
    unsigned int _finderVideoSwitch; // +0x20
    unsigned int _audienceMuteSwitch; // +0x24
    int _privacyLevel; // +0x28
    int _comment_privacyLevel; // +0x2c
    int _greet_privacyLevel; // +0x30
    NSString * _nickname; // +0x38
    NSString * _signature; // +0x40
    NSString * _coverImgUrl; // +0x48
    NSString * _headImageUrl; // +0x50
    NSString * _country; // +0x58
    NSString * _province; // +0x60
    NSString * _city; // +0x68
    NSString * _realCountry; // +0x70
    NSString * _realProvince; // +0x78
    NSString * _realCity; // +0x80
    FinderNotRecommendInfo * _notRecommendInfo; // +0x88
    unsigned long long _miniappReferenceSwitch; // +0x90
    unsigned long long _hiddenMentionFeedSwitch; // +0x98
    unsigned long long _musicForbidReproduce; // +0xa0
    unsigned long long _showLiveDataAtProfile; // +0xa8
    unsigned long long _mjForbidReproduce; // +0xb0
}
+ (unsigned long long)valueWithBOOL:(BOOL)arg1;
- (id)init;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)coverImgUrl;
- (void)setCoverImgUrl:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)realCountry;
- (void)setRealCountry:(id)arg1;
- (id)realProvince;
- (void)setRealProvince:(id)arg1;
- (id)realCity;
- (void)setRealCity:(id)arg1;
- (int)sex;
- (void)setSex:(int)arg1;
- (unsigned int)birthYear;
- (void)setBirthYear:(unsigned int)arg1;
- (unsigned int)birthMonth;
- (void)setBirthMonth:(unsigned int)arg1;
- (unsigned int)birthDay;
- (void)setBirthDay:(unsigned int)arg1;
- (BOOL)notShowLocation;
- (void)setNotShowLocation:(BOOL)arg1;
- (BOOL)notShowSex;
- (void)setNotShowSex:(BOOL)arg1;
- (BOOL)notShowBirth;
- (void)setNotShowBirth:(BOOL)arg1;
- (unsigned int)privateSwitch;
- (void)setPrivateSwitch:(unsigned int)arg1;
- (unsigned int)finderVideoSwitch;
- (void)setFinderVideoSwitch:(unsigned int)arg1;
- (unsigned int)audienceMuteSwitch;
- (void)setAudienceMuteSwitch:(unsigned int)arg1;
- (int)privacyLevel;
- (void)setPrivacyLevel:(int)arg1;
- (int)comment_privacyLevel;
- (void)setComment_privacyLevel:(int)arg1;
- (int)greet_privacyLevel;
- (void)setGreet_privacyLevel:(int)arg1;
- (id)notRecommendInfo;
- (void)setNotRecommendInfo:(id)arg1;
- (unsigned long long)miniappReferenceSwitch;
- (void)setMiniappReferenceSwitch:(unsigned long long)arg1;
- (unsigned long long)hiddenMentionFeedSwitch;
- (void)setHiddenMentionFeedSwitch:(unsigned long long)arg1;
- (unsigned long long)musicForbidReproduce;
- (void)setMusicForbidReproduce:(unsigned long long)arg1;
- (unsigned long long)showLiveDataAtProfile;
- (void)setShowLiveDataAtProfile:(unsigned long long)arg1;
- (unsigned long long)mjForbidReproduce;
- (void)setMjForbidReproduce:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

