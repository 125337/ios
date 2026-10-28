@interface RingToneSearchViewModel : NSObject <RingTonePlayerExt>
{
    BOOL _continueFlag; // +0x8
    unsigned int _dataOffset; // +0xc
    NSMutableArray * _rings; // +0x10
    VideoRingNetProvider * _provider; // +0x18
    unsigned long long _searchRequestID; // +0x20
    NSString * _curQuery; // +0x28
    NSMutableSet * _feedIDs; // +0x30
}
- (id)init;
- (id)searchRing:(id)arg1 isFirstPage:(BOOL)arg2;
- (void)clearData;
- (id)searchMusicRing:(id)arg1;
- (void)stopAllPlay;
- (void)playWithID:(id)arg1;
- (void)dealloc;
- (id)rings;
- (void)setRings:(id)arg1;
- (id)provider;
- (void)setProvider:(id)arg1;
- (unsigned long long)searchRequestID;
- (void)setSearchRequestID:(unsigned long long)arg1;
- (unsigned int)dataOffset;
- (void)setDataOffset:(unsigned int)arg1;
- (id)curQuery;
- (void)setCurQuery:(id)arg1;
- (id)feedIDs;
- (void)setFeedIDs:(id)arg1;
- (void).cxx_destruct;
@end
