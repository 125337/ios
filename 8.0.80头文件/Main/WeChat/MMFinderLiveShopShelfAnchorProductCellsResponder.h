@interface MMFinderLiveShopShelfAnchorProductCellsResponder : NSObject <MMFinderLiveAnchorGoodsCellDelegate>
{
    MMFinderLiveShopShelfCoordinator * _coordinator; // +0x8
}
- (id)initWithCoordinator:(id)arg1;
- (void)onStartRecordPromotionReplay:(id)arg1;
- (void)internalStartRecordPromotionReplay:(id)arg1;
- (void)onStopRecordPromotionReplay:(id)arg1;
- (void)onDeleteRecordPromotionReplay:(id)arg1;
- (void)reportAnchorAction:(long long)arg1 productId:(unsigned long long)arg2;
- (void)reportAnchorAction:(long long)arg1 productId:(unsigned long long)arg2 extraParams:(id)arg3;
- (void)onPromoteButtonClicked:(id)arg1;
- (void)onPromoteButtonSubPartClicked:(id)arg1;
- (void)onBulkBuyPromoteButtonClicked:(id)arg1;
- (void)updatePromoteProductStatusWithGoodsItem:(id)arg1 businessTypeIfWillPromote:(int)arg2;
- (void)updatePromoteStatus:(BOOL)arg1 withID:(id)arg2 businessType:(int)arg3 replayInfo:(id)arg4;
- (long long)getPromoteUserType;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
