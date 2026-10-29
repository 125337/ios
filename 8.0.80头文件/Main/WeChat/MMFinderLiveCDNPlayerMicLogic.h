@interface MMFinderLiveCDNPlayerMicLogic : NSObject
{
    BOOL _isVideoLandscapeMode; // +0x8
    BOOL _canUseNewMicSEI; // +0x9
    BOOL _isInCgiProcess; // +0xa
    BOOL _shouldGetMicUsersAfterCgiProcess; // +0xb
    BOOL _hasUnknownMicUser; // +0xc
    BOOL _isFitRenderMode; // +0xd
    int _commentScene; // +0x10
    unsigned int _cgiRequestNextTime; // +0x14
    id <MMFinderLiveCDNPlayerMicLogicDelegate> _actionDelegate; // +0x18
    WCFinderDataItem * _finderDataItem; // +0x20
    NSString * _anchorSdkUserId; // +0x28
    MMFinderLiveConnectMicUsersInfo * _allConnectedMicUsersInfo; // +0x30
    unsigned long long _audioRoomScene; // +0x38
    unsigned long long _cdnPlayerViewScene; // +0x40
    NSString * _micTopic; // +0x48
    unsigned long long _micTopicVersion; // +0x50
    NSString * _micTopicTitle; // +0x58
    MMFinderLiveConnectMicUsersInfo * _lastMicUsersInfoBeforeMinimize; // +0x60
    NSMutableDictionary * _lastMicUsersDicFromServer; // +0x68
    NSMutableArray * _lastConnectMicUserInfoListFromSEI; // +0x70
    MMLiveSEIConnectMicMsg * _seiMicMsgInfo; // +0x78
    NSMutableDictionary * _isOtherRoomMicAnchorAudioModeDict; // +0x80
    MMLiveAudioRoomSEIConnectMicMsg * _audioRoomSeiMicMsgInfo; // +0x88
}
- (id)initWithFinderDataItem:(id)arg1 commentScene:(int)arg2;
- (BOOL)isAudioRoomMode;
- (void)checkLiveMicInfo:(id)arg1;
- (void)handleNewPkMicInfos:(id)arg1 withMicUserDictFromServer:(id)arg2;
- (void)handleMicPkInfo:(id)arg1 withMicUserDictFromServer:(id)arg2;
- (void)clearLastMicUsersDicFromServer;
- (void)clearMicUsersInfoOnly;
- (void)clearMicUsersInfoOnlyWithForceClearFlag:(BOOL)arg1;
- (void)updateHasUnknownMicUserAfterClearList;
- (void)clearMicUsersList;
- (void)clearMicUsersListWithForceClearFlag:(BOOL)arg1;
- (void)checkAndUpdateConnectMicUsersListWithOldVersionSeiMsg;
- (void)checkAndUpdateConnectMicUsersList;
- (void)checkAndUpdateAudioRoomMicUsersList;
- (void)setIsVideoLandscapeMode:(BOOL)arg1;
- (void)tryGetMicUsersFromServer:(BOOL)arg1 getExtraAutoSwipeInfo:(BOOL)arg2;
- (void)wrapTryGetMicUsersFromServer:(id)arg1;
- (void)checkLiveStatusOnDisconnect;
- (void)checkAndGetMicUsersAfterDelay:(BOOL)arg1;
- (BOOL)receiveOldVersionSeiMsg:(id)arg1;
- (BOOL)receiveSeiConnectMicMsg:(id)arg1;
- (id)updateOtherMicAnchorUserIsAudioMode:(BOOL)arg1 sdkUserId:(id)arg2;
- (void)updateIsFitRenderMode:(BOOL)arg1;
- (void)clearSeiData;
- (id)isOtherRoomMicAnchorAudioModeDict;
- (void)updateAudioRoomScene:(unsigned long long)arg1;
- (BOOL)receiveAudioRoomSeiMicMsg:(id)arg1;
- (void)updateAudioRoomListTalkingStatusWithSeiMicMsg:(id)arg1;
- (void)updateWithLastMicUsersInfoBeforeMinimize:(id)arg1 isVideoLandscapeMode:(BOOL)arg2;
- (BOOL)updateMicTopicTitle:(id)arg1;
- (BOOL)updateMicTopic:(id)arg1 version:(unsigned long long)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (BOOL)isVideoLandscapeMode;
- (BOOL)canUseNewMicSEI;
- (void)setCanUseNewMicSEI:(BOOL)arg1;
- (id)anchorSdkUserId;
- (void)setAnchorSdkUserId:(id)arg1;
- (id)allConnectedMicUsersInfo;
- (void)setAllConnectedMicUsersInfo:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)audioRoomScene;
- (void)setAudioRoomScene:(unsigned long long)arg1;
- (unsigned long long)cdnPlayerViewScene;
- (void)setCdnPlayerViewScene:(unsigned long long)arg1;
- (id)micTopic;
- (void)setMicTopic:(id)arg1;
- (unsigned long long)micTopicVersion;
- (void)setMicTopicVersion:(unsigned long long)arg1;
- (id)micTopicTitle;
- (void)setMicTopicTitle:(id)arg1;
- (id)lastMicUsersInfoBeforeMinimize;
- (void)setLastMicUsersInfoBeforeMinimize:(id)arg1;
- (id)lastMicUsersDicFromServer;
- (void)setLastMicUsersDicFromServer:(id)arg1;
- (id)lastConnectMicUserInfoListFromSEI;
- (void)setLastConnectMicUserInfoListFromSEI:(id)arg1;
- (BOOL)isInCgiProcess;
- (void)setIsInCgiProcess:(BOOL)arg1;
- (BOOL)shouldGetMicUsersAfterCgiProcess;
- (void)setShouldGetMicUsersAfterCgiProcess:(BOOL)arg1;
- (unsigned int)cgiRequestNextTime;
- (void)setCgiRequestNextTime:(unsigned int)arg1;
- (BOOL)hasUnknownMicUser;
- (void)setHasUnknownMicUser:(BOOL)arg1;
- (id)seiMicMsgInfo;
- (void)setSeiMicMsgInfo:(id)arg1;
- (void)setIsOtherRoomMicAnchorAudioModeDict:(id)arg1;
- (BOOL)isFitRenderMode;
- (void)setIsFitRenderMode:(BOOL)arg1;
- (id)audioRoomSeiMicMsgInfo;
- (void)setAudioRoomSeiMicMsgInfo:(id)arg1;
- (void).cxx_destruct;
@end
