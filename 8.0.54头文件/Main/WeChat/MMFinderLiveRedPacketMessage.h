@interface MMFinderLiveRedPacketMessage : NSObject
{
    NSString * _liveId; // +0x8
    NSString * _finderObjectId; // +0x10
    NSString * _finderNonceId; // +0x18
    NSString * _redPacketId; // +0x20
}
- (id)liveId;
- (void)setLiveId:(id)arg1;
- (id)finderObjectId;
- (void)setFinderObjectId:(id)arg1;
- (id)finderNonceId;
- (void)setFinderNonceId:(id)arg1;
- (id)redPacketId;
- (void)setRedPacketId:(id)arg1;
- (void).cxx_destruct;
@end

