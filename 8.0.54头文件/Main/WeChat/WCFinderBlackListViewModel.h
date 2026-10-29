@interface WCFinderBlackListViewModel : NSObject
{
    BOOL _hasMoreContact; // +0x8
    id <WCFinderBlackListViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _contactArray; // +0x18
    WCFinderContact * _contact; // +0x20
    NSData * _lastBuffer; // +0x28
}
- (id)initWithContact:(id)arg1;
- (void)fetchLocalData;
- (void)fetchMoreData;
- (void)revertBlackContact:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contactArray;
- (void)setContactArray:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)hasMoreContact;
- (void)setHasMoreContact:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end

