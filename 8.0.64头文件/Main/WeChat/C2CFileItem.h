@interface C2CFileItem : NSObject
{
    BOOL _msgIsSend; // +0x8
    BOOL _fileIsUpload; // +0x9
    BOOL _isFromChatRoom; // +0xa
    unsigned short _fileType; // +0xc
    unsigned short _sendFileFromScene; // +0xe
    unsigned short _fileSendType; // +0x10
    unsigned long long _fileSize; // +0x18
    NSString * _fileExt; // +0x20
}
- (id)init;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned short)fileType;
- (void)setFileType:(unsigned short)arg1;
- (BOOL)msgIsSend;
- (void)setMsgIsSend:(BOOL)arg1;
- (BOOL)fileIsUpload;
- (void)setFileIsUpload:(BOOL)arg1;
- (unsigned short)sendFileFromScene;
- (void)setSendFileFromScene:(unsigned short)arg1;
- (unsigned short)fileSendType;
- (void)setFileSendType:(unsigned short)arg1;
- (BOOL)isFromChatRoom;
- (void)setIsFromChatRoom:(BOOL)arg1;
- (id)fileExt;
- (void)setFileExt:(id)arg1;
- (void).cxx_destruct;
@end
