@interface CBTAsstImagePagingResult : NSObject
{
    BOOL _upHasMore; // +0x8
    BOOL _downHasMore; // +0x9
    NSArray * _infos; // +0x10
    NSData * _upContextBytes; // +0x18
    NSData * _downContextBytes; // +0x20
}
- (id)init;
- (id)infos;
- (void)setInfos:(id)arg1;
- (id)upContextBytes;
- (void)setUpContextBytes:(id)arg1;
- (id)downContextBytes;
- (void)setDownContextBytes:(id)arg1;
- (BOOL)upHasMore;
- (void)setUpHasMore:(BOOL)arg1;
- (BOOL)downHasMore;
- (void)setDownHasMore:(BOOL)arg1;
- (void).cxx_destruct;
@end
