@interface EcsProductCardMessageModel : NSObject
{
    NSString * _anchorFinderUsername; // +0x8
    NSString * _lastGMsgId; // +0x10
    NSString * _sourceAppID; // +0x18
    NSString * _passBuffer; // +0x20
    WCFinderDataItem * _finderDataItem; // +0x28
    unsigned long long _productId; // +0x30
    unsigned long long _realProductId; // +0x38
    NSString * _ecSource; // +0x40
    NSString * _promoterkey; // +0x48
    unsigned long long _cpsProductId; // +0x50
}
- (id)initWithParams:(id)arg1 extraData:(id)arg2;
- (id)anchorFinderUsername;
- (void)setAnchorFinderUsername:(id)arg1;
- (id)lastGMsgId;
- (void)setLastGMsgId:(id)arg1;
- (id)sourceAppID;
- (void)setSourceAppID:(id)arg1;
- (id)passBuffer;
- (void)setPassBuffer:(id)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (unsigned long long)productId;
- (void)setProductId:(unsigned long long)arg1;
- (unsigned long long)realProductId;
- (void)setRealProductId:(unsigned long long)arg1;
- (id)ecSource;
- (void)setEcSource:(id)arg1;
- (id)promoterkey;
- (void)setPromoterkey:(id)arg1;
- (unsigned long long)cpsProductId;
- (void)setCpsProductId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
