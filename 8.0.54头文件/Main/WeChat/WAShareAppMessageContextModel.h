@interface WAShareAppMessageContextModel : NSObject
{
    BOOL _bMutliContact; // +0x8
    BOOL _shouldUseUpdatableShare; // +0x9
    BOOL _isToDoMessage; // +0xa
    BOOL _isPrivateMessage; // +0xb
    BOOL _useForChatTool; // +0xc
    unsigned int _debugModeType; // +0x10
    int _cardType; // +0x14
    unsigned long long _shareType; // +0x18
    NSString * _appID; // +0x20
    NSString * _username; // +0x28
    NSString * _title; // +0x30
    NSString * _desc; // +0x38
    NSString * _appMediaUrl; // +0x40
    NSString * _appName; // +0x48
    NSString * _sourceDisplayname; // +0x50
    NSString * _sourceUsername; // +0x58
    WAAppMsgItem * _WeAppMsgItem; // +0x60
    WAShareAppMessageContextSpecialWeishiModel * _weishiModel; // +0x68
    WAShareAppMessageContextSpecialGameRecordModel * _gameRecordModel; // +0x70
    WAShareAppMessageContextSpecialNativeGameCardModel * _nativeGameCardModel; // +0x78
    NSString * _thumbImageKey; // +0x80
    NSString * _thumbUrl; // +0x88
    NSString * _fromAppName; // +0x90
    NSString * _messageExtraData; // +0x98
    WAShareAppMessageThumbImagePool * _thumbImagePool; // +0xa0
    NSString * _updatableShareTemplateId; // +0xa8
    NSString * _toDoActivityId; // +0xb0
    NSString * _chatroomUsername; // +0xb8
    NSArray * _participant; // +0xc0
}
- (id)WeAppMsgItem;
- (id)thumbImagePool;
- (BOOL)shouldSendGetShareInfoCGI;
- (unsigned long long)shareType;
- (void)setShareType:(unsigned long long)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)debugModeType;
- (void)setDebugModeType:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)appMediaUrl;
- (void)setAppMediaUrl:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)sourceDisplayname;
- (void)setSourceDisplayname:(id)arg1;
- (id)sourceUsername;
- (void)setSourceUsername:(id)arg1;
- (void)setWeAppMsgItem:(id)arg1;
- (id)weishiModel;
- (void)setWeishiModel:(id)arg1;
- (id)gameRecordModel;
- (void)setGameRecordModel:(id)arg1;
- (id)nativeGameCardModel;
- (void)setNativeGameCardModel:(id)arg1;
- (id)thumbImageKey;
- (void)setThumbImageKey:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)fromAppName;
- (void)setFromAppName:(id)arg1;
- (BOOL)bMutliContact;
- (void)setBMutliContact:(BOOL)arg1;
- (id)messageExtraData;
- (void)setMessageExtraData:(id)arg1;
- (void)setThumbImagePool:(id)arg1;
- (int)cardType;
- (void)setCardType:(int)arg1;
- (BOOL)shouldUseUpdatableShare;
- (void)setShouldUseUpdatableShare:(BOOL)arg1;
- (id)updatableShareTemplateId;
- (void)setUpdatableShareTemplateId:(id)arg1;
- (BOOL)isToDoMessage;
- (void)setIsToDoMessage:(BOOL)arg1;
- (id)toDoActivityId;
- (void)setToDoActivityId:(id)arg1;
- (BOOL)isPrivateMessage;
- (void)setIsPrivateMessage:(BOOL)arg1;
- (BOOL)useForChatTool;
- (void)setUseForChatTool:(BOOL)arg1;
- (id)chatroomUsername;
- (void)setChatroomUsername:(id)arg1;
- (id)participant;
- (void)setParticipant:(id)arg1;
- (void).cxx_destruct;
@end

