@interface WCFinderMusicVideoScanStats : NSObject
{
    unsigned long long _albumAssetCount; // +0x8
    unsigned long long _configuredLatestCount; // +0x10
    unsigned long long _scanLimit; // +0x18
    unsigned long long _traversedCount; // +0x20
    unsigned long long _cheapFilteredCount; // +0x28
    unsigned long long _metadataFilteredCount; // +0x30
    unsigned long long _unavailableCount; // +0x38
}
- (unsigned long long)albumAssetCount;
- (void)setAlbumAssetCount:(unsigned long long)arg1;
- (unsigned long long)configuredLatestCount;
- (void)setConfiguredLatestCount:(unsigned long long)arg1;
- (unsigned long long)scanLimit;
- (void)setScanLimit:(unsigned long long)arg1;
- (unsigned long long)traversedCount;
- (void)setTraversedCount:(unsigned long long)arg1;
- (unsigned long long)cheapFilteredCount;
- (void)setCheapFilteredCount:(unsigned long long)arg1;
- (unsigned long long)metadataFilteredCount;
- (void)setMetadataFilteredCount:(unsigned long long)arg1;
- (unsigned long long)unavailableCount;
- (void)setUnavailableCount:(unsigned long long)arg1;
@end
