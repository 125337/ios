@interface CacheTypeSize : NSObject
{
    BOOL _scanDone; // +0x8
    BOOL _cleanDone; // +0x9
    long long _scanSize; // +0x10
    long long _cleanSize; // +0x18
    NSDictionary * _subTypeSize; // +0x20
    NSDictionary * _subTypeCleanedSize; // +0x28
}
- (long long)scanSize;
- (void)setScanSize:(long long)arg1;
- (long long)cleanSize;
- (void)setCleanSize:(long long)arg1;
- (id)subTypeSize;
- (void)setSubTypeSize:(id)arg1;
- (id)subTypeCleanedSize;
- (void)setSubTypeCleanedSize:(id)arg1;
- (BOOL)scanDone;
- (void)setScanDone:(BOOL)arg1;
- (BOOL)cleanDone;
- (void)setCleanDone:(BOOL)arg1;
- (void).cxx_destruct;
@end
