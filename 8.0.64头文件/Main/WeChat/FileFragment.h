@interface FileFragment : NSObject
{
    unsigned int _m_packageIndex; // +0x8
    unsigned int _m_totalPackage; // +0xc
    NSString * _m_filePath; // +0x10
    NSData * _m_fragmentData; // +0x18
    unsigned long long _m_uploadId; // +0x20
}
- (id)initWithPath:(id)arg1 fragmentData:(id)arg2 packageIndex:(unsigned int)arg3 totalPackage:(unsigned int)arg4 uploadId:(unsigned long long)arg5;
- (unsigned long long)size;
- (id)m_filePath;
- (void)setM_filePath:(id)arg1;
- (id)m_fragmentData;
- (void)setM_fragmentData:(id)arg1;
- (unsigned int)m_packageIndex;
- (void)setM_packageIndex:(unsigned int)arg1;
- (unsigned int)m_totalPackage;
- (void)setM_totalPackage:(unsigned int)arg1;
- (unsigned long long)m_uploadId;
- (void)setM_uploadId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
