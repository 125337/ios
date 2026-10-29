@interface GameCenterMsgCenterContent : NSObject
{
    BOOL _isGreet; // +0x8
    unsigned int _msgRecvTime; // +0xc
    unsigned int _createTime; // +0x10
    unsigned int _type; // +0x14
    unsigned int _msgReportType; // +0x18
    unsigned int _localId; // +0x1c
    unsigned int _alreadyMergedCount; // +0x20
    unsigned int _relationType; // +0x24
    NSString * _headUrl; // +0x28
    NSString * _username; // +0x30
    NSString * _nickName; // +0x38
    NSString * _headJumpUrl; // +0x40
    NSString * _nickNameJumpUrl; // +0x48
    NSString * _badgeIconUrl; // +0x50
    NSString * _subtitle; // +0x58
    NSMutableArray * _mergeUserList; // +0x60
    NSMutableArray * _mergeUserInfoV2Array; // +0x68
    NSString * _firstLineContent; // +0x70
    NSString * _secondLineContent; // +0x78
    NSString * _secondLineIconUrl; // +0x80
    GameJumpInfo * _secondLineJumpInfo; // +0x88
    NSString * _contentPicUrl; // +0x90
    GameJumpInfo * _contentPicJumpInfo; // +0x98
    double _firstLineHeight; // +0xa0
    double _secondLineHeight; // +0xa8
    GameCenterMsgSourceInfo * _sourceInfo; // +0xb0
    GameJumpInfo * _msgCardInfo; // +0xb8
    NSString * _svrMsgId; // +0xc0
    NSString * _noticeId; // +0xc8
    NSString * _appId; // +0xd0
    NSString * _reportExtData; // +0xd8
    GameCenterMsgV2Node * _v2Node; // +0xe0
}
- (id)interactCellModel;
- (id)headUrl;
- (void)setHeadUrl:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)headJumpUrl;
- (void)setHeadJumpUrl:(id)arg1;
- (id)nickNameJumpUrl;
- (void)setNickNameJumpUrl:(id)arg1;
- (id)badgeIconUrl;
- (void)setBadgeIconUrl:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)mergeUserList;
- (void)setMergeUserList:(id)arg1;
- (id)mergeUserInfoV2Array;
- (void)setMergeUserInfoV2Array:(id)arg1;
- (id)firstLineContent;
- (void)setFirstLineContent:(id)arg1;
- (id)secondLineContent;
- (void)setSecondLineContent:(id)arg1;
- (id)secondLineIconUrl;
- (void)setSecondLineIconUrl:(id)arg1;
- (id)secondLineJumpInfo;
- (void)setSecondLineJumpInfo:(id)arg1;
- (id)contentPicUrl;
- (void)setContentPicUrl:(id)arg1;
- (id)contentPicJumpInfo;
- (void)setContentPicJumpInfo:(id)arg1;
- (double)firstLineHeight;
- (void)setFirstLineHeight:(double)arg1;
- (double)secondLineHeight;
- (void)setSecondLineHeight:(double)arg1;
- (unsigned int)msgRecvTime;
- (void)setMsgRecvTime:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)sourceInfo;
- (void)setSourceInfo:(id)arg1;
- (id)msgCardInfo;
- (void)setMsgCardInfo:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)msgReportType;
- (void)setMsgReportType:(unsigned int)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (id)svrMsgId;
- (void)setSvrMsgId:(id)arg1;
- (id)noticeId;
- (void)setNoticeId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)reportExtData;
- (void)setReportExtData:(id)arg1;
- (unsigned int)alreadyMergedCount;
- (void)setAlreadyMergedCount:(unsigned int)arg1;
- (BOOL)isGreet;
- (void)setIsGreet:(BOOL)arg1;
- (unsigned int)relationType;
- (void)setRelationType:(unsigned int)arg1;
- (id)v2Node;
- (void)setV2Node:(id)arg1;
- (void).cxx_destruct;
@end

