@interface WCMemoryRecordManager : NSObject
{
    NSString * m_rootPath; // +0x8
    int m_recordMaxCount; // +0x10
    NSMutableArray * m_recordList; // +0x18
}
- (id)initWithRecordRootPath:(id)arg1 recordMaxCount:(int)arg2;
- (id)recordList;
- (id)getRecordByLaunchTime:(unsigned long long)arg1;
- (void)sortRecordList;
- (void)loadRecordList;
- (id)oldRecordListPath;
- (void)removeOldData;
- (void).cxx_destruct;
@end
