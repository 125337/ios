@interface EcsProductCardMessageModel : NSObject
{
    BOOL _showLoading; // +0x8
    NSString * _anchorFinderUsername; // +0x10
    NSString * _lastGMsgId; // +0x18
    NSString * _sourceAppID; // +0x20
    NSString * _passBuffer; // +0x28
    WCFinderDataItem * _finderDataItem; // +0x30
    unsigned long long _productId; // +0x38
    unsigned long long _realProductId; // +0x40
    NSString * _ecSource; // +0x48
    NSString * _promoterkey; // +0x50
    unsigned long long _cpsProductId; // +0x58
    NSString * _bizReportData; // +0x60
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
- (BOOL)showLoading;
- (void)setShowLoading:(BOOL)arg1;
- (id)bizReportData;
- (void)setBizReportData:(id)arg1;
- (void).cxx_destruct;
@end
