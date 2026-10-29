@interface VoIPMPSelectFileResult : NSObject
{
    NSString * _filePath; // +0x8
    NSString * _fileExt; // +0x10
    NSString * _fileName; // +0x18
    NSString * _fileMd5; // +0x20
}
+ (id)makeWithFilePath:(id)arg1 fileExt:(id)arg2 fileName:(id)arg3 fileMd5:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)fileExt;
- (void)setFileExt:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)fileMd5;
- (void)setFileMd5:(id)arg1;
- (void).cxx_destruct;
@end
