@interface WCTimeLineAdShowroomCardView : WCContentItemBaseView <UIScrollViewDelegate, WCAdShowroomItemViewDelegate>
{
    BOOL _hintReachedThreshold; // +0x38
    BOOL _isVideoReadyToPlay; // +0x39
    BOOL _isViewVisible; // +0x3a
    UIScrollView * _scrollView; // +0x40
    NSMutableArray * _layerContainers; // +0x48
    NSMutableArray * _itemViews; // +0x50
    WCAdShowroomSlideHintView * _slideHintView; // +0x58
    double _distanceBeginDragging; // +0x60
    WCAdShowroomLogic * _showroomLogic; // +0x68
}
+ (double)sanitizedMediaMaxWidth:(double)arg1;
+ (double)referenceWidthWithMediaMaxWidth:(double)arg1;
+ (double)scaleFactorWithMediaMaxWidth:(double)arg1 containerWidth:(double)arg2;
+ (double)heightForDataItem:(id)arg1 mediaMaxWidth:(double)arg2;
- (void)dealloc;
- (id)showroomInfo;
- (double)resolvedMediaMaxWidth;
- (double)scaleFactor;
- (double)resolvedMaxViewportWidth;
- (double)viewportWidth;
- (double)cardHeight;
- (double)contentWidthForLayer:(id)arg1;
- (double)baselineLayerContentWidth;
- (double)containerWidthForLayer:(id)arg1;
- (double)contentWidth;
- (double)scrollContentWidth;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)layoutSubviews;
- (id)scrollView;
- (void)collectSubviewReferences;
- (CGRect)frameForItem:(id)arg1 scale:(double)arg2;
- (void)setupLayersInScrollView:(id)arg1;
- (void)setupSlideHintViewInScrollView:(id)arg1;
- (void)updateSlideHintIconSize;
- (double)limitedDynamicSize:(double)arg1;
- (CGRect)slideHintFrame;
- (void)applyShowroomGeometryIfNeeded;
- (id)currentHintTitle:(BOOL)arg1;
- (void)updateParallaxOffset;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scheduleLoadAllPendingImages;
- (void)loadAllPendingImages;
- (id)reportItemForShowroomItemView:(id)arg1;
- (void)onShowroomItemViewClicked:(id)arg1;
- (double)getCurrentOverscrollDistance:(id)arg1;
- (BOOL)isBeginDraggingDistanceValidToJump;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onSlideToJumpActionFired;
- (BOOL)isOverscrollReachedJumpThreshold:(double)arg1;
- (void)resyncSlideHintFromCurrentOverscroll;
- (void)resetSlideHint;
- (void)updateSlideHintTitle;
- (double)visibleAreaForItemView:(id)arg1;
- (void)checkItemsState;
- (void)updateVideoPlayState;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (void)contentItemBecomeInvisible;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (void)shutdownAllVideos;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)reportInfo;
- (id)reportItemForShowroomItem:(id)arg1;
- (void)processItemsExposure;
- (id)showroomLogic;
- (void)setScrollView:(id)arg1;
- (id)layerContainers;
- (void)setLayerContainers:(id)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (id)slideHintView;
- (void)setSlideHintView:(id)arg1;
- (double)distanceBeginDragging;
- (void)setDistanceBeginDragging:(double)arg1;
- (BOOL)hintReachedThreshold;
- (void)setHintReachedThreshold:(BOOL)arg1;
- (BOOL)isVideoReadyToPlay;
- (void)setIsVideoReadyToPlay:(BOOL)arg1;
- (BOOL)isViewVisible;
- (void)setIsViewVisible:(BOOL)arg1;
- (void)setShowroomLogic:(id)arg1;
- (void).cxx_destruct;
@end
