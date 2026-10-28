@interface WCCardEnterInfo : MMObject
{
    unsigned int _fromScene; // +0x8
    unsigned int _statScene; // +0xc
    NSString * _cardIdOrTpId; // +0x10
    NSString * _cardExt; // +0x18
    NSString * _fromUserName; // +0x20
    NSString * _chatName; // +0x28
    NSString * _webUrl; // +0x30
    NSString * _appID; // +0x38
    NSString * _consumedboxCardId; // +0x40
    NSString * _templateMsgId; // +0x48
    NSString * _recommendCardId; // +0x50
}
- (id)cardIdOrTpId;
- (void)setCardIdOrTpId:(id)arg1;
- (id)cardExt;
- (void)setCardExt:(id)arg1;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)webUrl;
- (void)setWebUrl:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (unsigned int)statScene;
- (void)setStatScene:(unsigned int)arg1;
- (id)consumedboxCardId;
- (void)setConsumedboxCardId:(id)arg1;
- (id)templateMsgId;
- (void)setTemplateMsgId:(id)arg1;
- (id)recommendCardId;
- (void)setRecommendCardId:(id)arg1;
- (void).cxx_destruct;
@end
