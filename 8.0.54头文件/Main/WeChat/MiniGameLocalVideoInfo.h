@interface MiniGameLocalVideoInfo : NSObject <WCTTableCoding>
{
    BOOL _isValid; // +0x8
    unsigned int _userId; // +0xc
    unsigned int _createTime; // +0x10
    unsigned int _durationSec; // +0x14
    unsigned int _appVersion; // +0x18
    unsigned int _appState; // +0x1c
    unsigned int _isDevEdited; // +0x20
    NSString * _fileId; // +0x28
    NSString * _appId; // +0x30
    NSString * _appName; // +0x38
    NSString * _filePath; // +0x40
    NSString * _orgFilePath; // +0x48
    NSString * _coverPath; // +0x50
    NSString * _extJsonData; // +0x58
    NSString * _title; // +0x60
    NSString * _desc; // +0x68
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)fileId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_fileId;
+ (const void *)userId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_userId;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_appId;
+ (const void *)appName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_appName;
+ (const void *)filePath;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_filePath;
+ (const void *)orgFilePath;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_orgFilePath;
+ (const void *)coverPath;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_coverPath;
+ (const void *)extJsonData;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_extJsonData;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)durationSec;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_durationSec;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_title;
+ (const void *)desc;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_desc;
+ (const void *)appVersion;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_appVersion;
+ (const void *)appState;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_appState;
+ (const void *)isDevEdited;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_isDevEdited;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (void)__wcdb_index_16:(void *)arg1;
+ (void)__wcdb_index_17:(void *)arg1;
- (id)getAbsFilePathWithRelativePath:(id)arg1;
- (id)initWithVideoFile:(id)arg1 userId:(unsigned int)arg2;
- (BOOL)isValid;
- (id)absVideoFilePath;
- (id)absThumbPath;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (unsigned int)userId;
- (void)setUserId:(unsigned int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)orgFilePath;
- (void)setOrgFilePath:(id)arg1;
- (id)coverPath;
- (void)setCoverPath:(id)arg1;
- (id)extJsonData;
- (void)setExtJsonData:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)durationSec;
- (void)setDurationSec:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (unsigned int)appState;
- (void)setAppState:(unsigned int)arg1;
- (unsigned int)isDevEdited;
- (void)setIsDevEdited:(unsigned int)arg1;
- (void).cxx_destruct;
@end

