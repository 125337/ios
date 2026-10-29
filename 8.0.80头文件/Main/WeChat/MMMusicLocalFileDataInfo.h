@interface MMMusicLocalFileDataInfo : MMObject
{
    MMListenLocalFileInfo * _tingFileInfo; // +0x8
    MMMusicInfo * _musicInfo; // +0x10
    unsigned long long _source; // +0x18
    MMMultipleMusicViewController * _vcDelegate; // +0x20
    FileDetailLogicController * _baseLogicController; // +0x28
    NSString * _filePath; // +0x30
    NSString * _fileName; // +0x38
}
+ (BOOL)canUseMusicPlayerWithFavData:(id)arg1;
- (id)initFromMsgWrap:(id)arg1;
- (id)initFromFavItem:(id)arg1 andFavData:(id)arg2;
- (id)initFromGroupNoticeItem:(id)arg1 favData:(id)arg2;
- (id)initFromRecordDataWrap:(id)arg1;
- (id)initFromEmailAttach:(id)arg1 AndEmailID:(id)arg2;
- (id)initFromFilePath:(id)arg1 fileName:(id)arg2 fileSize:(unsigned int)arg3;
- (void)initMusicInfo;
- (void)setVcDelegate:(id)arg1;
- (id)tingFileInfo;
- (void)setTingFileInfo:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (id)vcDelegate;
- (id)baseLogicController;
- (void)setBaseLogicController:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (void).cxx_destruct;
@end
