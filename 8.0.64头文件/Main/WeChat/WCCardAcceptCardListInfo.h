@interface WCCardAcceptCardListInfo : MMObject
{
    unsigned int _fromScene; // +0x8
    unsigned int _statScene; // +0xc
    NSString * _bundleID; // +0x10
    NSString * _chatName; // +0x18
    NSString * _webUrl; // +0x20
    NSMutableArray * _cardSeedList; // +0x28
    NSString * _appID; // +0x30
    NSString * _consumedboxCardId; // +0x38
    NSString * _templateMsgId; // +0x40
}
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (id)bundleID;
- (void)setBundleID:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)webUrl;
- (void)setWebUrl:(id)arg1;
- (id)cardSeedList;
- (void)setCardSeedList:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (unsigned int)statScene;
- (void)setStatScene:(unsigned int)arg1;
- (id)consumedboxCardId;
- (void)setConsumedboxCardId:(id)arg1;
- (id)templateMsgId;
- (void)setTemplateMsgId:(id)arg1;
- (void).cxx_destruct;
@end
