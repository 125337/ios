@interface MPPageFastLoadCacheCleaner : NSObject <MMCacheCleaner>
{
    BOOL _isCleaning; // +0x8
    BOOL _markedCancelled; // +0x9
}
- (id)fastloadImagePath;
- (unsigned long long)cleanFastloadImageForSize:(unsigned long long)arg1;
- (id)getCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanForSize:(unsigned long long)arg1;
- (void)cancelClean;
- (void)onDefaultClean:(int)arg1;
- (BOOL)isCleaning;
- (void)setIsCleaning:(BOOL)arg1;
- (BOOL)markedCancelled;
- (void)setMarkedCancelled:(BOOL)arg1;
@end
