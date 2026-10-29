@interface WCOutCouponCgi : NSObject <PBMessageObserverDelegate>
{
    unsigned int _eventID; // +0x8
    id <WCOutCouponCgiDelegate> _delegate; // +0x10
}
+ (id)CGIWithDelegate:(id)arg1;
- (void)dealloc;
- (void)start:(unsigned int)arg1;
- (void)fail;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
- (void).cxx_destruct;
@end
