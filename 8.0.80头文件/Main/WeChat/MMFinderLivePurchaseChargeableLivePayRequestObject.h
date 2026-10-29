@interface MMFinderLivePurchaseChargeableLivePayRequestObject : MMFinderLivePayRequestObject
{
    BOOL _showedInsufficientConsumePanel; // +0x80
}
- (unsigned long long)buyCoinBusinessId;
- (void)start;
- (void)consumeCoinWithProductId:(id)arg1 billNo:(id)arg2 respBuff:(id)arg3;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidCancel:(id)arg1;
- (void)retrieveBillToPayWithBlock:(id /* block */)arg1;
- (BOOL)showedInsufficientConsumePanel;
- (void)setShowedInsufficientConsumePanel:(BOOL)arg1;
@end
