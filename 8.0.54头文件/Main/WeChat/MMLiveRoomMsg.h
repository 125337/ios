@interface MMLiveRoomMsg : NSObject <NSCopying>
{
    unsigned int _msgType; // +0x8
    unsigned int _msgCreateTime; // +0xc
    unsigned int _comboRewardCount; // +0x10
    unsigned int _rankingPosition; // +0x14
    NSString * _senderNickName; // +0x18
    NSString * _senderHeadImgUrl; // +0x20
    NSString * _content; // +0x28
    unsigned long long _msgSeq; // +0x30
    NSString * _clientMsgId; // +0x38
    NSString * _localClientMsgId; // +0x40
    MMFinderLiveRewardGiftItem * _comboRewardProduct; // +0x48
}
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (id)senderNickName;
- (void)setSenderNickName:(id)arg1;
- (id)senderHeadImgUrl;
- (void)setSenderHeadImgUrl:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned int)msgCreateTime;
- (void)setMsgCreateTime:(unsigned int)arg1;
- (unsigned long long)msgSeq;
- (void)setMsgSeq:(unsigned long long)arg1;
- (id)clientMsgId;
- (void)setClientMsgId:(id)arg1;
- (id)localClientMsgId;
- (void)setLocalClientMsgId:(id)arg1;
- (id)comboRewardProduct;
- (void)setComboRewardProduct:(id)arg1;
- (unsigned int)comboRewardCount;
- (void)setComboRewardCount:(unsigned int)arg1;
- (unsigned int)rankingPosition;
- (void)setRankingPosition:(unsigned int)arg1;
- (void).cxx_destruct;
@end

