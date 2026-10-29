@interface WCFinderGroupMemberViewModel : NSObject
{
    BOOL _hasFetchData; // +0x8
    BOOL _isFetchingData; // +0x9
    BOOL _continueFlag; // +0xa
    BOOL _hadJoinedGroup; // +0xb
    NSMutableArray * _items; // +0x10
    unsigned long long _authorCount; // +0x18
    id /* block */ _dataChangeBlock; // +0x20
    NSData * _lastBuffer; // +0x28
    NSString * _finderUsername; // +0x30
}
- (id)initWithFinderContact:(id)arg1;
- (id)items;
- (void)fetchMoreData;
- (void)setItems:(id)arg1;
- (BOOL)hasFetchData;
- (void)setHasFetchData:(BOOL)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (BOOL)hadJoinedGroup;
- (void)setHadJoinedGroup:(BOOL)arg1;
- (unsigned long long)authorCount;
- (void)setAuthorCount:(unsigned long long)arg1;
- (id /* block */)dataChangeBlock;
- (void)setDataChangeBlock:(id /* block */)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end

