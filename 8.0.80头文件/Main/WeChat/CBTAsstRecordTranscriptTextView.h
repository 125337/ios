@interface CBTAsstRecordTranscriptTextView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _autoScrollEnabled; // +0x8
    id /* block */ _onChevronTap; // +0x10
    UICollectionView * _collectionView; // +0x18
    UIButton * _chevronButton; // +0x20
    unsigned long long _confirmedASRLength; // +0x28
    NSMutableArray * _segments; // +0x30
    NSMutableArray * _segmentHeights; // +0x38
    double _cachedLayoutWidth; // +0x40
    NSString * _rawText; // +0x48
}
+ (double)fixedHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (BOOL)hasText;
- (void)updateText:(id)arg1;
- (void)updateText:(id)arg1 confirmedLength:(unsigned long long)arg2;
- (void)forceRebuildSegments;
- (void)rebuildSegmentsIfWidthChanged;
- (void)doRebuildSegmentsWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)deferredRebuild;
- (void)reset;
- (id)segmentText:(id)arg1 attributes:(id)arg2 width:(double)arg3;
- (double)heightForAttributedString:(id)arg1 width:(double)arg2;
- (double)labelWidth;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)restoreAutoScrollIfAtBottom;
- (void)scrollToBottomAnimated:(BOOL)arg1;
- (void)onChevronTapped;
- (id /* block */)onChevronTap;
- (void)setOnChevronTap:(id /* block */)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)chevronButton;
- (void)setChevronButton:(id)arg1;
- (BOOL)autoScrollEnabled;
- (void)setAutoScrollEnabled:(BOOL)arg1;
- (unsigned long long)confirmedASRLength;
- (void)setConfirmedASRLength:(unsigned long long)arg1;
- (id)segments;
- (void)setSegments:(id)arg1;
- (id)segmentHeights;
- (void)setSegmentHeights:(id)arg1;
- (double)cachedLayoutWidth;
- (void)setCachedLayoutWidth:(double)arg1;
- (id)rawText;
- (void)setRawText:(id)arg1;
- (void).cxx_destruct;
@end
