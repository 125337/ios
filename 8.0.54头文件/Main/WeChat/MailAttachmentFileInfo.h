@interface MailAttachmentFileInfo : NSObject
{
    unsigned int startPos; // +0x8
    unsigned int totalSize; // +0xc
    NSString * clientID; // +0x10
    NSString * localPath; // +0x18
    NSString * fileName; // +0x20
    NSString * attachID; // +0x28
}
- (id)clientID;
- (void)setClientID:(id)arg1;
- (id)localPath;
- (void)setLocalPath:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)attachID;
- (void)setAttachID:(id)arg1;
- (unsigned int)startPos;
- (void)setStartPos:(unsigned int)arg1;
- (unsigned int)totalSize;
- (void)setTotalSize:(unsigned int)arg1;
- (void).cxx_destruct;
@end

