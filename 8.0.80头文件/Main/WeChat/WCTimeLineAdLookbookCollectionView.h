@interface WCTimeLineAdLookbookCollectionView : UICollectionView <WCTimeLineAdLookbookCardCellViewDelegate, WCCanvasPageViewAnimationProtocol, WCTimeLineAdLookbookCardMediaViewDelegate>
{
    NSMutableDictionary * _mediaViewCache; // +0x8
    id <WCTimeLineAdLookbookCollectionViewDelegate> _lookbookDelegate; // +0x10
    NSMutableSet * _lastVisibleIndexPaths; // +0x18
    WCAdURLImageView * _charmImageView; // +0x20
    CAShapeLayer * _brandNewMediaMask; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)layoutSubviews;
- (void)organizeContentViews;
- (void)getReadyForBrandNewAnimation;
- (void)cleanUpWhileBrandNewAnimationDone;
- (void)shutdownAllVideos;
- (void)setVideosControlViewHidden:(BOOL)arg1;
- (id)mediaViewCache;
- (id)charmImageView;
- (id)brandNewMediaMask;
- (id)fetchLookbookCardInfo;
- (id)fetchMediaViewForIndex:(unsigned long long)arg1;
- (CGSize)fetchMediaViewSizeForIndex:(unsigned long long)arg1;
- (void)onCellButtonClickedForIndex:(unsigned long long)arg1 originView:(id)arg2;
- (id)fetchLookbookReportItemForIndex:(unsigned long long)arg1;
- (BOOL)onCellViewShouldHideItemTitleForIndex:(unsigned long long)arg1;
- (BOOL)isBrandNewAnimationPlaying;
- (void)onCanvasPageViewAnimationSetContentHidden:(BOOL)arg1;
- (BOOL)onMediaViewShouldForbidShowingPauseIcon;
- (id)lastVisibleIndexPaths;
- (void)cellsExposureProcess;
- (void)setMediaViewCache:(id)arg1;
- (id)lookbookDelegate;
- (void)setLookbookDelegate:(id)arg1;
- (void)setLastVisibleIndexPaths:(id)arg1;
- (void)setCharmImageView:(id)arg1;
- (void)setBrandNewMediaMask:(id)arg1;
- (void).cxx_destruct;
@end
