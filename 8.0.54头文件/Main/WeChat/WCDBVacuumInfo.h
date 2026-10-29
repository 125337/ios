@interface WCDBVacuumInfo : NSObject
{
    int _tag; // +0x8
    unsigned long long _totalSize; // +0x10
    unsigned long long _freeSize; // +0x18
    NSString * _path; // +0x20
}
- (BOOL)isChatDB;
- (int)tag;
- (void)setTag:(int)arg1;
- (unsigned long long)totalSize;
- (void)setTotalSize:(unsigned long long)arg1;
- (unsigned long long)freeSize;
- (void)setFreeSize:(unsigned long long)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end

