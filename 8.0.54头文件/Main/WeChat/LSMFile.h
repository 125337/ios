@interface LSMFile : NSObject
{
    BOOL m_isReadOnly; // +0x8
    NSString * m_path; // +0x10
    NSString * m_relativePath; // +0x18
    int m_fd; // +0x20
    unsigned long long m_offset; // +0x28
    unsigned long long m_dataSize; // +0x30
    void * m_dic; // +0x38
    BOOL m_hasBeenFullWriteBack; // +0x40
    BOOL m_hasLoadedFromFile; // +0x41
    unsigned int _m_index; // +0x44
}
- (id)initWithPath:(id)arg1 readOnly:(BOOL)arg2;
- (id)initWithClone:(id)arg1 path:(id)arg2;
- (void)dealloc;
- (BOOL)open:(BOOL)arg1;
- (id)cloneToPath:(id)arg1;
- (BOOL)rename:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)relativePath;
- (BOOL)isFileValid;
- (void)setReadOnly;
- (BOOL)hasLoadedFromFile;
- (void)tryLoadFromFile;
- (LSMFileItem *)writeData:(id)arg1 toFile:(id)arg2;
- (vector<std::pair<LSMFileItem *, NSData *__unsafe_unretained>, std::allocator<std::pair<LSMFileItem *, NSData *__unsafe_unretained>>>)writeDatas:(id)arg1 toFiles:(id)arg2;
- (id)dataOfFile:(id)arg1 itemWrap:(LSMFileItem * *)arg2;
- (BOOL)deleteDataOfFile:(id)arg1;
- (LSMFileItem *)fileItemOfFile:(id)arg1;
- (id)allKeys;
- (id)allNonEmptyKeys:(id)arg1;
- (unsigned long long)fileCount;
- (unsigned long long)fileSize;
- (unsigned long long)deadStoreSize;
- (unsigned long long)deadStoreSizeWithHandledKeys:(id)arg1;
- (void)recaculateDeadStoreSize;
- (BOOL)compactToFile:(id)arg1 handledKeys:(id)arg2;
- (unsigned int)m_index;
- (void)setM_index:(unsigned int)arg1;
- (void).cxx_destruct;
@end

