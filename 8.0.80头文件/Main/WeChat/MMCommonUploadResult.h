@interface MMCommonUploadResult : NSObject
{
    NSString * _uploadId; // +0x8
    NSString * _fileId; // +0x10
    NSString * _aesKey; // +0x18
    NSString * _imgInfoBuffer; // +0x20
    unsigned long long _uploadSize; // +0x28
    NSString * _bigFileSignature; // +0x30
}
- (id)uploadId;
- (void)setUploadId:(id)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)imgInfoBuffer;
- (void)setImgInfoBuffer:(id)arg1;
- (unsigned long long)uploadSize;
- (void)setUploadSize:(unsigned long long)arg1;
- (id)bigFileSignature;
- (void)setBigFileSignature:(id)arg1;
- (void).cxx_destruct;
@end
