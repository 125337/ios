@interface MMGrowTextViewTextDiffAnimator : NSObject
{
    BOOL _animating; // +0x8
    BOOL _pinWholeRewriteViewportToTop; // +0x9
    BOOL _savedForceSetContentOffsetToForceY; // +0xa
    BOOL _preserveViewportDuringAnimation; // +0xb
    BOOL _wholeRewriteActive; // +0xc
    id /* block */ _layoutUpdate; // +0x10
    MMGrowTextView * _growTextView; // +0x18
    unsigned long long _generation; // +0x20
    NSAttributedString * _targetText; // +0x28
    id /* block */ _completion; // +0x30
    NSMutableArray * _liveOverlays; // +0x38
    NSMapTable * _selectionRanges; // +0x40
    NSMapTable * _selectionEntries; // +0x48
}
+ (id)unitWithIdentity:(id)arg1 attributedText:(id)arg2 kind:(unsigned long long)arg3;
+ (id)unitsFromString:(id)arg1;
+ (id)unitsFromAttributedText:(id)arg1;
+ (BOOL)unit:(id)arg1 equals:(id)arg2;
+ (id)op:(unsigned long long)arg1 old:(id)arg2 target:(id)arg3;
+ (id)planFromUnits:(id)arg1 toUnits:(id)arg2 targetText:(id)arg3 deadline:(double)arg4 generation:(unsigned long long)arg5 generationBlock:(id /* block */)arg6;
+ (id)diffSummaryFrom:(id)arg1 to:(id)arg2;
+ (unsigned long long)unitsLogicalLength:(id)arg1;
- (id)initWithGrowTextView:(id)arg1;
- (id)attributes;
- (void)apply:(id)arg1;
- (void)animateToAttributedText:(id)arg1 timing:(struct)arg2 completion:(id /* block */)arg3;
- (unsigned long long)storageLengthOfUnits:(id)arg1;
- (CGRect)glyphRectForRange:(_NSRange)arg1 font:(id)arg2;
- (id)overlayForRange:(_NSRange)arg1 color:(id)arg2 alpha:(double)arg3;
- (id)trackOverlay:(id)arg1 range:(_NSRange)arg2;
- (void)removeOverlayEntry:(id)arg1;
- (void)repositionLiveOverlays;
- (void)changeContentAndLayoutPreservingOffset:(CGPoint)arg1;
- (double)clampedOffsetY:(double)arg1;
- (void)restoreViewportOffset:(CGPoint)arg1;
- (CGRect)lineRectAtCharacterLocation:(unsigned long long)arg1;
- (unsigned long long)firstChangeLocationForPlan:(id)arg1;
- (void)positionViewportForPlan:(id)arg1;
- (id)targetAttributes;
- (id)selectionRectsForRange:(_NSRange)arg1;
- (void)removeSelectionForOperation:(id)arg1 animated:(BOOL)arg2;
- (void)renderSelectionForOperation:(id)arg1 range:(_NSRange)arg2 animateSweep:(BOOL)arg3;
- (void)refreshAllSelectionFrames;
- (void)updateSelectionRangesForChangeAtRange:(_NSRange)arg1 replacement:(unsigned long long)arg2 currentOperation:(id)arg3;
- (void)removeAllSelections;
- (void)beginPinningWholeRewriteViewportToTop;
- (void)endPinningWholeRewriteViewportToTop;
- (void)revealWholeUnits:(id)arg1 revealedCount:(unsigned long long)arg2 cursor:(unsigned long long)arg3 startTime:(double)arg4 duration:(double)arg5 generation:(unsigned long long)arg6;
- (void)playWhole:(struct)arg1 generation:(unsigned long long)arg2;
- (void)beginPartialPlan:(id)arg1 timing:(struct)arg2 generation:(unsigned long long)arg3;
- (void)playOperation:(unsigned long long)arg1 cursor:(unsigned long long)arg2 plan:(id)arg3 timing:(struct)arg4 generation:(unsigned long long)arg5;
- (void)deleteUnits:(id)arg1 operation:(id)arg2 cursor:(unsigned long long)arg3 timing:(struct)arg4 generation:(unsigned long long)arg5 done:(id /* block */)arg6;
- (void)replaceOldUnits:(id)arg1 targetUnits:(id)arg2 operation:(id)arg3 cursor:(unsigned long long)arg4 timing:(struct)arg5 generation:(unsigned long long)arg6 done:(id /* block */)arg7;
- (void)insertUnitsOneByOne:(id)arg1 index:(unsigned long long)arg2 cursor:(unsigned long long)arg3 timing:(struct)arg4 generation:(unsigned long long)arg5 done:(id /* block */)arg6;
- (void)revealExistingUnits:(id)arg1 index:(unsigned long long)arg2 cursor:(unsigned long long)arg3 interval:(double)arg4 fadeDuration:(double)arg5 generation:(unsigned long long)arg6 done:(id /* block */)arg7;
- (void)revealRange:(_NSRange)arg1 fadeDuration:(double)arg2 generation:(unsigned long long)arg3;
- (void)shiftLiveOverlayRangesAtOrAfter:(unsigned long long)arg1 by:(long long)arg2 excluding:(id)arg3;
- (BOOL)valid:(unsigned long long)arg1;
- (void)finish:(unsigned long long)arg1;
- (void)fallback:(id)arg1;
- (void)complete:(BOOL)arg1;
- (void)cancelFinishingToTarget:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)setAnimating:(BOOL)arg1;
- (id /* block */)layoutUpdate;
- (void)setLayoutUpdate:(id /* block */)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (id)targetText;
- (void)setTargetText:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)liveOverlays;
- (void)setLiveOverlays:(id)arg1;
- (id)selectionRanges;
- (void)setSelectionRanges:(id)arg1;
- (id)selectionEntries;
- (void)setSelectionEntries:(id)arg1;
- (BOOL)pinWholeRewriteViewportToTop;
- (void)setPinWholeRewriteViewportToTop:(BOOL)arg1;
- (BOOL)savedForceSetContentOffsetToForceY;
- (void)setSavedForceSetContentOffsetToForceY:(BOOL)arg1;
- (BOOL)preserveViewportDuringAnimation;
- (void)setPreserveViewportDuringAnimation:(BOOL)arg1;
- (BOOL)wholeRewriteActive;
- (void)setWholeRewriteActive:(BOOL)arg1;
- (void).cxx_destruct;
@end
