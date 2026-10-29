@interface MMFinderLiveBaseShareView : UIView <WCFinderLiveExt>
{
    WCFinderLiveShareItem * _shareItem; // +0x8
}
- (id)initWithFrame:(CGRect)arg1 shareItem:(id)arg2;
- (void)layoutSubviews;
- (void)refreshSubviews;
- (void)updateLiveStatusFromDB;
- (void)updateLiveStatusIfNeededFromServer;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (id)shareItem;
- (void)setShareItem:(id)arg1;
- (void).cxx_destruct;
@end

