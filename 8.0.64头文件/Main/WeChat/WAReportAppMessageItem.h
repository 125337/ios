@interface WAReportAppMessageItem : WAReportBaseItem
{
    BOOL _hasRelievedBuyFlag; // +0x8
    BOOL _hasFlagshipFlag; // +0x9
    BOOL _hasFinancialLicenseFlag; // +0xa
    unsigned int _action; // +0xc
    unsigned int _chatType; // +0x10
    unsigned int _chatRoomUserCount; // +0x14
    unsigned int _cardType; // +0x18
    NSString * _chatName; // +0x20
    NSString * _msgId; // +0x28
    NSString * _cardId; // +0x30
    NSString * _senderUsername; // +0x38
    NSString * _enterPath; // +0x40
    unsigned long long _exposePeriod; // +0x48
    NSString * _scoreNum; // +0x50
}
- (int)reportID;
- (id)reportString;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
- (unsigned int)chatType;
- (void)setChatType:(unsigned int)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned int)chatRoomUserCount;
- (void)setChatRoomUserCount:(unsigned int)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (unsigned int)cardType;
- (void)setCardType:(unsigned int)arg1;
- (id)senderUsername;
- (void)setSenderUsername:(id)arg1;
- (id)enterPath;
- (void)setEnterPath:(id)arg1;
- (unsigned long long)exposePeriod;
- (void)setExposePeriod:(unsigned long long)arg1;
- (BOOL)hasRelievedBuyFlag;
- (void)setHasRelievedBuyFlag:(BOOL)arg1;
- (BOOL)hasFlagshipFlag;
- (void)setHasFlagshipFlag:(BOOL)arg1;
- (BOOL)hasFinancialLicenseFlag;
- (void)setHasFinancialLicenseFlag:(BOOL)arg1;
- (id)scoreNum;
- (void)setScoreNum:(id)arg1;
- (void).cxx_destruct;
@end
