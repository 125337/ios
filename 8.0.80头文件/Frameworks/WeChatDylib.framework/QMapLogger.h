@interface QMapLogger : NSObject
{
    BOOL _logOn; // +0x8
    NSString * _fileDirPath; // +0x10
    NSDateFormatter * _dateFormatterForMMddHHmmss; // +0x18
    NSString * _fileTextPath; // +0x20
    NSFileHandle * _selfHandle; // +0x28
}
+ (id)sharedInstance;
- (id)dateByMMddHHmmss;
- (id)logWithText:(id)arg1 level:(id)arg2 event:(id)arg3 levelNumber:(int)arg4;
- (id)init;
- (void)writeLogText:(id)arg1;
- (void)deleteExpiredFiles;
- (id)fileDirPath;
- (id)dateFormatterForMMddHHmmss;
- (void)setDateFormatterForMMddHHmmss:(id)arg1;
- (id)fileTextPath;
- (void)setFileTextPath:(id)arg1;
- (id)selfHandle;
- (void)setSelfHandle:(id)arg1;
- (BOOL)logOn;
- (void)setLogOn:(BOOL)arg1;
- (void).cxx_destruct;
@end
