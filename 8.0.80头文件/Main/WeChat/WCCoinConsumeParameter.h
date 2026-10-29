@interface WCCoinConsumeParameter : MMObject
{
    BOOL _agreementSelected; // +0x8
    int _businessId; // +0xc
    unsigned int _count; // +0x10
    unsigned int _productWecoinPrice; // +0x14
    int _rechargeScene; // +0x18
    unsigned long long _mode; // +0x20
    NSString * _billNo; // +0x28
    NSString * _consumeProductId; // +0x30
    NSData * _extReq; // +0x38
    NSData * _buff; // +0x40
    id <MMPageSheetProvider> _pageSheetProvider; // +0x48
    NSString * _productTitle; // +0x50
    NSString * _productTitleInsufficient; // +0x58
    NSArray * _consumeTipsWording; // +0x60
    NSString * _consumeButtonTitle; // +0x68
    NSString * _consumeButtonTitleInsufficient; // +0x70
    NSString * _agreementString; // +0x78
    NSString * _consumeLoadingString; // +0x80
    NSString * _showPanelLoadingString; // +0x88
}
- (id)init;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (int)businessId;
- (void)setBusinessId:(int)arg1;
- (id)billNo;
- (void)setBillNo:(id)arg1;
- (id)consumeProductId;
- (void)setConsumeProductId:(id)arg1;
- (unsigned int)count;
- (void)setCount:(unsigned int)arg1;
- (id)extReq;
- (void)setExtReq:(id)arg1;
- (id)buff;
- (void)setBuff:(id)arg1;
- (id)pageSheetProvider;
- (void)setPageSheetProvider:(id)arg1;
- (id)productTitle;
- (void)setProductTitle:(id)arg1;
- (id)productTitleInsufficient;
- (void)setProductTitleInsufficient:(id)arg1;
- (unsigned int)productWecoinPrice;
- (void)setProductWecoinPrice:(unsigned int)arg1;
- (id)consumeTipsWording;
- (void)setConsumeTipsWording:(id)arg1;
- (id)consumeButtonTitle;
- (void)setConsumeButtonTitle:(id)arg1;
- (id)consumeButtonTitleInsufficient;
- (void)setConsumeButtonTitleInsufficient:(id)arg1;
- (BOOL)agreementSelected;
- (void)setAgreementSelected:(BOOL)arg1;
- (id)agreementString;
- (void)setAgreementString:(id)arg1;
- (id)consumeLoadingString;
- (void)setConsumeLoadingString:(id)arg1;
- (id)showPanelLoadingString;
- (void)setShowPanelLoadingString:(id)arg1;
- (int)rechargeScene;
- (void)setRechargeScene:(int)arg1;
- (void).cxx_destruct;
@end
