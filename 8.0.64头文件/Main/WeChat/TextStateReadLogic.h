@interface TextStateReadLogic : NSObject
{
    id <TextStateReadLogicDelegate> _delegate; // +0x8
    NSMutableSet * _unreadUsernameCacheSet; // +0x10
    NSMutableSet * _readUsernameCacheSet; // +0x18
}
- (id)init;
- (void)initData;
- (void)setReadForTextState:(id)arg1;
- (BOOL)isReadForTextStateWithId:(id)arg1;
- (BOOL)isTextStateReadWithUsername:(id)arg1;
- (BOOL)hasUnreadTextStateContact;
- (void)clearCache;
- (void)clearCacheForUsername:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)unreadUsernameCacheSet;
- (void)setUnreadUsernameCacheSet:(id)arg1;
- (id)readUsernameCacheSet;
- (void)setReadUsernameCacheSet:(id)arg1;
- (void).cxx_destruct;
@end
