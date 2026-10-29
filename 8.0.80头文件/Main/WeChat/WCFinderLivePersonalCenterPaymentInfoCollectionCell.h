@interface WCFinderLivePersonalCenterPaymentInfoCollectionCell : UICollectionViewCell
{
    id <WCFinderLivePersonalCenterPaymentInfoCollectionCellActionDelegate> _actionDelegate; // +0x8
    WCTableViewManager * _tableViewManager; // +0x10
    WCFinderLivePersonalCenterPaymentInfoCollectionCellConfig * _cellConfig; // +0x18
}
+ (double)cellHeightWithConfig:(id)arg1;
+ (id)cellID;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)setup;
- (void)updateWithConfig:(id)arg1;
- (void)reloadTableViewWithConfig:(id)arg1;
- (void)reportCellExposeWithCurrentConfig:(id)arg1 prevConfig:(id)arg2;
- (id)getCommentSceneStr;
- (void)onShoppingRecordClick;
- (void)onPurchasedRecordClick;
- (void)onLotteryRecordClick;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)cellConfig;
- (void)setCellConfig:(id)arg1;
- (void).cxx_destruct;
@end
