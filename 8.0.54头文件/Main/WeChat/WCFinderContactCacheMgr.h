@interface WCFinderContactCacheMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _contactCaches; // +0x8
}
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)contactProfileExtInfoCacheForKey:(id)arg1;
- (id)selfContactCache;
- (id)getClubContactCache:(id)arg1;
- (id)contactCaches;
- (void)setContactCaches:(id)arg1;
- (void).cxx_destruct;
@end

