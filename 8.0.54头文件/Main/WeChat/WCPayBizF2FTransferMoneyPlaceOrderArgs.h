@interface WCPayBizF2FTransferMoneyPlaceOrderArgs : NSObject
{
    unsigned int _originalAmount; // +0x8
    unsigned int _totalAmount; // +0xc
    NSString * _payerComment; // +0x10
    FavorComposeInfo * _favorComposeInfo; // +0x18
    NSMutableArray * _extraBuyDetailInfos; // +0x20
}
- (unsigned int)originalAmount;
- (void)setOriginalAmount:(unsigned int)arg1;
- (unsigned int)totalAmount;
- (void)setTotalAmount:(unsigned int)arg1;
- (id)payerComment;
- (void)setPayerComment:(id)arg1;
- (id)favorComposeInfo;
- (void)setFavorComposeInfo:(id)arg1;
- (id)extraBuyDetailInfos;
- (void)setExtraBuyDetailInfos:(id)arg1;
- (void).cxx_destruct;
@end

