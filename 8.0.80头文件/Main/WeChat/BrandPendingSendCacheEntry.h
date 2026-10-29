@interface BrandPendingSendCacheEntry : NSObject
{
    id _payload; // +0x8
    double _timestamp; // +0x10
    NSString * _reservationToken; // +0x18
}
+ (id)entryWithPayload:(id)arg1;
- (id)payload;
- (void)setPayload:(id)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (id)reservationToken;
- (void)setReservationToken:(id)arg1;
- (void).cxx_destruct;
@end
