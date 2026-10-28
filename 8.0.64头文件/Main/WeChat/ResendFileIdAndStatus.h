@interface ResendFileIdAndStatus : NSObject <PBCoding>
{
    unsigned int _fileStatus; // +0x8
    unsigned int _isThumb; // +0xc
    int _dataType; // +0x10
    NSString * _fileId; // +0x18
    NSString * _localDataId; // +0x20
    NSString * _md5; // +0x28
    NSString * _dataFmt; // +0x30
    NSString * _clientMsgId; // +0x38
    NSString * _fileUrl; // +0x40
    NSString * _fileAesKey; // +0x48
    NSString * _streamId; // +0x50
    NSString * _filePath; // +0x58
}
+ (void)PBArrayAdd_fileId;
+ (void)PBArrayAdd_fileStatus;
+ (void)PBArrayAdd_localDataId;
+ (void)PBArrayAdd_isThumb;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_dataType;
+ (void)PBArrayAdd_dataFmt;
+ (void)PBArrayAdd_clientMsgId;
+ (void)PBArrayAdd_fileUrl;
+ (void)PBArrayAdd_fileAesKey;
+ (void)PBArrayAdd_streamId;
+ (void)PBArrayAdd_filePath;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (unsigned int)fileStatus;
- (void)setFileStatus:(unsigned int)arg1;
- (id)localDataId;
- (void)setLocalDataId:(id)arg1;
- (unsigned int)isThumb;
- (void)setIsThumb:(unsigned int)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (int)dataType;
- (void)setDataType:(int)arg1;
- (id)dataFmt;
- (void)setDataFmt:(id)arg1;
- (id)clientMsgId;
- (void)setClientMsgId:(id)arg1;
- (id)fileUrl;
- (void)setFileUrl:(id)arg1;
- (id)fileAesKey;
- (void)setFileAesKey:(id)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void).cxx_destruct;
@end
