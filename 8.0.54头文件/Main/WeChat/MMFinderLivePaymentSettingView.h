@interface MMFinderLivePaymentSettingView : MMPageSheetBaseView <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, MMFinderLivePaymentSettingInputViewDelegate>
{
    BOOL _forceDarkMode; // +0x8
    unsigned int _chargeUnitPriceInWecoin; // +0xc
    unsigned int _curPriceInWecoin; // +0x10
    id <MMFinderLivePaymentSettingViewDelegate> _operationDelegate; // +0x18
    UIView * _contentView; // +0x20
    MMUIButton * _closeButton; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMTableView * _priceInWecoinTableView; // +0x38
    OrderedDictionary * _priceInWecoinOptions; // +0x40
    MMFinderLivePaymentSettingInputView * _inputView; // +0x48
}
- (id)initWithCurPriceInWecoin:(unsigned int)arg1 forceDarkMode:(BOOL)arg2;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)initDefaultData;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)setExtraCellLineHidden:(id)arg1;
- (id)getColorProxy;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)onInputPriceInWecoin:(unsigned int)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)closeAction;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)priceInWecoinTableView;
- (void)setPriceInWecoinTableView:(id)arg1;
- (id)priceInWecoinOptions;
- (void)setPriceInWecoinOptions:(id)arg1;
- (unsigned int)chargeUnitPriceInWecoin;
- (void)setChargeUnitPriceInWecoin:(unsigned int)arg1;
- (unsigned int)curPriceInWecoin;
- (void)setCurPriceInWecoin:(unsigned int)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (BOOL)forceDarkMode;
- (void)setForceDarkMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

