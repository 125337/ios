@interface WCCanvasComponentReportRedEnvelopCardInfo : MMObject
{
    int _subType; // +0x8
    int _isDoubleCard; // +0xc
    unsigned int _expCnt; // +0x10
    unsigned int _btnClkCnt; // +0x14
    unsigned int _linkClkCnt; // +0x18
    NSString * _giveCardId; // +0x20
}
- (id)initWithSubType:(int)arg1 isDoubleCard:(int)arg2 giveCardId:(id)arg3;
- (id)dictionaryRepresentation;
- (int)subType;
- (void)setSubType:(int)arg1;
- (int)isDoubleCard;
- (void)setIsDoubleCard:(int)arg1;
- (unsigned int)expCnt;
- (void)setExpCnt:(unsigned int)arg1;
- (unsigned int)btnClkCnt;
- (void)setBtnClkCnt:(unsigned int)arg1;
- (unsigned int)linkClkCnt;
- (void)setLinkClkCnt:(unsigned int)arg1;
- (id)giveCardId;
- (void)setGiveCardId:(id)arg1;
- (void).cxx_destruct;
@end

