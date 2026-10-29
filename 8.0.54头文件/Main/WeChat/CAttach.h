@interface CAttach : NSObject <NSCoding>
{
    unsigned int m_uiFileType; // +0x8
    NSMutableArray * m_arrFileList; // +0x10
    NSString * m_nsAttachID; // +0x18
    BOOL isCanPreview; // +0x20
    BOOL _isBigAttach; // +0x21
    unsigned int size; // +0x24
    NSString * name; // +0x28
    NSString * path; // +0x30
    NSString * _downloadUrl; // +0x38
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)description;
- (id)GetAttachPic;
- (unsigned int)GetPreviewType;
- (id)GetAttachPath:(id)arg1;
- (id)GetAttachTempPath:(id)arg1;
- (id)GetAttachIDFromPath;
- (id)name;
- (void)setName:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (BOOL)isCanPreview;
- (void)setIsCanPreview:(BOOL)arg1;
- (unsigned int)size;
- (void)setSize:(unsigned int)arg1;
- (unsigned int)m_uiFileType;
- (void)setM_uiFileType:(unsigned int)arg1;
- (id)m_arrFileList;
- (void)setM_arrFileList:(id)arg1;
- (id)m_nsAttachID;
- (void)setM_nsAttachID:(id)arg1;
- (BOOL)isBigAttach;
- (void)setIsBigAttach:(BOOL)arg1;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg1;
- (void).cxx_destruct;
@end

