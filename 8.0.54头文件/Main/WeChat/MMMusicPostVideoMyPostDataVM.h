@interface MMMusicPostVideoMyPostDataVM : MMObject <MMMusicDataVM>
{
    NSString * finderUsername; // +0x8
    NSMutableArray * _arrData; // +0x10
    id <MMMusicPostVideoMyPostDataVMDelegate> _delegate; // +0x18
    unsigned long long _maxId; // +0x20
    NSData * _lastBuffer; // +0x28
}
- (id)initWithUsername:(id)arg1;
- (void)loadFirstPageData;
- (void)loadNextPageData;
- (void)loadData:(BOOL)arg1;
- (void)onServerGetDataArr:(id)arg1 continueFlag:(BOOL)arg2;
- (long long)numberOfItemsInSection;
- (id)dataOfIndex:(long long)arg1;
- (unsigned long long)indexOfData:(id)arg1;
- (id)getDataById:(id)arg1;
- (void)notifyOnDataChanged:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)maxId;
- (void)setMaxId:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end

