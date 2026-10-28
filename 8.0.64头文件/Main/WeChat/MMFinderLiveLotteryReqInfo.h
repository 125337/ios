@interface MMFinderLiveLotteryReqInfo : NSObject
{
    unsigned int _type; // +0x8
    MMFinderLiveMessageLotteryInfo * _lotteryInfo; // +0x10
    MMFinderLiveMessageGiftInfo * _giftInfo; // +0x18
}
- (BOOL)fromPrizeType:(unsigned int)arg1 lotteryNode:(XmlReaderNode_t *)arg2 giftNode:(XmlReaderNode_t *)arg3;
- (BOOL)isLotteryType;
- (BOOL)isGiftType;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (id)giftInfo;
- (void)setGiftInfo:(id)arg1;
- (void).cxx_destruct;
@end
