@interface MBFileStorageUsrSpaceItem : NSObject
{
    unsigned int _lastOpenTime; // +0x8
    NSString * _bizName; // +0x10
    NSString * _usrDir; // +0x18
    double _sizeInBytes; // +0x20
}
- (id)bizName;
- (void)setBizName:(id)arg1;
- (id)usrDir;
- (void)setUsrDir:(id)arg1;
- (double)sizeInBytes;
- (void)setSizeInBytes:(double)arg1;
- (unsigned int)lastOpenTime;
- (void)setLastOpenTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
