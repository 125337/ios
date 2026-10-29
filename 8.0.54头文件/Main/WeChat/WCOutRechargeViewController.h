@interface WCOutRechargeViewController : MMUIViewController <WCOutChargeLogicDelegate, UITableViewDataSource, UITableViewDelegate, MMTipsViewControllerDelegate, ILinkEventExt>
{
    BOOL _canChangeCurrency; // +0x68
    BOOL _needCheckCurrency; // +0x69
    BOOL _needBuySelProd; // +0x6a
    BOOL _getSKProductFailed; // +0x6b
    BOOL _hasShowWebPayAlert; // +0x6c
    BOOL _needShowLoadingWhenActive; // +0x6d
    unsigned int _productBtnCount; // +0x70
    unsigned int _productListRet; // +0x74
    unsigned int _purchaseRet; // +0x78
    unsigned int _verifyRet; // +0x7c
    MMTableView * _tableView; // +0x80
    NSMutableDictionary * _productinfoDict; // +0x88
    MMLoadingView * _loadingView; // +0x90
    WCOutChargeLogic * _chargeLogic; // +0x98
    NSString * _hotCoutryName; // +0xa0
    WCOutProductInfo * _selProd; // +0xa8
    NSString * _serverCurrency; // +0xb0
    NSString * _appleCurrency; // +0xb8
    MMUIView * _chargeView; // +0xc0
    NSString * _webPayAlertTitle; // +0xc8
    NSString * _webPayAlertDesc; // +0xd0
    NSString * _enterTs; // +0xd8
    NSString * _outTs; // +0xe0
    NSString * _productListTs; // +0xe8
    NSString * _productDetailTs; // +0xf0
    NSString * _buyClickTs; // +0xf8
    NSString * _buyFinishedTs; // +0x100
    NSString * _buyProductId; // +0x108
    NSString * _orderCurrencyType; // +0x110
    NSString * _payCurrencyType; // +0x118
}
- (id)init;
- (void)dealloc;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)applicationWillResignActiveNotification:(id)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)startLoading;
- (void)stopLoading:(BOOL)arg1 err:(id)arg2;
- (void)configModel:(id)arg1;
- (void)configTableWithoutData;
- (void)configTableView;
- (id)getWCOutProductInfoByButtonTag:(long long)arg1;
- (void)onClickBuy:(id)arg1;
- (void)onCheckFeeClicked;
- (void)loadDataFailed;
- (void)didReceiveGetProductListResponse:(BOOL)arg1 Respone:(id)arg2;
- (void)updateListFromAppleResponse:(BOOL)arg1 successSKProductList:(id)arg2;
- (BOOL)checkCurrencyType;
- (void)onPurchaseSuccessForProduct:(id)arg1 ErrCode:(unsigned int)arg2;
- (void)onPurchaseFailForProduct:(id)arg1 Err:(id)arg2;
- (void)onPurchaseCancelForProduct:(id)arg1;
- (id)getWCOutProductInfoByCellSectionIndex:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)productinfoDict;
- (void)setProductinfoDict:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)chargeLogic;
- (void)setChargeLogic:(id)arg1;
- (id)hotCoutryName;
- (void)setHotCoutryName:(id)arg1;
- (id)selProd;
- (void)setSelProd:(id)arg1;
- (BOOL)canChangeCurrency;
- (void)setCanChangeCurrency:(BOOL)arg1;
- (id)serverCurrency;
- (void)setServerCurrency:(id)arg1;
- (BOOL)needCheckCurrency;
- (void)setNeedCheckCurrency:(BOOL)arg1;
- (id)appleCurrency;
- (void)setAppleCurrency:(id)arg1;
- (BOOL)needBuySelProd;
- (void)setNeedBuySelProd:(BOOL)arg1;
- (BOOL)getSKProductFailed;
- (void)setGetSKProductFailed:(BOOL)arg1;
- (id)chargeView;
- (void)setChargeView:(id)arg1;
- (BOOL)hasShowWebPayAlert;
- (void)setHasShowWebPayAlert:(BOOL)arg1;
- (id)webPayAlertTitle;
- (void)setWebPayAlertTitle:(id)arg1;
- (id)webPayAlertDesc;
- (void)setWebPayAlertDesc:(id)arg1;
- (id)enterTs;
- (void)setEnterTs:(id)arg1;
- (id)outTs;
- (void)setOutTs:(id)arg1;
- (unsigned int)productBtnCount;
- (void)setProductBtnCount:(unsigned int)arg1;
- (id)productListTs;
- (void)setProductListTs:(id)arg1;
- (unsigned int)productListRet;
- (void)setProductListRet:(unsigned int)arg1;
- (id)productDetailTs;
- (void)setProductDetailTs:(id)arg1;
- (BOOL)needShowLoadingWhenActive;
- (void)setNeedShowLoadingWhenActive:(BOOL)arg1;
- (id)buyClickTs;
- (void)setBuyClickTs:(id)arg1;
- (id)buyFinishedTs;
- (void)setBuyFinishedTs:(id)arg1;
- (id)buyProductId;
- (void)setBuyProductId:(id)arg1;
- (id)orderCurrencyType;
- (void)setOrderCurrencyType:(id)arg1;
- (id)payCurrencyType;
- (void)setPayCurrencyType:(id)arg1;
- (unsigned int)purchaseRet;
- (void)setPurchaseRet:(unsigned int)arg1;
- (unsigned int)verifyRet;
- (void)setVerifyRet:(unsigned int)arg1;
- (void).cxx_destruct;
@end

