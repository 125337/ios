@interface WCFinderFullScreenEditImageViewController : WCFinderRootEditImageViewController <WCFinderFullScreenEditImageLayoutViewDelegate>
{
    id <WCFinderFullScreenEditImageViewControllerDelegate> _finderDelegate; // +0x68
    unsigned long long _enterScene; // +0x70
}
+ (BOOL)selectedImagesSizeLegal:(id)arg1;
+ (BOOL)checkSelectedImageIsSizeLegal:(CGSize)arg1;
- (id)initWithAssets:(id)arg1 images:(id)arg2;
- (void)viewDidLoad;
- (void)willDisappear;
- (void)showEditImageViewOn;
- (void)onClickItemFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onEditImageLayoutViewChangeAssetSuc;
- (BOOL)shouldSaveUnCropImages;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)registerYReportSdk;
- (id)finderDelegate;
- (void)setFinderDelegate:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

