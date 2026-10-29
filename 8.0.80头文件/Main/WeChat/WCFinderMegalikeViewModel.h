@interface WCFinderMegalikeViewModel : NSObject
{
    BOOL _isLoading; // +0x8
    BOOL _hadMore; // +0x9
    NSMutableArray * _datas; // +0x10
    unsigned long long _megavideoTotalCount; // +0x18
    NSData * _lastBuffer; // +0x20
    unsigned long long _totalCount; // +0x28
    unsigned long long _finderTotalCount; // +0x30
}
- (id)init;
- (void)clearAllData;
- (id)fetchNextMegaVideos;
- (id)historyVideos;
- (id)datas;
- (void)setDatas:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)hadMore;
- (void)setHadMore:(BOOL)arg1;
- (unsigned long long)megavideoTotalCount;
- (void)setMegavideoTotalCount:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (unsigned long long)finderTotalCount;
- (void)setFinderTotalCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
