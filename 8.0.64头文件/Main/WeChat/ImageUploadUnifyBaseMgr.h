@interface ImageUploadUnifyBaseMgr : NSObject
{
    BOOL _bJustUploadDataWithoutMD5Hit; // +0x8
    id <UploadImageCDNMgrDelegate> _m_delegate; // +0x10
}
- (BOOL)IsUploading:(id)arg1;
- (unsigned int)GetUploadPercent:(id)arg1;
- (void)StartUploadImage:(id)arg1;
- (void)StopUploadImage:(id)arg1;
- (void)StopUploadImageByUsrName:(id)arg1;
- (void)CheckQueue;
- (BOOL)bJustUploadDataWithoutMD5Hit;
- (void)setBJustUploadDataWithoutMD5Hit:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
