@interface MMFinderLiveMessageGiftInfo : NSObject
{
    NSString * _attrcontent; // +0x8
    NSString * _tip; // +0x10
    NSString * _objectId; // +0x18
    NSString * _giftId; // +0x20
}
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)attrcontent;
- (void)setAttrcontent:(id)arg1;
- (id)tip;
- (void)setTip:(id)arg1;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)giftId;
- (void)setGiftId:(id)arg1;
- (void).cxx_destruct;
@end
