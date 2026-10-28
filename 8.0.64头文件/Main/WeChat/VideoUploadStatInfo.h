@interface VideoUploadStatInfo : NSObject <NSCoding>
{
    BOOL _sourceVideoContainsWXTag; // +0x8
    unsigned int _uploadStartTime; // +0xc
    unsigned int _cpStatus; // +0x10
    unsigned int _sendScene; // +0x14
    NSString * _toUsername; // +0x18
    NSString * _fileId; // +0x20
    NSString * _videoNewMd5; // +0x28
    NSString * _msgSource; // +0x30
    NSString * _snsCommitId; // +0x38
    VideoParamsSource * _oriVideoParamsSource; // +0x40
    VideoParamsSource * _cpVideoParamsSource; // +0x48
    NSString * _cdnIp; // +0x50
    NSString * _snsUrl; // +0x58
    VideoParamsInfo * _srcVideoParams; // +0x60
    VideoParamsInfo * _cpVideoParams; // +0x68
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)mergeInfoFromUploadTaskInfo:(id)arg1;
- (void)mergeInfoFromTaskInfo:(id)arg1;
- (void)mergeInfoFromSnsTaskInfo:(id)arg1;
- (unsigned int)getUploadSpeed:(unsigned int)arg1;
- (id)getBigVideoStatInfo;
- (void)reportKV;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)videoNewMd5;
- (void)setVideoNewMd5:(id)arg1;
- (id)msgSource;
- (void)setMsgSource:(id)arg1;
- (id)snsCommitId;
- (void)setSnsCommitId:(id)arg1;
- (unsigned int)uploadStartTime;
- (void)setUploadStartTime:(unsigned int)arg1;
- (id)oriVideoParamsSource;
- (void)setOriVideoParamsSource:(id)arg1;
- (id)cpVideoParamsSource;
- (void)setCpVideoParamsSource:(id)arg1;
- (unsigned int)cpStatus;
- (void)setCpStatus:(unsigned int)arg1;
- (unsigned int)sendScene;
- (void)setSendScene:(unsigned int)arg1;
- (id)cdnIp;
- (void)setCdnIp:(id)arg1;
- (id)snsUrl;
- (void)setSnsUrl:(id)arg1;
- (BOOL)sourceVideoContainsWXTag;
- (void)setSourceVideoContainsWXTag:(BOOL)arg1;
- (id)srcVideoParams;
- (void)setSrcVideoParams:(id)arg1;
- (id)cpVideoParams;
- (void)setCpVideoParams:(id)arg1;
- (void).cxx_destruct;
@end
