@interface CreatePOIMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
- (int)createPOI:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@end
