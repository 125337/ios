@interface WCFinderECRedDotsCenter : NSObject <MMActionNotifyCommBizExt, WCFinderCardsEntryCenterExt>
- (void)onServiceInit;
- (void)onEcInitForStartDone;
- (void)onGetBizId1:(long long)arg1 data:(id)arg2;
- (void)onFinderCardsEntryShouldShowChange;
- (BOOL)shouldSyncECRedDots;
- (BOOL)shouldRejectRedDot:(id)arg1;
@end
