@interface UploadLoginFileManager : NSObject
{
    BOOL _isUploaded; // +0x8
    NSMutableArray * _logDirs; // +0x10
    NSString * _rootDir; // +0x18
    id /* block */ _callbakcblock; // +0x20
}
+ (id)sharedInstance;
- (id)init;
- (void)addLogDirName:(id)arg1;
- (void)uploadAllLogWithLogDirName:(id)arg1 withBlock:(id /* block */)arg2;
- (void)checkzipdataWithlogdir:(id)arg1;
- (void)uploadzipdata:(id)arg1 deletezipdir:(id)arg2 deleteLogdir:(id)arg3;
- (id)compressDir:(id)arg1;
- (id)readFileToData:(id)arg1;
- (id)getDeviceInfo;
- (void)httprequestWithUrl:(id)arg1 withPostData:(id)arg2 withCallback:(id /* block */)arg3;
- (void)deleteFileAtPath:(id)arg1;
- (void)deleteDirWithParentPath:(id)arg1;
- (id)logDirs;
- (void)setLogDirs:(id)arg1;
- (id)rootDir;
- (void)setRootDir:(id)arg1;
- (BOOL)isUploaded;
- (void)setIsUploaded:(BOOL)arg1;
- (id /* block */)callbakcblock;
- (void)setCallbakcblock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
