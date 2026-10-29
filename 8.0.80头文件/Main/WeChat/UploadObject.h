@interface UploadObject : NSObject <NSObject>
{
    FileFragment * _m_filefragment; // +0x8
    UploadElement * _m_uploadElement; // +0x10
}
- (id)initWithUploadElement:(id)arg1 fileFragment:(id)arg2;
- (id)m_filefragment;
- (void)setM_filefragment:(id)arg1;
- (id)m_uploadElement;
- (void)setM_uploadElement:(id)arg1;
- (void).cxx_destruct;
@end
