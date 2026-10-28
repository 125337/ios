@interface NewTipsNetworkLogic : NSObject <PBMessageObserverDelegate>
{
    id <NewTipsNetworkLogicDelegate> _delegate; // +0x8
}
- (void)requestPushNewTipsWithConfig:(id)arg1;
- (void)handlePushNewTipsResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
