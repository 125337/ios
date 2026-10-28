@interface WCFileBrowseInfo : NSObject <WCTTableCoding, PBCoding>
{
    BOOL _bUserOpen; // +0x8
    unsigned int _msgLocalID; // +0xc
    unsigned int _favID; // +0x10
    unsigned int _favMsgLocalID; // +0x14
    unsigned int _typeDownloaded; // +0x18
    NSString * _desTitle; // +0x20
    NSString * _fromUserName; // +0x28
    NSString * _fromUserNickName; // +0x30
    NSString * _fromChatName; // +0x38
    NSString * _fromChatNickName; // +0x40
    NSString * _timeString; // +0x48
    unsigned long long _msgWrapSvrID; // +0x50
    unsigned long long _fileTime; // +0x58
    unsigned long long _fileSize; // +0x60
    NSString * _fileExt; // +0x68
    NSString * _fileMD5; // +0x70
    unsigned long long _enumDataType; // +0x78
    FavDataItemWrap * _favDataItemWrap; // +0x80
    NSString * _fileName; // +0x88
    NSString * _filePath; // +0x90
    NSData * _fileData; // +0x98
    NSData * _fileThumb; // +0xa0
}
+ (void)PBArrayAdd_desTitle;
+ (void)PBArrayAdd_fromUserName;
+ (void)PBArrayAdd_fromChatName;
+ (void)PBArrayAdd_msgWrapSvrID;
+ (void)PBArrayAdd_fileTime;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_fileExt;
+ (void)PBArrayAdd_msgLocalID;
+ (void)PBArrayAdd_fileMD5;
+ (void)PBArrayAdd_typeDownloaded;
+ (void)PBArrayAdd_bUserOpen;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)desTitle;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_desTitle;
+ (const void *)fromUserName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_fromUserName;
+ (const void *)fromChatName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_fromChatName;
+ (const void *)msgWrapSvrID;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_msgWrapSvrID;
+ (const void *)fileTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_fileTime;
+ (const void *)fileSize;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_fileSize;
+ (const void *)fileExt;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_fileExt;
+ (const void *)msgLocalID;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_msgLocalID;
+ (const void *)fileMD5;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_fileMD5;
+ (const void *)typeDownloaded;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_typeDownloaded;
+ (const void *)bUserOpen;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_bUserOpen;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (void)__wcdb_index_12:(void *)arg1;
+ (void)__wcdb_index_13:(void *)arg1;
+ (BOOL)browseInfoIsValid:(id)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (id)description;
- (BOOL)isMatchedSearchText:(id)arg1;
- (void)trySetFromUserNickName;
- (void)trySetFromChatNickName;
- (BOOL)isSameChatLogFileBrowseInfo:(id)arg1;
- (BOOL)isSameFavFileBrowseInfo:(id)arg1;
- (id)desTitle;
- (void)setDesTitle:(id)arg1;
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (id)fromUserNickName;
- (void)setFromUserNickName:(id)arg1;
- (id)fromChatName;
- (void)setFromChatName:(id)arg1;
- (id)fromChatNickName;
- (void)setFromChatNickName:(id)arg1;
- (id)timeString;
- (void)setTimeString:(id)arg1;
- (unsigned long long)msgWrapSvrID;
- (void)setMsgWrapSvrID:(unsigned long long)arg1;
- (unsigned long long)fileTime;
- (void)setFileTime:(unsigned long long)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (id)fileExt;
- (void)setFileExt:(id)arg1;
- (unsigned int)msgLocalID;
- (void)setMsgLocalID:(unsigned int)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (unsigned long long)enumDataType;
- (void)setEnumDataType:(unsigned long long)arg1;
- (unsigned int)favID;
- (void)setFavID:(unsigned int)arg1;
- (unsigned int)favMsgLocalID;
- (void)setFavMsgLocalID:(unsigned int)arg1;
- (id)favDataItemWrap;
- (void)setFavDataItemWrap:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)fileData;
- (void)setFileData:(id)arg1;
- (id)fileThumb;
- (void)setFileThumb:(id)arg1;
- (unsigned int)typeDownloaded;
- (void)setTypeDownloaded:(unsigned int)arg1;
- (BOOL)bUserOpen;
- (void)setBUserOpen:(BOOL)arg1;
- (void).cxx_destruct;
@end
