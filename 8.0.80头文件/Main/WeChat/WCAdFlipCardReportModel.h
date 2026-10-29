@interface WCAdFlipCardReportModel : WCAdChannelReportExtendInfoModel
{
    unsigned int _touchCount; // +0x8
    unsigned int _flipCount; // +0xc
    unsigned int _cardClickCount; // +0x10
    unsigned int _learnMoreClickCount; // +0x14
    NSMutableArray * _reportItemList; // +0x18
}
- (unsigned int)touchCount;
- (void)setTouchCount:(unsigned int)arg1;
- (unsigned int)flipCount;
- (void)setFlipCount:(unsigned int)arg1;
- (unsigned int)cardClickCount;
- (void)setCardClickCount:(unsigned int)arg1;
- (unsigned int)learnMoreClickCount;
- (void)setLearnMoreClickCount:(unsigned int)arg1;
- (id)reportItemList;
- (void)setReportItemList:(id)arg1;
- (void).cxx_destruct;
@end
