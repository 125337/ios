@interface ILinkDeviceData : NSObject
{
    int _cdnFileType; // +0x8
    int _cdnAppType; // +0xc
    unsigned long long _scene; // +0x10
    NSString * _encryptedFilePath; // +0x18
    HwClientEncryptFileInfo * _clientEncryptInfo; // +0x20
    CMessageWrap * _messageWrap; // +0x28
}
- (id)initWithMessageWrap:(id)arg1;
- (void)setParams;
- (id)getMessageWrap;
- (id)getDeviceMsg;
- (id)musicInfo;
- (id)locationInfo;
- (id)urlInfo;
- (id)fileInfo;
- (id)imageInfo;
- (id)videoInfo;
- (id)getMsgDataPath;
- (BOOL)shouldUploadToCDN;
- (id)getMsgDescription;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)encryptedFilePath;
- (void)setEncryptedFilePath:(id)arg1;
- (int)cdnFileType;
- (void)setCdnFileType:(int)arg1;
- (int)cdnAppType;
- (void)setCdnAppType:(int)arg1;
- (id)clientEncryptInfo;
- (void)setClientEncryptInfo:(id)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (void).cxx_destruct;
@end

