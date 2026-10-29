@interface MatrixMemoryFile : NSObject
{
    unsigned int m_dataVersion; // +0x8
    NSData * m_content; // +0x10
    memory_file * m_file; // +0x18
    NSRecursiveLock * m_lock; // +0x20
}
- (id)initWithPath:(id)arg1 version:(unsigned int)arg2;
- (void)dealloc;
- (BOOL)reloadData;
- (id)data;
- (BOOL)writeData:(id)arg1 flushToDisk:(BOOL)arg2;
- (void)clearData;
- (void).cxx_destruct;
@end

