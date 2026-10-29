@interface WCCanvasComponentReportRandomPickCardInfo : WCCanvasComponentReportBasicInfo
{
    unsigned int _pickedCardClickNum; // +0x20
    unsigned int _unPickedCardClickNum; // +0x24
}
- (id)dictionaryRepresentation;
- (unsigned int)pickedCardClickNum;
- (void)setPickedCardClickNum:(unsigned int)arg1;
- (unsigned int)unPickedCardClickNum;
- (void)setUnPickedCardClickNum:(unsigned int)arg1;
@end

