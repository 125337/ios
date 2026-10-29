@interface NoteListContentCache : NSObject
{
    NSRecursiveLock * _lock; // +0x8
    MMLRUCache * _lru; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (id)contentForLocalId:(unsigned long long)arg1;
- (id)previewsForLocalId:(unsigned long long)arg1;
- (void)setContent:(id)arg1 previews:(id)arg2 forLocalId:(unsigned long long)arg3;
- (BOOL)updatePreviewDisplayThumbPath:(id)arg1 forAttachmentId:(id)arg2 localId:(unsigned long long)arg3;
- (void)invalidateLocalId:(unsigned long long)arg1;
- (void)invalidateAll;
- (void).cxx_destruct;
@end
