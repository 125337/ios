@interface ChatLogMiddleImageTaskInfo : NSObject <PBCoding>
{
    NSString * _userName; // +0x8
    unsigned long long _localID; // +0x10
    NSString * _filePath; // +0x18
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_localID;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)localID;
- (void)setLocalID:(unsigned long long)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void).cxx_destruct;
@end
