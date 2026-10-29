@interface FavoritesPinTopMgr : MMObject <PBMessageObserverDelegate>
{
    id <FavoritesPinTopMgrDelegate> _delegate; // +0x8
    NSMutableDictionary * _oldTimestampMap; // +0x10
    NSMutableDictionary * _favIdToEventMap; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)pinTopFavoritesItem:(id)arg1;
- (void)cancelPinTopFavoritesItem:(id)arg1;
- (void)sendPinTopRequest:(id)arg1 isCancel:(BOOL)arg2;
- (void)handlePinTopFavResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)handleRequestFail:(id)arg1 errorCode:(int)arg2 eventID:(unsigned int)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)oldTimestampMap;
- (void)setOldTimestampMap:(id)arg1;
- (id)favIdToEventMap;
- (void)setFavIdToEventMap:(id)arg1;
- (void).cxx_destruct;
@end
