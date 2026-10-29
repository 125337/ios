@interface WCFinderShareListReportModel : NSObject
{
    BOOL _byPush; // +0x8
    BOOL _forceShowRingtoneGuide; // +0x9
    int _commentScene; // +0xc
    int _ringtoneEventType; // +0x10
    unsigned long long _enterScene; // +0x18
    NSString * _sourceUser; // +0x20
    NSString * _fromUsername; // +0x28
    NSString * _chatRoomUsername; // +0x30
    NSString * _toUsername; // +0x38
    NSString * _reportExtraInfo; // +0x40
    unsigned long long _requestScene; // +0x48
    unsigned long long _cardType; // +0x50
    WCFinderGetFeedAsyncInfoCGIConfig * _asyncConfig; // +0x58
    NSString * _finderForwardSource; // +0x60
    LongVideoPlayerContext * _longVideoContext; // +0x68
    unsigned long long _shareCardSourceCommentScene; // +0x70
    NSString * _jumpInfoBypassInfo; // +0x78
    NSString * _shareMsgSource; // +0x80
    NSString * _shareMsgSvrID; // +0x88
    NSString * _publisherId; // +0x90
    CMessageWrap * _originalMsgWrap; // +0x98
}
- (id)init;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)sourceUser;
- (void)setSourceUser:(id)arg1;
- (id)fromUsername;
- (void)setFromUsername:(id)arg1;
- (id)chatRoomUsername;
- (void)setChatRoomUsername:(id)arg1;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)reportExtraInfo;
- (void)setReportExtraInfo:(id)arg1;
- (BOOL)byPush;
- (void)setByPush:(BOOL)arg1;
- (unsigned long long)requestScene;
- (void)setRequestScene:(unsigned long long)arg1;
- (unsigned long long)cardType;
- (void)setCardType:(unsigned long long)arg1;
- (BOOL)forceShowRingtoneGuide;
- (void)setForceShowRingtoneGuide:(BOOL)arg1;
- (int)ringtoneEventType;
- (void)setRingtoneEventType:(int)arg1;
- (id)asyncConfig;
- (void)setAsyncConfig:(id)arg1;
- (id)finderForwardSource;
- (void)setFinderForwardSource:(id)arg1;
- (id)longVideoContext;
- (void)setLongVideoContext:(id)arg1;
- (unsigned long long)shareCardSourceCommentScene;
- (void)setShareCardSourceCommentScene:(unsigned long long)arg1;
- (id)jumpInfoBypassInfo;
- (void)setJumpInfoBypassInfo:(id)arg1;
- (id)shareMsgSource;
- (void)setShareMsgSource:(id)arg1;
- (id)shareMsgSvrID;
- (void)setShareMsgSvrID:(id)arg1;
- (id)publisherId;
- (void)setPublisherId:(id)arg1;
- (id)originalMsgWrap;
- (void)setOriginalMsgWrap:(id)arg1;
- (void).cxx_destruct;
@end

