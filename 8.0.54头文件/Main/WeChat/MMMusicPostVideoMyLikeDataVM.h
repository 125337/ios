@interface MMMusicPostVideoMyLikeDataVM : MMObject <MMMusicDataVM>
{
    NSMutableArray * _arrData; // +0x8
    id <MMMusicPostVideoMyLikeDataVMDelegate> _delegate; // +0x10
    NSData * _lastBuffer; // +0x18
}
- (id)init;
- (void)loadFirstPageData;
- (void)loadNextPageData;
- (void)loadData;
- (void)onServerGetDataArr:(id)arg1 continueFlag:(BOOL)arg2;
- (long long)numberOfItemsInSection;
- (id)dataOfIndex:(long long)arg1;
- (unsigned long long)indexOfData:(id)arg1;
- (id)getDataById:(id)arg1;
- (void)notifyOnDataChanged:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end

