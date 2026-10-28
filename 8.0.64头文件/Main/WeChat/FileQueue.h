@interface FileQueue : NSObject
{
    NSString * m_nsFilePath; // +0x8
    int m_codingMethod; // +0x10
    Class m_elementClass; // +0x18
}
- (id)initWithNSCodingFilePath:(id)arg1;
- (void)dealloc;
- (id)getArchiveTarget;
- (void)setUnArchiveResult:(id)arg1;
- (BOOL)syncToFile;
- (BOOL)push:(id)arg1;
- (BOOL)modifyTop:(id)arg1;
- (id)getTop;
- (BOOL)pop;
- (id)getAll;
- (BOOL)clear;
- (void).cxx_destruct;
@end
