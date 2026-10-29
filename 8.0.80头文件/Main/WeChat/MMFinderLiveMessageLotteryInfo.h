@interface MMFinderLiveMessageLotteryInfo : NSObject
{
    NSString * _attrcontent; // +0x8
    NSString * _tip; // +0x10
    NSString * _lotteryId; // +0x18
    NSString * _objectId; // +0x20
    NSString * _liveId; // +0x28
    NSString * _isAudience; // +0x30
}
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)attrcontent;
- (void)setAttrcontent:(id)arg1;
- (id)tip;
- (void)setTip:(id)arg1;
- (id)lotteryId;
- (void)setLotteryId:(id)arg1;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)liveId;
- (void)setLiveId:(id)arg1;
- (id)isAudience;
- (void)setIsAudience:(id)arg1;
- (void).cxx_destruct;
@end
