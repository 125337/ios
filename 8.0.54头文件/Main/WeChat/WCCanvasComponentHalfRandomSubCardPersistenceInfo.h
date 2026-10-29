@interface WCCanvasComponentHalfRandomSubCardPersistenceInfo : MMObject <NSCoding, PBCoding>
{
    NSString * _redPacketCoverUrl; // +0x8
    NSMutableDictionary * _sendBulletComments; // +0x10
}
+ (void)PBArrayAdd_redPacketCoverUrl;
+ (void)PBArrayAdd_sendBulletComments;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sendBulletComments;
- (id)redPacketCoverUrl;
- (void)setRedPacketCoverUrl:(id)arg1;
- (void)setSendBulletComments:(id)arg1;
- (void).cxx_destruct;
@end

