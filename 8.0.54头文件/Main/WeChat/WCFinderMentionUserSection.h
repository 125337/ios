@interface WCFinderMentionUserSection : NSObject
{
    BOOL _couldFold; // +0x8
    BOOL _hasMore; // +0x9
    BOOL _isFold; // +0xa
    NSString * _title; // +0x10
    NSMutableArray * _contacts; // +0x18
    NSString * _showMoreWording; // +0x20
    NSData * _lastBuff; // +0x28
    id /* block */ _fetchNext; // +0x30
}
- (id)init;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (id)showMoreWording;
- (void)setShowMoreWording:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (BOOL)couldFold;
- (void)setCouldFold:(BOOL)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (BOOL)isFold;
- (void)setIsFold:(BOOL)arg1;
- (id /* block */)fetchNext;
- (void)setFetchNext:(id /* block */)arg1;
- (void).cxx_destruct;
@end

