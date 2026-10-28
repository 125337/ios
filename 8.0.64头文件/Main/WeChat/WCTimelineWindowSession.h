@interface WCTimelineWindowSession : NSObject
{
    BOOL _isEnable; // +0x8
    NSMutableDictionary * _postingItemIDs; // +0x10
    NSMutableSet * _postedItemIDs; // +0x18
    NSMutableDictionary * _postedItemToLocalItem; // +0x20
}
- (id)init;
- (BOOL)isDataItemPostedInSession:(id)arg1;
- (void)addPostingItem:(id)arg1 withPostInfo:(id)arg2;
- (id)findPostInfo:(id)arg1;
- (void)replacePostedItem:(id)arg1 withNewItem:(id)arg2;
- (void)removePostedItem:(id)arg1;
- (void)closeSession;
- (id)postingItemIDs;
- (void)setPostingItemIDs:(id)arg1;
- (id)postedItemIDs;
- (void)setPostedItemIDs:(id)arg1;
- (id)postedItemToLocalItem;
- (void)setPostedItemToLocalItem:(id)arg1;
- (BOOL)isEnable;
- (void)setIsEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end
