@interface WCMultiGiftView : MMUIView <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isHide; // +0x8
    double _maxWidth; // +0x10
    double _minHeight; // +0x18
    WCGiftCardData * _giftCardData; // +0x20
    id <WCMultiGiftDelegate> _delegate; // +0x28
    MMTableView * _giftTableView; // +0x30
    UIButton * _footerButton; // +0x38
    NSArray * _acceptedCardList; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configTableSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setGiftCardData:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)createTableViewFooterView;
- (void)doHideLogic;
- (id)giftTableView;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (double)minHeight;
- (void)setMinHeight:(double)arg1;
- (id)giftCardData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setGiftTableView:(id)arg1;
- (id)footerButton;
- (void)setFooterButton:(id)arg1;
- (id)acceptedCardList;
- (void)setAcceptedCardList:(id)arg1;
- (BOOL)isHide;
- (void)setIsHide:(BOOL)arg1;
- (void).cxx_destruct;
@end
