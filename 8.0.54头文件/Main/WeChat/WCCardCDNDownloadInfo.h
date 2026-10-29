@interface WCCardCDNDownloadInfo : NSObject
{
    unsigned int _fileLength; // +0x8
    NSString * _fileId; // +0x10
    NSString * _aesKey; // +0x18
    NSString * _savePath; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failBlock; // +0x30
    CdnComMediaInfo * _cdnMediaInfo; // +0x38
}
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (unsigned int)fileLength;
- (void)setFileLength:(unsigned int)arg1;
- (id)savePath;
- (void)setSavePath:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)cdnMediaInfo;
- (void)setCdnMediaInfo:(id)arg1;
- (void).cxx_destruct;
@end

