@interface MMImageDetectContext : NSObject
{
    unsigned int _dataType; // +0x8
    unsigned int _businessType; // +0xc
    unsigned int _svrScene; // +0x10
    unsigned long long _sessionID; // +0x18
    CMessageWrap * _msgWrap; // +0x20
    WCMediaItem * _snsMediaItem; // +0x28
    NSString * _imageFilePath; // +0x30
    MMImageDetectMediaInfo * _detectMediaInfo; // +0x38
}
- (id)init;
- (id)generateImageInfoList:(id)arg1;
- (unsigned long long)sessionID;
- (void)setSessionID:(unsigned long long)arg1;
- (unsigned int)dataType;
- (void)setDataType:(unsigned int)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (unsigned int)svrScene;
- (void)setSvrScene:(unsigned int)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)snsMediaItem;
- (void)setSnsMediaItem:(id)arg1;
- (id)imageFilePath;
- (void)setImageFilePath:(id)arg1;
- (id)detectMediaInfo;
- (void)setDetectMediaInfo:(id)arg1;
- (void).cxx_destruct;
@end

