@interface CBTAsstFullScreenImageViewController : FullScreenViewController <UIScrollViewDelegate, MMImageActionSheetDelegate, scrollViewDelegate, CBTAsstFullScreenImageContainerDelegate>
{
    MMScrollView * m_scrollView; // +0x78
    UIView * m_blackMask; // +0x80
    CBTAsstBottomButtonsView * m_buttonsView; // +0x88
    NSMutableArray * m_arrContainers; // +0x90
    NSMutableArray * m_arrImageInfos; // +0x98
    unsigned int m_iCurIndex; // +0xa0
    CBTAsstFullScreenImageInfo * m_initialImageInfo; // +0xa8
    CBTAsstPagingBoundaryView * m_headPagingView; // +0xb0
    CBTAsstPagingBoundaryView * m_tailPagingView; // +0xb8
    UIButton * m_anchorRetryButton; // +0xc0
    unsigned long long m_preferredPagingEnd; // +0xc8
    BOOL m_isAnimating; // +0xd0
    BOOL m_isRotating; // +0xd1
    BOOL m_isAnimationShowing; // +0xd2
    BOOL m_isMutatingData; // +0xd3
    NSMutableSet * m_reportedAigcBtnIndexes; // +0xd8
    NSMutableSet * m_reportedAigcMiniAppExposureItems; // +0xe0
    UIView * _originView; // +0xe8
    MMImageActionSheet * _imageActionSheet; // +0xf0
    NSMutableSet * _markTranslateSet; // +0xf8
    NSMutableSet * _inflightDownloadSet; // +0x100
    NSMutableArray * _pendingDownloadInfos; // +0x108
}
+ (id)showWithImageInfos:(id)arg1 index:(unsigned int)arg2 originRect:(CGRect)arg3 fromViewController:(id)arg4;
+ (id)showWithImageInfos:(id)arg1 index:(unsigned int)arg2 originView:(id)arg3 fromViewController:(id)arg4;
- (id)cbt_imageInfos;
- (void)cbt_setImageInfos:(id)arg1;
- (id)cbt_containers;
- (void)cbt_setContainers:(id)arg1;
- (unsigned int)cbt_curIndex;
- (void)cbt_setCurIndex:(unsigned int)arg1;
- (id)cbt_pagingScrollView;
- (BOOL)cbt_isBusy;
- (BOOL)cbt_isUserInteracting;
- (void)cbt_setMutatingData:(BOOL)arg1;
- (id)cbt_makeContainerWithInfo:(id)arg1 originRect:(CGRect)arg2;
- (void)cbt_relayoutKeepingZoomOfContainer:(id)arg1;
- (void)cbt_downloadAroundCurrent;
- (void)cbt_prepareImages:(id)arg1 aroundIndex:(unsigned long long)arg2;
- (void)cbt_setAnchorRetryVisible:(BOOL)arg1;
- (void)cbt_setHeadPagingState:(unsigned long long)arg1 tailState:(unsigned long long)arg2;
- (id)cbt_pagingState;
- (void)cbt_setPagingState:(id)arg1;
- (BOOL)cbt_isCloudPagingEnabled;
- (void)cbt_disableCloudPaging;
- (void)cbt_setPendingEntryBinding:(id)arg1;
- (void)cbt_enableCloudPagingWithContext:(id)arg1 dataSource:(id)arg2;
- (void)cbt_requestAnchorPage;
- (BOOL)cbt_joinHistoryToLocalAnchor:(id)arg1;
- (BOOL)cbt_canContinueLocalHistory:(id)arg1;
- (id)cbt_currentImageKey;
- (void)cbt_replaceImageInfos:(id)arg1 keepingCurrentKey:(id)arg2;
- (id)cbt_preserveEntryImagesInInfos:(id)arg1;
- (void)cbt_appendImageInfos:(id)arg1 atEnd:(unsigned long long)arg2;
- (void)cbt_performAppend:(id)arg1 atEnd:(unsigned long long)arg2;
- (void)cbt_commitContainers:(id)arg1 infos:(id)arg2 curIndex:(unsigned int)arg3 keepContainer:(id)arg4 oldContainers:(id)arg5;
- (void)cbt_prefetchIfNeededAroundCurrentIndex;
- (unsigned long long)cbt_scrollTypeForEnd:(unsigned long long)arg1;
- (void)cbt_fetchMoreAtEnd:(unsigned long long)arg1;
- (void)cbt_flushPendingMutationIfAny;
- (void)cbt_notePagingDirection:(unsigned long long)arg1;
- (void)cbt_notePagingBoundaryAttemptAtEnd:(unsigned long long)arg1;
- (void)cbt_retryPagingAtEnd:(unsigned long long)arg1;
- (unsigned long long)cbt_boundaryStateAtEnd:(unsigned long long)arg1;
- (void)cbt_updatePagingBoundaries;
- (id)cbt_earlierBoundaryCacheScope;
- (id)cbt_earliestImageKey;
- (BOOL)cbt_hasCachedEarlierBoundary;
- (void)cbt_updateEarlierBoundaryCache;
- (id)cbt_reuseLocalImageInfos:(id)arg1;
- (void)cbt_reloadMergedImagesIfNeeded;
- (BOOL)cbt_mergeImageInfo:(id)arg1 intoInfo:(id)arg2;
- (void)cbt_applyCursorsFromResult:(id)arg1;
- (long long)cbt_indexOfKey:(id)arg1 inInfos:(id)arg2;
- (id)cbt_deduplicate:(id)arg1;
- (BOOL)useTransparentNavibar;
- (unsigned int)currentIndex;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)clearStatus;
- (void)resetScrollView;
- (void)setImageData:(id)arg1 originRect:(CGRect)arg2 index:(unsigned int)arg3;
- (void)downloadImageIfNeededAroundCurrent;
- (void)reloadContainerImgInfo:(id)arg1 atIndex:(unsigned int)arg2;
- (void)updateCurrentContainerOriginRect:(CGRect)arg1;
- (id)currentImageInfo;
- (id)currentContainer;
- (void)showVCAnimation;
- (double)animationDuration;
- (BOOL)useBackgroundAnimation;
- (BOOL)useAlphaAnimation;
- (BOOL)shouldAnimationWhenHide;
- (BOOL)removeFromViewAfterTransition;
- (void)hideVCAnimationWillCompleted:(id /* block */)arg1;
- (id)getAnimationControllerForDismissedController:(id)arg1;
- (void)animationHideStop;
- (void)cbtAsstContainerAnimationShowStart:(id)arg1;
- (void)cbtAsstContainerAnimationShowStop:(id)arg1;
- (void)cbtAsstContainerAnimationHideStart:(id)arg1;
- (void)cbtAsstContainerAnimationHideStop:(id)arg1;
- (void)cbtAsstContainerRequestHideWithRotate:(id)arg1;
- (void)cbtAsstContainerDidSingleTap:(id)arg1;
- (void)cbtAsstContainerDidLongPress:(id)arg1 touchPoint:(CGPoint)arg2;
- (void)cbtAsstContainerDragBegin:(id)arg1;
- (void)cbtAsstContainerDragEnd:(id)arg1;
- (void)cbtAsstContainerDragCancel:(id)arg1;
- (void)cbtAsstContainer:(id)arg1 backgroundAlphaChanged:(double)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)syncCurrentIndexFromScroll:(id)arg1;
- (id)inflightDownloadSet;
- (void)drainImageDownloads;
- (void)triggerDownloadIfNeededForInfo:(id)arg1;
- (void)refreshContainerForImageInfo:(id)arg1;
- (void)updatePlaceholderState:(unsigned long long)arg1 forImageInfo:(id)arg2;
- (void)cbt_retryAnchorPaging;
- (void)updateCurrentImageActions;
- (void)showShareSheet;
- (void)saveCurrentImageToAlbum;
- (void)locateCurrentImageInChat;
- (void)showActionSheetWithImageInfo:(id)arg1;
- (void)showActionSheetFromTranslateImg;
- (BOOL)imageActionSheet:(id)arg1 itemDidCustomEvent:(id)arg2;
- (void)imageActionSheet:(id)arg1 itemDidAppear:(id)arg2;
- (void)imageActionSheet:(id)arg1 itemDidClicked:(id)arg2;
- (id)translateImageIdentifier;
- (void)onShowTranslateImage:(id)arg1;
- (id)markTranslateSet;
- (void)markDisplayTranslateResult:(id)arg1;
- (void)unmarkDisplayTranslateResult:(id)arg1;
- (BOOL)isDisplayTranslateResult:(id)arg1;
- (id)aigcTaskIdOfCurrentImage;
- (BOOL)canReportAigcForCurrentImage;
- (void)reportAigcBottomBtnsExposureIfNeeded;
- (void)reportAigcBottomBtnClick:(id)arg1;
- (id)aigcViewIdForPanelItemType:(unsigned long long)arg1;
- (void)reportAigcPanelItem:(id)arg1 eventId:(id)arg2;
- (void)reportAigcMiniAppExposureForItem:(id)arg1;
- (void)reportAigcPanelRecentForwardContactsExposure;
- (void)imageActionSheetInShowAnimation:(id)arg1;
- (void)onQRCodeScansFinished;
- (void)reportAigcPanelOpenWeAppItemsExposureIfNeeded;
- (id)originView;
- (void)setOriginView:(id)arg1;
- (id)imageActionSheet;
- (void)setImageActionSheet:(id)arg1;
- (void)setMarkTranslateSet:(id)arg1;
- (void)setInflightDownloadSet:(id)arg1;
- (id)pendingDownloadInfos;
- (void)setPendingDownloadInfos:(id)arg1;
- (void).cxx_destruct;
@end
