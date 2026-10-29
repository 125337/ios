@interface WCFinderContactCreateCGIParam : NSObject
{
    BOOL _notShowLocation; // +0x8
    BOOL _notShowSex; // +0x9
    BOOL _showInWXProfile; // +0xa
    BOOL _dontRecommendToFriends; // +0xb
    unsigned int _createSceneUserType; // +0xc
    NSString * _nickname; // +0x10
    NSString * _signature; // +0x18
    NSString * _headImageURL; // +0x20
    WCFinderContactExtInfo * _contactExtInfo; // +0x28
    WCFinderContactExtInfo * _registerInfo; // +0x30
    NSString * _clientID; // +0x38
    NSString * _fromWxUsername; // +0x40
    NSString * _sourceID; // +0x48
    unsigned long long _createSceneFeedId; // +0x50
}
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)headImageURL;
- (void)setHeadImageURL:(id)arg1;
- (id)contactExtInfo;
- (void)setContactExtInfo:(id)arg1;
- (id)registerInfo;
- (void)setRegisterInfo:(id)arg1;
- (BOOL)notShowLocation;
- (void)setNotShowLocation:(BOOL)arg1;
- (BOOL)notShowSex;
- (void)setNotShowSex:(BOOL)arg1;
- (BOOL)showInWXProfile;
- (void)setShowInWXProfile:(BOOL)arg1;
- (BOOL)dontRecommendToFriends;
- (void)setDontRecommendToFriends:(BOOL)arg1;
- (id)clientID;
- (void)setClientID:(id)arg1;
- (id)fromWxUsername;
- (void)setFromWxUsername:(id)arg1;
- (id)sourceID;
- (void)setSourceID:(id)arg1;
- (unsigned int)createSceneUserType;
- (void)setCreateSceneUserType:(unsigned int)arg1;
- (unsigned long long)createSceneFeedId;
- (void)setCreateSceneFeedId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

