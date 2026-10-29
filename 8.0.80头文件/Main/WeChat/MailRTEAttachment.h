@interface MailRTEAttachment : RTETextAttachment <IQQMailExt>
{
    unsigned int _dataStatus; // +0x8
    unsigned int _dataSize; // +0xc
    NSString * _objectId; // +0x10
    NSString * _objectName; // +0x18
    NSString * _imagePath; // +0x20
    NSString * _attachID; // +0x28
}
+ (id)DataWriteToTempFile:(id)arg1;
+ (id)getTempFilePath;
+ (id)UIImageWriteToTempFile:(id)arg1;
- (id)init;
- (unsigned int)type;
- (void)configFrameWithWidth:(double)arg1;
- (void)configAttachmentWithImage:(id)arg1;
- (void)configAttachmentWithAsset:(id)arg1 completion:(id /* block */)arg2;
- (id)objectString;
- (_NSRange)rangeInContent:(id)arg1;
- (double)getHeightOfAttachment;
- (void)OnUploadData:(id)arg1 filename:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)objectName;
- (void)setObjectName:(id)arg1;
- (unsigned int)dataStatus;
- (void)setDataStatus:(unsigned int)arg1;
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id)attachID;
- (void)setAttachID:(id)arg1;
- (unsigned int)dataSize;
- (void)setDataSize:(unsigned int)arg1;
- (void).cxx_destruct;
@end
