@interface WCFileBrowseKVLog : NSObject
{
    unsigned int _hasConfirm; // +0x8
    unsigned int _switchToChat; // +0xc
    unsigned int _switchToFav; // +0x10
    unsigned int _switchToCloud; // +0x14
    unsigned int _switchToAlbum; // +0x18
    unsigned int _hasClickSearch; // +0x1c
    unsigned int _hasClickDetail; // +0x20
    unsigned int _chatFileCount; // +0x24
    unsigned int _favFileCount; // +0x28
    unsigned int _cloudFileCount; // +0x2c
    unsigned int _albumFileCount; // +0x30
    unsigned int _firstScreenCount; // +0x34
    unsigned int _belowScreenCount; // +0x38
    int _firstAssetIndex; // +0x3c
    int _firstScreenAssetNum; // +0x40
    NSMutableSet * _keywordSet; // +0x48
}
- (id)init;
- (void)report19359;
- (unsigned int)hasConfirm;
- (void)setHasConfirm:(unsigned int)arg1;
- (unsigned int)switchToChat;
- (void)setSwitchToChat:(unsigned int)arg1;
- (unsigned int)switchToFav;
- (void)setSwitchToFav:(unsigned int)arg1;
- (unsigned int)switchToCloud;
- (void)setSwitchToCloud:(unsigned int)arg1;
- (unsigned int)switchToAlbum;
- (void)setSwitchToAlbum:(unsigned int)arg1;
- (unsigned int)hasClickSearch;
- (void)setHasClickSearch:(unsigned int)arg1;
- (unsigned int)hasClickDetail;
- (void)setHasClickDetail:(unsigned int)arg1;
- (unsigned int)chatFileCount;
- (void)setChatFileCount:(unsigned int)arg1;
- (unsigned int)favFileCount;
- (void)setFavFileCount:(unsigned int)arg1;
- (unsigned int)cloudFileCount;
- (void)setCloudFileCount:(unsigned int)arg1;
- (unsigned int)albumFileCount;
- (void)setAlbumFileCount:(unsigned int)arg1;
- (unsigned int)firstScreenCount;
- (void)setFirstScreenCount:(unsigned int)arg1;
- (unsigned int)belowScreenCount;
- (void)setBelowScreenCount:(unsigned int)arg1;
- (id)keywordSet;
- (void)setKeywordSet:(id)arg1;
- (int)firstAssetIndex;
- (void)setFirstAssetIndex:(int)arg1;
- (int)firstScreenAssetNum;
- (void)setFirstScreenAssetNum:(int)arg1;
- (void).cxx_destruct;
@end
