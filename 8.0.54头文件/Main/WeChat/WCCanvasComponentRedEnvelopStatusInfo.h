@interface WCCanvasComponentRedEnvelopStatusInfo : MMObject
{
    int _subType; // +0x8
    int _isDoubleCard; // +0xc
    NSString * _giveCardId; // +0x10
}
- (int)subType;
- (void)setSubType:(int)arg1;
- (int)isDoubleCard;
- (void)setIsDoubleCard:(int)arg1;
- (id)giveCardId;
- (void)setGiveCardId:(id)arg1;
- (void).cxx_destruct;
@end

