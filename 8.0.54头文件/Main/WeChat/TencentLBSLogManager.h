@interface TencentLBSLogManager : NSObject
{
    NSString * _appleDataPath; // +0x8
    NSString * _tencentDataPath; // +0x10
    NSString * _badDataPath; // +0x18
    NSString * _calmanPath; // +0x20
}
+ (id)sharedInstance;
- (id)init;
- (void)createFileAtPath:(id)arg1;
- (void)deleteFileAtPath:(id)arg1;
- (void)writeDataToFile:(id)arg1 filePath:(id)arg2;
- (id)readFileToData:(id)arg1;
- (id)getAllLocationData;
- (void)newFile;
- (void)writeLogToFile:(id)arg1 wifiMac:(id)arg2 wifiName:(id)arg3;
- (void)writeAppleToFile:(id)arg1 wifiMac:(id)arg2 wifiName:(id)arg3;
- (void)writeBadLocationToFile:(id)arg1 wifiMac:(id)arg2 wifiName:(id)arg3;
- (void)writeCalmanDataToFile:(id)arg1;
- (void)upLoadLogData:(id)arg1;
- (void)upLoadLogData;
- (id)appleDataPath;
- (void)setAppleDataPath:(id)arg1;
- (id)tencentDataPath;
- (void)setTencentDataPath:(id)arg1;
- (id)badDataPath;
- (void)setBadDataPath:(id)arg1;
- (id)calmanPath;
- (void)setCalmanPath:(id)arg1;
- (void).cxx_destruct;
@end

