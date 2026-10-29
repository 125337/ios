@interface BrandPendingSendCache : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _sourceWrapCache; // +0x8
    NSMutableDictionary * _tingItemCache; // +0x10
}
+ (BOOL)canHandleContact:(id)arg1;
- (id)sourceWrapCache;
- (id)tingItemCache;
- (id)cacheForType:(unsigned long long)arg1;
- (id)logNameForType:(unsigned long long)arg1;
- (unsigned long long)reserveEntryForBizUsername:(id)arg1 type:(unsigned long long)arg2 entry:(id *)arg3;
- (void)commitReservationForBizUsername:(id)arg1 reservationToken:(id)arg2 type:(unsigned long long)arg3;
- (void)releaseReservationForBizUsername:(id)arg1 reservationToken:(id)arg2 type:(unsigned long long)arg3;
- (void)rememberSourceWrap:(id)arg1 forBizUsername:(id)arg2;
- (unsigned long long)reserveLatestSourceWrapForBizUsername:(id)arg1 sourceWrap:(id *)arg2 reservationToken:(id *)arg3;
- (void)commitReservedSourceWrapForBizUsername:(id)arg1 reservationToken:(id)arg2;
- (void)releaseReservedSourceWrapForBizUsername:(id)arg1 reservationToken:(id)arg2;
- (void)rememberTingItem:(id)arg1 forBizUsername:(id)arg2;
- (unsigned long long)reserveLatestTingItemForBizUsername:(id)arg1 tingItem:(id *)arg2 reservationToken:(id *)arg3;
- (void)commitReservedTingItemForBizUsername:(id)arg1 reservationToken:(id)arg2;
- (void)releaseReservedTingItemForBizUsername:(id)arg1 reservationToken:(id)arg2;
- (void)clearPendingContentForBizUsername:(id)arg1;
- (void)onServiceClearData;
- (void)setSourceWrapCache:(id)arg1;
- (void)setTingItemCache:(id)arg1;
- (void).cxx_destruct;
@end
