@interface MMLiveStorageCleanupDeviationDirective : NSObject
{
    unsigned long long _type; // +0x8
    NSString * _path; // +0x10
    long long _pathComponentCount; // +0x18
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (long long)pathComponentCount;
- (void)setPathComponentCount:(long long)arg1;
- (void).cxx_destruct;
@end
