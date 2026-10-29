@interface WCFinderLiveRewardParams : NSObject
{
    BOOL _comboFinished; // +0x8
    unsigned int _rewardProductCount; // +0xc
    unsigned int _rewardAmountInWecoin; // +0x10
    int _rewardType; // +0x14
    unsigned int _source; // +0x18
    WCFinderDataItem * _dataItem; // +0x20
    NSString * _rewardRecipientUserName; // +0x28
    NSString * _rewardComboId; // +0x30
    NSString * _rewardProductId; // +0x38
    NSString * _styleId; // +0x40
    NSString * _rewardRequestId; // +0x48
    NSData * _liveCookies; // +0x50
    NSString * _sessionBuffer; // +0x58
    NSData * _rewardExtInfo; // +0x60
    NSMutableArray * _prepareBuf; // +0x68
    NSString * _clientMsgId; // +0x70
}
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)rewardRecipientUserName;
- (void)setRewardRecipientUserName:(id)arg1;
- (id)rewardComboId;
- (void)setRewardComboId:(id)arg1;
- (id)rewardProductId;
- (void)setRewardProductId:(id)arg1;
- (id)styleId;
- (void)setStyleId:(id)arg1;
- (unsigned int)rewardProductCount;
- (void)setRewardProductCount:(unsigned int)arg1;
- (unsigned int)rewardAmountInWecoin;
- (void)setRewardAmountInWecoin:(unsigned int)arg1;
- (id)rewardRequestId;
- (void)setRewardRequestId:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (BOOL)comboFinished;
- (void)setComboFinished:(BOOL)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (int)rewardType;
- (void)setRewardType:(int)arg1;
- (id)rewardExtInfo;
- (void)setRewardExtInfo:(id)arg1;
- (id)prepareBuf;
- (void)setPrepareBuf:(id)arg1;
- (id)clientMsgId;
- (void)setClientMsgId:(id)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (void).cxx_destruct;
@end
