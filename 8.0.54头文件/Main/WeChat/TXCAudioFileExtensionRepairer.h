@interface TXCAudioFileExtensionRepairer : NSObject
{
    NSString * _rawFilePath; // +0x8
    NSFileManager * _fileManager; // +0x10
    NSString * _hardLinkFilePath; // +0x18
}
- (id)initWithFilePath:(id)arg1;
- (void)dealloc;
- (void)setRawFilePath:(id)arg1;
- (id)repairedFilePath;
- (id)repairRawFilePath;
- (void)deleteHardLinkFile;
- (void)deleteFile:(id)arg1;
- (BOOL)isValidFilePath:(id)arg1;
- (BOOL)needRepair:(id)arg1;
- (BOOL)canDelete:(id)arg1;
- (BOOL)needUpdateRawFilePath:(id)arg1;
- (id)repairFilePathInternal;
- (id)getFileType:(id)arg1;
- (id)removeSymbolicLink:(id)arg1;
- (id)convertToRegularFile:(id)arg1;
- (id)createHardLinkFileWithExtension:(id)arg1;
- (id)rawFilePath;
- (id)fileManager;
- (void)setFileManager:(id)arg1;
- (id)hardLinkFilePath;
- (void)setHardLinkFilePath:(id)arg1;
- (void).cxx_destruct;
@end

