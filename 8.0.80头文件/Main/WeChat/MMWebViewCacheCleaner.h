@interface MMWebViewCacheCleaner : NSObject <MMCacheCleaner>
{
    BOOL _cancel; // +0x8
}
- (unsigned long long)clearWebViewCaches:(unsigned long long)arg1;
- (unsigned long long)clearWebKitStorage;
- (id)getCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanForSize:(unsigned long long)arg1;
- (void)cancelClean;
- (unsigned long long)cleanFilesByLRU:(id)arg1 cleanSize:(unsigned long long)arg2;
- (BOOL)cancel;
- (void)setCancel:(BOOL)arg1;
@end
