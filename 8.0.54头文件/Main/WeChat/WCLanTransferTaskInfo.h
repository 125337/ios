@interface WCLanTransferTaskInfo : NSObject <PBCoding>
{
    NSString * _lanClientMsgID; // +0x8
    NSString * _toUser; // +0x10
    NSString * _filePath; // +0x18
    NSString * _lanInfo; // +0x20
    unsigned long long _fileSize; // +0x28
    CMessageWrap * _msgWrap; // +0x30
}
+ (void)PBArrayAdd_lanClientMsgID;
+ (void)PBArrayAdd_toUser;
+ (void)PBArrayAdd_filePath;
+ (void)PBArrayAdd_lanInfo;
+ (void)PBArrayAdd_fileSize;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)lanClientMsgID;
- (void)setLanClientMsgID:(id)arg1;
- (id)toUser;
- (void)setToUser:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)lanInfo;
- (void)setLanInfo:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (void).cxx_destruct;
@end

