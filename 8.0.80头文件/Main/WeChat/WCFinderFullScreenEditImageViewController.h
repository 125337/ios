@interface WCFinderFullScreenEditImageViewController : WCFinderRootEditImageViewController <WCFinderFullScreenEditImageLayoutViewDelegate, WCFinderEditDataReportDelegate>
{
    id <WCFinderFullScreenEditImageViewControllerDelegate> _finderDelegate; // +0x70
    unsigned long long _enterScene; // +0x78
}
- (id)initWithAssets:(id)arg1 images:(id)arg2;
- (void)viewDidLoad;
- (void)willDisappear;
- (void)showEditImageViewOn;
- (id)getSourceFeedId;
- (unsigned long long)getEnterScene;
- (id)getEditId;
- (id)getPostId;
- (void)onClickItemFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onEditImageLayoutViewChangeAssetSuc;
- (BOOL)shouldSaveUnCropImages;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)dealSelectResult:(id)arg1;
- (void)registerYReportSdk;
- (id)finderDelegate;
- (void)setFinderDelegate:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
