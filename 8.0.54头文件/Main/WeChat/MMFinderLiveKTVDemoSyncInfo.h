@interface MMFinderLiveKTVDemoSyncInfo : NSObject
{
    int _version; // +0x8
    NSMutableArray * _requestedSongItems; // +0x10
    unsigned long long _syncId; // +0x18
}
- (int)version;
- (void)setVersion:(int)arg1;
- (id)requestedSongItems;
- (void)setRequestedSongItems:(id)arg1;
- (unsigned long long)syncId;
- (void)setSyncId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

