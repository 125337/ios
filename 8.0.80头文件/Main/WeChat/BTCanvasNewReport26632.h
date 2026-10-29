@interface BTCanvasNewReport26632 : MMUserService <MMServiceProtocol>
{
    NSMutableSet * _cardIdSet; // +0x8
    NSMutableSet * _cardIdSetV2; // +0x10
}
- (void)onServiceInit;
- (void)onClearAllData;
- (void)setCardId:(id)arg1;
- (BOOL)containsCardId:(id)arg1;
- (void)setCardIdV2:(id)arg1;
- (BOOL)containsCardIdV2:(id)arg1;
- (void)onServiceClearData;
- (id)cardIdSet;
- (void)setCardIdSet:(id)arg1;
- (id)cardIdSetV2;
- (void)setCardIdSetV2:(id)arg1;
- (void).cxx_destruct;
@end
