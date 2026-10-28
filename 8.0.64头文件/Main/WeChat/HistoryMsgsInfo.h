@interface HistoryMsgsInfo : NSObject
{
    BOOL _isInviter; // +0x8
    unsigned int _fileLength; // +0xc
    unsigned int _msgCount; // +0x10
    unsigned int _fileLengthNew; // +0x14
    unsigned int _msgCountNew; // +0x18
    NSString * _fromUsername; // +0x20
    unsigned long long _historyId; // +0x28
    NSString * _linkName; // +0x30
    NSString * _titleName; // +0x38
    NSString * _linkContent; // +0x40
    NSString * _fileId; // +0x48
    NSString * _aeskey; // +0x50
    NSString * _fileMd5; // +0x58
    NSString * _titleNameNew; // +0x60
    NSString * _linkContentNew; // +0x68
    NSString * _fileIdNew; // +0x70
    NSString * _aeskeyNew; // +0x78
    NSString * _fileMd5New; // +0x80
}
- (id)initWithLinkNode:(XmlReaderNode_t *)arg1 linkName:(id)arg2 type:(id)arg3;
- (void)parseLinkNode:(XmlReaderNode_t *)arg1;
- (void)parseNewLinkNode:(XmlReaderNode_t *)arg1;
- (BOOL)isValidate;
- (void)disableOldHistoryInfo;
- (BOOL)dontHaveFileID;
- (BOOL)justHaveOldFileID;
- (BOOL)justHaveNewFileID;
- (BOOL)haveBothFileID;
- (id)fromUsername;
- (void)setFromUsername:(id)arg1;
- (BOOL)isInviter;
- (void)setIsInviter:(BOOL)arg1;
- (unsigned long long)historyId;
- (void)setHistoryId:(unsigned long long)arg1;
- (id)linkName;
- (void)setLinkName:(id)arg1;
- (id)titleName;
- (void)setTitleName:(id)arg1;
- (id)linkContent;
- (void)setLinkContent:(id)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)aeskey;
- (void)setAeskey:(id)arg1;
- (id)fileMd5;
- (void)setFileMd5:(id)arg1;
- (unsigned int)fileLength;
- (void)setFileLength:(unsigned int)arg1;
- (unsigned int)msgCount;
- (void)setMsgCount:(unsigned int)arg1;
- (id)titleNameNew;
- (void)setTitleNameNew:(id)arg1;
- (id)linkContentNew;
- (void)setLinkContentNew:(id)arg1;
- (id)fileIdNew;
- (void)setFileIdNew:(id)arg1;
- (id)aeskeyNew;
- (void)setAeskeyNew:(id)arg1;
- (id)fileMd5New;
- (void)setFileMd5New:(id)arg1;
- (unsigned int)fileLengthNew;
- (void)setFileLengthNew:(unsigned int)arg1;
- (unsigned int)msgCountNew;
- (void)setMsgCountNew:(unsigned int)arg1;
- (void).cxx_destruct;
@end
