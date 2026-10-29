@interface WCOutPurchasePackageCgi : NSObject <PBMessageObserverDelegate>
{
    unsigned int _eventID; // +0x8
    id <WCOutPurchasePackageDelegate> _delegate; // +0x10
}
+ (id)instanceWithDelegate:(id)arg1;
- (void)doCgi:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

