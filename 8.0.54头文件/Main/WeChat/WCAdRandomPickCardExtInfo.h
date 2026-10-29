@interface WCAdRandomPickCardExtInfo : NSObject <NSCoding, PBCoding>
{
    NSString * _cardDynamicInfo; // +0x8
    NSString * _redPacketCoverUrl; // +0x10
}
+ (void)PBArrayAdd_cardDynamicInfo;
+ (void)PBArrayAdd_redPacketCoverUrl;
+ (void)initialize;
+ (id)fromResponseExtInfo:(id)arg1;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)cardDynamicInfo;
- (void)setCardDynamicInfo:(id)arg1;
- (id)redPacketCoverUrl;
- (void)setRedPacketCoverUrl:(id)arg1;
- (void).cxx_destruct;
@end

