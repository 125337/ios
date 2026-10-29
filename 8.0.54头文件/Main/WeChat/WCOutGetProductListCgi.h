@interface WCOutGetProductListCgi : NSObject <PBMessageObserverDelegate>
{
    unsigned int _eventID; // +0x8
    id <WCOutGetProductListCgiDelegate> _delegate; // +0x10
}
+ (id)cgiWithDelegate:(id)arg1;
- (void)dealloc;
- (void)start:(id)arg1 reqCurrency:(id)arg2;
- (void)fail;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

