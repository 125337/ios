@interface TencentIndoorRoadFileManager : NSObject
{
    NSString * _roadRootPath; // +0x8
    NSString * _destPath; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (id)getDataVersionWithBuildID:(id)arg1;
- (id)getUnzipFilePath;
- (BOOL)saveIndoorRoadData:(id)arg1 withBuildid:(id)arg2;
- (void)deletWithPath:(id)arg1;
- (void)deletOldVersionData:(id)arg1 curVersion:(int)arg2;
- (void)writeDataToFile:(id)arg1 filePath:(id)arg2;
- (id)roadRootPath;
- (void)setRoadRootPath:(id)arg1;
- (id)destPath;
- (void)setDestPath:(id)arg1;
- (void).cxx_destruct;
@end

