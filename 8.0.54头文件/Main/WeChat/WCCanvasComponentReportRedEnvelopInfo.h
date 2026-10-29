@interface WCCanvasComponentReportRedEnvelopInfo : WCCanvasComponentReportBasicInfo
{
    NSMutableDictionary * _hbCards; // +0x20
}
- (id)initWithCid:(id)arg1;
- (id)dictionaryRepresentation;
- (id)getCardInfoKeyForSubType:(int)arg1 isDoubleCard:(int)arg2;
- (id)hbCards;
- (void)setHbCards:(id)arg1;
- (void).cxx_destruct;
@end

