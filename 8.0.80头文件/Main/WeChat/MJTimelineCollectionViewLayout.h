@interface MJTimelineCollectionViewLayout : UICollectionViewLayout
{
    BOOL _isAnimatingForBoundsChange; // +0x8
    MJTimelineViewModel * _viewModel; // +0x10
    NSIndexPath * _trimPrepareSegmentIndexPath; // +0x18
    MJTimelineLayoutCalculator * _layoutCalc; // +0x20
    NSMutableDictionary * _cellAttributesByIndexPath; // +0x28
    NSMutableDictionary * _trimHandleAttributesByIndexPath; // +0x30
    NSMutableDictionary * _musicSegmentPlaceholderViewAttributesByIndexPath; // +0x38
    NSMutableDictionary * _narrationSegmentPlaceholderViewAttributesByIndexPath; // +0x40
    NSMutableDictionary * _timelineLeadingAccessoryViewAttributesByIndexPath; // +0x48
    NSMutableDictionary * _timelineVolumeAccessoryViewAttributesByIndexPath; // +0x50
    NSMutableDictionary * _OSTRecognitionRetryAccessoryViewAttributesByIndexPath; // +0x58
    NSSet * _transitionSegmentIndexPathsToSendBack; // +0x60
    NSMutableDictionary * _initialCellLayoutAttributesByIndexPath; // +0x68
    NSMutableDictionary * _finalCellLayoutAttributesByIndexPath; // +0x70
    CGPoint _targetContentOffsetOnce; // +0x78
    CGSize _oldContentSize; // +0x88
    CGSize _deltaContentSize; // +0x98
    UIEdgeInsets _timelineViewContentInsets; // +0xa8
    UIEdgeInsets _trimHandleInsets; // +0xc8
    CGRect _deltaBounds; // +0xe8
}
+ (id)musicSegmentPlaceholderViewIndexPath;
+ (id)narrationSegmentPlaceholderViewIndexPath;
+ (id)timelineLeadingAccessoryViewIndexPath;
+ (id)timelineVolumeAccessoryViewIndexPath;
+ (id)OSTRecognitionRetryAccessoryViewIndexPath;
+ (Class)layoutAttributesClass;
+ (Class)invalidationContextClass;
- (id)layoutAttributesForTrimHandleAtIndexPath:(id)arg1;
- (void)trimPrepareSegmentIndexPathDidChange:(id)arg1;
- (id)layoutAttributesForMusicSegmentPlaceholderViewAtIndexPath:(id)arg1;
- (id)layoutAttributesForNarrationSegmentPlaceholderViewAtIndexPath:(id)arg1;
- (id)layoutAttributesForTimelineLeadingAccessoryViewAtIndexPath:(id)arg1;
- (id)layoutAttributesForTimelineVolumeAccessoryViewAtIndexPath:(id)arg1;
- (id)layoutAttributesForOSTRecognitionRetryAccessoryViewAtIndexPath:(id)arg1;
- (id)internalLayoutAttributesForMusicSegmentPlaceholderViewAtIndexPath:(id)arg1;
- (id)internalLayoutAttributesForNarrationSegmentPlaceholderViewAtIndexPath:(id)arg1;
- (id)internalLayoutAttributesForTimelineLeadingAccessoryViewAtIndexPath:(id)arg1;
- (id)internalLayoutAttributesForTimelineVolumeAccessoryViewAtIndexPath:(id)arg1;
- (id)internalLayoutAttributesForOSTRecognitionRetryAccessoryViewAtIndexPath:(id)arg1;
- (id)internalLayoutAttributesForItemAtIndexPath:(id)arg1;
- (id)internalLayoutAttributesForItemAtIndexPath:(id)arg1 withContentOffset:(CGPoint)arg2 maxContentOffsetY:(double)arg3;
- (void)boundsWillChangeBeforeInvalidateFromBounds:(CGRect)arg1 toBounds:(CGRect)arg2;
- (BOOL)shouldInvalidateLayoutForBoundsChangeFromSize:(CGSize)arg1 toSize:(CGSize)arg2;
- (void)internalPrepareForAnimatedBoundsChange:(CGRect)arg1;
- (void)internalFinalizeAnimatedBoundsChange;
- (id)internalInitialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)internalFinalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)internalInitialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)internalFinalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)updateDeltaContentSizeIfNeeded:(CGSize)arg1;
- (id)transformLayoutAttributes:(id)arg1 filter:(id /* block */)arg2 transformer:(id /* block */)arg3;
- (id)initWithViewModel:(id)arg1 layoutCalc:(id)arg2;
- (void)dealloc;
- (void)invalidateLayoutForScaleChange;
- (void)invalidateLayoutForModeChange;
- (void)prepareLayout;
- (CGSize)collectionViewContentSize;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)invalidationContextForBoundsChange:(CGRect)arg1;
- (id)invalidationContextForTimelineInsetsChange:(UIEdgeInsets)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (void)prepareForAnimatedBoundsChange:(CGRect)arg1;
- (void)finalizeAnimatedBoundsChange;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setTimelineViewContentInsets:(UIEdgeInsets)arg1;
- (void)setTrimPrepareSegmentIndexPath:(id)arg1;
- (id)viewModel;
- (CGPoint)targetContentOffsetOnce;
- (void)setTargetContentOffsetOnce:(CGPoint)arg1;
- (UIEdgeInsets)timelineViewContentInsets;
- (id)trimPrepareSegmentIndexPath;
- (id)layoutCalc;
- (void)setLayoutCalc:(id)arg1;
- (id)cellAttributesByIndexPath;
- (void)setCellAttributesByIndexPath:(id)arg1;
- (id)trimHandleAttributesByIndexPath;
- (void)setTrimHandleAttributesByIndexPath:(id)arg1;
- (id)musicSegmentPlaceholderViewAttributesByIndexPath;
- (void)setMusicSegmentPlaceholderViewAttributesByIndexPath:(id)arg1;
- (id)narrationSegmentPlaceholderViewAttributesByIndexPath;
- (void)setNarrationSegmentPlaceholderViewAttributesByIndexPath:(id)arg1;
- (id)timelineLeadingAccessoryViewAttributesByIndexPath;
- (void)setTimelineLeadingAccessoryViewAttributesByIndexPath:(id)arg1;
- (id)timelineVolumeAccessoryViewAttributesByIndexPath;
- (void)setTimelineVolumeAccessoryViewAttributesByIndexPath:(id)arg1;
- (id)OSTRecognitionRetryAccessoryViewAttributesByIndexPath;
- (void)setOSTRecognitionRetryAccessoryViewAttributesByIndexPath:(id)arg1;
- (UIEdgeInsets)trimHandleInsets;
- (void)setTrimHandleInsets:(UIEdgeInsets)arg1;
- (id)transitionSegmentIndexPathsToSendBack;
- (void)setTransitionSegmentIndexPathsToSendBack:(id)arg1;
- (BOOL)isAnimatingForBoundsChange;
- (void)setIsAnimatingForBoundsChange:(BOOL)arg1;
- (CGSize)oldContentSize;
- (void)setOldContentSize:(CGSize)arg1;
- (CGSize)deltaContentSize;
- (void)setDeltaContentSize:(CGSize)arg1;
- (CGRect)deltaBounds;
- (void)setDeltaBounds:(CGRect)arg1;
- (id)initialCellLayoutAttributesByIndexPath;
- (void)setInitialCellLayoutAttributesByIndexPath:(id)arg1;
- (id)finalCellLayoutAttributesByIndexPath;
- (void)setFinalCellLayoutAttributesByIndexPath:(id)arg1;
- (void).cxx_destruct;
@end
