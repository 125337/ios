@interface TingMembershipServiceCpp : UnitRCObjcBaseProxyClass <TingMembershipService>
+ (id)sharedInstance;
- (id)membershipInfo;
- (void)updateMembershipInfo:(id)arg1;
- (void)setNeedsUpdateMembershipInfo;
- (void)refreshMembershipInfoIfNeeded;
- (void)fetchMembershipInfoAsync:(id /* block */)arg1;
- (void)fetchMembershipAsync:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)fetchJoinInfoAsync:(id)arg1 callback:(id /* block */)arg2;
- (void)fetchJoinMembershipInfoAsync:(id)arg1 callback:(id /* block */)arg2;
- (void)joinAsync:(id)arg1 callback:(id /* block */)arg2;
- (void)unbindQQMusic:(id /* block */)arg1;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
@end
