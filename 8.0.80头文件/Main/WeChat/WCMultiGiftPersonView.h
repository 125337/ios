@interface WCMultiGiftPersonView : MMUIView <UITableViewDelegate, UITableViewDataSource>
{
    double _maxWidth; // +0x8
    double _minHeight; // +0x10
    WCGiftCardData * _giftCardData; // +0x18
    MMTableView * _giftTableView; // +0x20
    NSArray * _accepterList; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configTableSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setGiftCardData:(id)arg1;
- (id)createTableViewHeaderView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)giftTableView;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (double)minHeight;
- (void)setMinHeight:(double)arg1;
- (id)giftCardData;
- (void)setGiftTableView:(id)arg1;
- (id)accepterList;
- (void)setAccepterList:(id)arg1;
- (void).cxx_destruct;
@end
