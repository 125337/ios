@interface MMMetricsNetworkDB : NSObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_tableNetworkSample; // +0x10
    WCTTable * m_tableStackInfo; // +0x18
    WCTTable * m_tableImageInfo; // +0x20
    WCTTable * m_tableExternalSymbol; // +0x28
}
- (id)initWithDBPath:(id)arg1;
- (void)closeDB;
- (void)setupTable;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)vacuumCleaner;
- (BOOL)runTransaction:(id /* block */)arg1;
- (BOOL)insertNetworkSamples:(id)arg1;
- (id)getNetworkSamplesFrom:(double)arg1 to:(double)arg2;
- (BOOL)insertImageInfos:(id)arg1;
- (id)getAllImageInfos;
- (BOOL)insertExternalSymbols:(id)arg1;
- (id)getExternalSymbolName:(unsigned long long)arg1;
- (void)updateExternalSymbolNames:(id)arg1;
- (void).cxx_destruct;
@end
