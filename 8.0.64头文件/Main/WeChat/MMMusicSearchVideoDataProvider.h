@interface MMMusicSearchVideoDataProvider : NSObject
{
    NSMutableArray * _arrData; // +0x8
    NSString * m_lastNsInput; // +0x10
    NSString * _latestRequestID; // +0x18
    NSData * _lastBuffer; // +0x20
    id <MMMusicSearchVideoDataProviderDelegate> _delegate; // +0x28
}
- (id)init;
- (long long)numberOfItemsInSection;
- (id)cellDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfData:(id)arg1;
- (id)getDataById:(id)arg1;
- (void)clearAllData;
- (void)searchWithInput:(id)arg1;
- (void)searchWithInputNextPage;
- (void)loadData:(id)arg1 isFirstPage:(BOOL)arg2;
- (void)notifyOnDataChanged:(BOOL)arg1 isClearAll:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
