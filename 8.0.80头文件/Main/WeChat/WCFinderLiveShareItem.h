@interface WCFinderLiveShareItem : NSObject <YYModel, NSCoding, NSCopying, PBCoding>
{
    BOOL _chatroomShowTipsBar; // +0x8
    BOOL _supprtJumpNav; // +0x9
    unsigned int _anchorLiveStatus; // +0xc
    unsigned int _sharePageStatus; // +0x10
    unsigned int _liveChargeFlag; // +0x14
    unsigned int _spamLiveExtFlag; // +0x18
    unsigned int _liveMode; // +0x1c
    unsigned int _liveSubMode; // +0x20
    NSString * _finderLiveID; // +0x28
    NSString * _finderUsername; // +0x30
    NSString * _finderObjectID; // +0x38
    NSString * _finderNonceID; // +0x40
    NSString * _coverUrl; // +0x48
    NSString * _nickname; // +0x50
    NSString * _headUrl; // +0x58
    NSString * _desc; // +0x60
    NSString * _ecSource; // +0x68
    NSString * _chatroomId; // +0x70
    unsigned long long _liveFlagValue; // +0x78
    WCFinderLiveShareExtraCodingInfo * _codingInfo; // +0x80
    unsigned long long _liveStartTimestamp; // +0x88
    NSString * _liveMicId; // +0x90
    NSString * _liveMicSdkUserId; // +0x98
    NSString * _inviteMicBuffer; // +0xa0
    double _cellHeight; // +0xa8
    double _cellWidth; // +0xb0
    double _liveExtFlag; // +0xb8
    NSString * _authIconUrl; // +0xc0
    NSString * _authIconTypeStr; // +0xc8
    NSString * _tailTagURL; // +0xd0
    NSString * _replayStatus; // +0xd8
    unsigned long long _refReplayObjectId; // +0xe0
    unsigned long long _replayControlFlag; // +0xe8
    unsigned long long _shareType; // +0xf0
    NSString * _liveSourceTypeStr; // +0xf8
    NSString * _liveSecondaryDeviceFlagStr; // +0x100
    NSString * _bindType; // +0x108
    NSString * _bizUsername; // +0x110
    NSString * _bizNickname; // +0x118
    NSString * _bizHeadUrl; // +0x120
    NSString * _liveNickname; // +0x128
    NSString * _liveUsername; // +0x130
    NSString * _eventHeadUrl; // +0x138
    NSString * _eventNickname; // +0x140
    NSString * _eventUsername; // +0x148
    NSString * _byPassInfoString; // +0x150
    NSString * _relayIndex; // +0x158
    NSString * _eventId; // +0x160
    NSString * _participantIdentity; // +0x168
    NSString * _eventStatus; // +0x170
    NSString * _streamStatus; // +0x178
    NSString * _lastGMsgID; // +0x180
    unsigned long long _enterSessionId; // +0x188
    NSString * _streamUrl; // +0x190
    NSString * _bareCoverUrl; // +0x198
    WCFinderLiveShareInstantDiscountActivityExtra * _instantDiscountActivityExtra; // +0x1a0
    long long _shareScene; // +0x1a8
    NSArray * _backupFeeds; // +0x1b0
    FinderLiveAnchorNewLiveJumpInfo * _anchorNewLiveJumpInfo; // +0x1b8
    NSString * _coAuthorAvatarUrl; // +0x1c0
    NSArray * _coAuthorAuthors; // +0x1c8
    NSString * _width; // +0x1d0
    NSString * _height; // +0x1d8
    NSString * _liveTimestamp; // +0x1e0
    NSString * _liveStatus; // +0x1e8
    NSString * _extFlag; // +0x1f0
    NSString * _chargeFlag; // +0x1f8
    NSString * _liveFlag; // +0x200
    NSString * _spamLiveExtFlagString; // +0x208
    unsigned long long _cacheTimestamp; // +0x210
}
+ (void)PBArrayAdd_finderLiveID;
+ (void)PBArrayAdd_finderUsername;
+ (void)PBArrayAdd_finderObjectID;
+ (void)PBArrayAdd_finderNonceID;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_headUrl;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_finderLiveStatus;
+ (void)PBArrayAdd_liveStartTimestamp;
+ (void)PBArrayAdd_liveMicId;
+ (void)PBArrayAdd_liveMicSdkUserId;
+ (void)PBArrayAdd_cellHeight;
+ (void)PBArrayAdd_cellWidth;
+ (void)PBArrayAdd_shareType;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_liveTimestamp;
+ (void)PBArrayAdd_liveStatus;
+ (void)PBArrayAdd_liveSourceTypeStr;
+ (void)PBArrayAdd_liveSecondaryDeviceFlagStr;
+ (void)PBArrayAdd_liveExtFlag;
+ (void)PBArrayAdd_ecSource;
+ (void)PBArrayAdd_authIconUrl;
+ (void)PBArrayAdd_authIconType;
+ (void)PBArrayAdd_bindType;
+ (void)PBArrayAdd_bizUsername;
+ (void)PBArrayAdd_bizNickname;
+ (void)PBArrayAdd_liveChargeFlag;
+ (void)PBArrayAdd_liveNickname;
+ (void)PBArrayAdd_liveUsername;
+ (void)PBArrayAdd_eventHeadUrl;
+ (void)PBArrayAdd_eventNickname;
+ (void)PBArrayAdd_byPassInfoString;
+ (void)PBArrayAdd_relayIndex;
+ (void)PBArrayAdd_eventId;
+ (void)PBArrayAdd_participantIdentity;
+ (void)PBArrayAdd_eventStatus;
+ (void)PBArrayAdd_streamStatus;
+ (void)PBArrayAdd_eventUsername;
+ (void)PBArrayAdd_replayStatus;
+ (void)PBArrayAdd_chatroomId;
+ (void)PBArrayAdd_liveFlagValue;
+ (void)PBArrayAdd_spamLiveExtFlag;
+ (void)PBArrayAdd_tailTagURL;
+ (void)PBArrayAdd_lastGMsgID;
+ (void)PBArrayAdd_refReplayObjectId;
+ (void)PBArrayAdd_replayControlFlag;
+ (void)PBArrayAdd_enterSessionId;
+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_liveSubMode;
+ (void)PBArrayAdd_bareCoverUrl;
+ (void)PBArrayAdd_instantDiscountActivityExtra;
+ (void)PBArrayAdd_anchorLiveStatus;
+ (void)PBArrayAdd_sharePageStatus;
+ (void)PBArrayAdd_shareScene;
+ (void)PBArrayAdd_bizHeadUrl;
+ (void)PBArrayAdd_coAuthorAvatarUrl;
+ (void)PBArrayAdd_coAuthorAuthors;
+ (void)PBArrayAdd_inviteMicBuffer;
+ (void)PBArrayAdd_chatroomShowTipsBar;
+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
+ (id)forwardItemBy:(id)arg1;
- (id)getPBPropertyTable;
- (id)initWithShareType:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (void)setFeedXML:(XmlReaderNode_t *)arg1;
- (void)setInviteXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)toXMLWithShareType:(unsigned long long)arg1;
- (id)toFeedXML;
- (id)toSpringXML;
- (void)generateFeedNodesInXML:(id)arg1;
- (id)toInviteXML;
- (id)width;
- (id)height;
- (id)extFlag;
- (unsigned int)liveChargeFlag;
- (id)liveFlag;
- (id)codingInfo;
- (id)spamLiveExtFlagString;
- (id)getTimelineDesc;
- (id)displayNickname;
- (void)setFinderLiveStatus:(unsigned long long)arg1;
- (unsigned long long)finderLiveStatus;
- (unsigned long long)authIconType;
- (void)setAuthIconType:(unsigned long long)arg1;
- (id)liveStatus;
- (void)setLiveFlagValue:(unsigned long long)arg1;
- (BOOL)isLiveEndState;
- (BOOL)isEndCardOpenNewLive;
- (BOOL)isLiveCoverEffectSpam;
- (unsigned int)coAuthorCount;
- (id)allCoAuthorNicknames;
- (BOOL)isPaidLive;
- (BOOL)isReplay;
- (BOOL)isMemberLive;
- (BOOL)isSuperfanLive;
- (BOOL)isReplayGenerating;
- (BOOL)canShare;
- (id)genFinderDataItem;
- (void)updateLiveExtFlagWithExtFlag:(unsigned int)arg1;
- (void)updateNewLiveCover:(id)arg1;
- (void)updateLiveStatusWithFinderDB;
- (void)updateLiveStateIfNeedFromScene:(unsigned long long)arg1;
- (void)onFinderLiveShareItemUpdateLiveInfo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)genActivityInfo;
- (unsigned int)replayStatusConvertToUInt32;
- (BOOL)isBizLiveItem;
- (BOOL)shouldChatroomShowTipsBar;
- (id)finderLiveID;
- (void)setFinderLiveID:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)finderObjectID;
- (void)setFinderObjectID:(id)arg1;
- (id)finderNonceID;
- (void)setFinderNonceID:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)headUrl;
- (void)setHeadUrl:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)ecSource;
- (void)setEcSource:(id)arg1;
- (id)chatroomId;
- (void)setChatroomId:(id)arg1;
- (unsigned long long)liveFlagValue;
- (BOOL)chatroomShowTipsBar;
- (void)setChatroomShowTipsBar:(BOOL)arg1;
- (unsigned int)anchorLiveStatus;
- (void)setAnchorLiveStatus:(unsigned int)arg1;
- (unsigned int)sharePageStatus;
- (void)setSharePageStatus:(unsigned int)arg1;
- (void)setCodingInfo:(id)arg1;
- (unsigned long long)liveStartTimestamp;
- (void)setLiveStartTimestamp:(unsigned long long)arg1;
- (id)liveMicId;
- (void)setLiveMicId:(id)arg1;
- (id)liveMicSdkUserId;
- (void)setLiveMicSdkUserId:(id)arg1;
- (id)inviteMicBuffer;
- (void)setInviteMicBuffer:(id)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (double)cellWidth;
- (void)setCellWidth:(double)arg1;
- (double)liveExtFlag;
- (void)setLiveExtFlag:(double)arg1;
- (id)authIconUrl;
- (void)setAuthIconUrl:(id)arg1;
- (id)authIconTypeStr;
- (void)setAuthIconTypeStr:(id)arg1;
- (id)tailTagURL;
- (void)setTailTagURL:(id)arg1;
- (void)setLiveChargeFlag:(unsigned int)arg1;
- (id)replayStatus;
- (void)setReplayStatus:(id)arg1;
- (unsigned long long)refReplayObjectId;
- (void)setRefReplayObjectId:(unsigned long long)arg1;
- (unsigned long long)replayControlFlag;
- (void)setReplayControlFlag:(unsigned long long)arg1;
- (unsigned int)spamLiveExtFlag;
- (void)setSpamLiveExtFlag:(unsigned int)arg1;
- (unsigned long long)shareType;
- (void)setShareType:(unsigned long long)arg1;
- (id)liveSourceTypeStr;
- (void)setLiveSourceTypeStr:(id)arg1;
- (id)liveSecondaryDeviceFlagStr;
- (void)setLiveSecondaryDeviceFlagStr:(id)arg1;
- (id)bindType;
- (void)setBindType:(id)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (id)bizNickname;
- (void)setBizNickname:(id)arg1;
- (id)bizHeadUrl;
- (void)setBizHeadUrl:(id)arg1;
- (id)liveNickname;
- (void)setLiveNickname:(id)arg1;
- (id)liveUsername;
- (void)setLiveUsername:(id)arg1;
- (id)eventHeadUrl;
- (void)setEventHeadUrl:(id)arg1;
- (id)eventNickname;
- (void)setEventNickname:(id)arg1;
- (id)eventUsername;
- (void)setEventUsername:(id)arg1;
- (id)byPassInfoString;
- (void)setByPassInfoString:(id)arg1;
- (id)relayIndex;
- (void)setRelayIndex:(id)arg1;
- (id)eventId;
- (void)setEventId:(id)arg1;
- (id)participantIdentity;
- (void)setParticipantIdentity:(id)arg1;
- (id)eventStatus;
- (void)setEventStatus:(id)arg1;
- (id)streamStatus;
- (void)setStreamStatus:(id)arg1;
- (id)lastGMsgID;
- (void)setLastGMsgID:(id)arg1;
- (unsigned long long)enterSessionId;
- (void)setEnterSessionId:(unsigned long long)arg1;
- (unsigned int)liveMode;
- (void)setLiveMode:(unsigned int)arg1;
- (unsigned int)liveSubMode;
- (void)setLiveSubMode:(unsigned int)arg1;
- (id)streamUrl;
- (void)setStreamUrl:(id)arg1;
- (id)bareCoverUrl;
- (void)setBareCoverUrl:(id)arg1;
- (id)instantDiscountActivityExtra;
- (void)setInstantDiscountActivityExtra:(id)arg1;
- (long long)shareScene;
- (void)setShareScene:(long long)arg1;
- (BOOL)supprtJumpNav;
- (void)setSupprtJumpNav:(BOOL)arg1;
- (id)backupFeeds;
- (void)setBackupFeeds:(id)arg1;
- (id)anchorNewLiveJumpInfo;
- (void)setAnchorNewLiveJumpInfo:(id)arg1;
- (id)coAuthorAvatarUrl;
- (void)setCoAuthorAvatarUrl:(id)arg1;
- (id)coAuthorAuthors;
- (void)setCoAuthorAuthors:(id)arg1;
- (void)setWidth:(id)arg1;
- (void)setHeight:(id)arg1;
- (id)liveTimestamp;
- (void)setLiveTimestamp:(id)arg1;
- (void)setLiveStatus:(id)arg1;
- (void)setExtFlag:(id)arg1;
- (id)chargeFlag;
- (void)setChargeFlag:(id)arg1;
- (void)setLiveFlag:(id)arg1;
- (void)setSpamLiveExtFlagString:(id)arg1;
- (unsigned long long)cacheTimestamp;
- (void)setCacheTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
