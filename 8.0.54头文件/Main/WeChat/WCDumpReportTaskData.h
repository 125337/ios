@interface WCDumpReportTaskData : NSObject
{
    NSArray * m_uploadFilesArray; // +0x8
    unsigned long long m_dumpType; // +0x10
}
- (id)description;
- (id)m_uploadFilesArray;
- (void)setM_uploadFilesArray:(id)arg1;
- (unsigned long long)m_dumpType;
- (void)setM_dumpType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

