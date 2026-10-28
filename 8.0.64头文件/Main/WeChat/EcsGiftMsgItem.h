@interface EcsGiftMsgItem : MMObject <NSCopying>
{
    unsigned int _subtype; // +0x8
    unsigned int _takeMethod; // +0xc
    unsigned int _disableReceive; // +0x10
    unsigned int _ellipsisIndex; // +0x14
    unsigned int _fromProductSet; // +0x18
    unsigned int _lotteryMethod; // +0x1c
    NSDictionary * _giftList; // +0x20
    NSString * _wishMessage; // +0x28
    NSString * _giftTitle; // +0x30
    NSString * _giftMsgId; // +0x38
    NSString * _appMsgSign; // +0x40
    EcsGiftJumpInfo * _jumpInfo; // +0x48
    NSString * _giftSourceName; // +0x50
    EcsGiftCoverInfo * _giftCoverInfo; // +0x58
    NSArray * _giftLabels; // +0x60
    NSString * _giftTitleTemplate; // +0x68
    NSString * _recvUserName; // +0x70
    NSArray * _skuInfos; // +0x78
    NSString * _drawTimeWording; // +0x80
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toXML;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (unsigned int)subtype;
- (void)setSubtype:(unsigned int)arg1;
- (id)giftList;
- (void)setGiftList:(id)arg1;
- (id)wishMessage;
- (void)setWishMessage:(id)arg1;
- (id)giftTitle;
- (void)setGiftTitle:(id)arg1;
- (unsigned int)takeMethod;
- (void)setTakeMethod:(unsigned int)arg1;
- (id)giftMsgId;
- (void)setGiftMsgId:(id)arg1;
- (id)appMsgSign;
- (void)setAppMsgSign:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (unsigned int)disableReceive;
- (void)setDisableReceive:(unsigned int)arg1;
- (id)giftSourceName;
- (void)setGiftSourceName:(id)arg1;
- (id)giftCoverInfo;
- (void)setGiftCoverInfo:(id)arg1;
- (id)giftLabels;
- (void)setGiftLabels:(id)arg1;
- (id)giftTitleTemplate;
- (void)setGiftTitleTemplate:(id)arg1;
- (id)recvUserName;
- (void)setRecvUserName:(id)arg1;
- (unsigned int)ellipsisIndex;
- (void)setEllipsisIndex:(unsigned int)arg1;
- (unsigned int)fromProductSet;
- (void)setFromProductSet:(unsigned int)arg1;
- (id)skuInfos;
- (void)setSkuInfos:(id)arg1;
- (id)drawTimeWording;
- (void)setDrawTimeWording:(id)arg1;
- (unsigned int)lotteryMethod;
- (void)setLotteryMethod:(unsigned int)arg1;
- (void).cxx_destruct;
@end
