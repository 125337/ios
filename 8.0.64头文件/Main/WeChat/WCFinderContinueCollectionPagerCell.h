@interface WCFinderContinueCollectionPagerCell : UICollectionViewCell <WCFinderCollectionInfoViewDelegate>
{
    id <WCFinderContinueCollectionPagerCellDelegate> _delegate; // +0x8
    WCFinderCollectionInfoView * _infoView; // +0x10
}
- (void)updateWatchingCollectionModel:(id)arg1;
- (void)reportExposer;
- (id)infoView;
- (void)longPressCollectionInfoView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setInfoView:(id)arg1;
- (void).cxx_destruct;
@end
