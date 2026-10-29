@interface WCFinderFetchEnhanceCgiStatusParams : NSObject
{
    NSMutableArray * _readStats; // +0x8
    NSMutableArray * _unreadItems; // +0x10
    FinderClientStatus * _clientStatus; // +0x18
}
- (id)readStats;
- (void)setReadStats:(id)arg1;
- (id)unreadItems;
- (void)setUnreadItems:(id)arg1;
- (id)clientStatus;
- (void)setClientStatus:(id)arg1;
- (void).cxx_destruct;
@end
