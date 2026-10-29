@interface DataReportNewUBACacheWCDB : NSObject
{
    WCTDatabase * m_dataBase; // +0x8
    WCTTable * m_table; // +0x10
}
- (void)reset;
- (void)close;
- (id)genDBPath;
- (void)save:(id)arg1;
- (void)clear;
- (id)query;
- (void).cxx_destruct;
@end

