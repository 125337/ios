@interface WCFinderEditVideoProgressInfoView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _isScrollingTriggerByPlayer; // +0x8
    id <WCFinderEditVideoProgressInfoViewDelegate> _delegate; // +0x10
    UICollectionView * _collectionView; // +0x18
    UIView * _line; // +0x20
    WCFinderEditVideoPorgressInfoViewModel * _viewModel; // +0x28
    unsigned long long _triggerTime; // +0x30
    EditVideoAttr * _attr; // +0x38
    NSMutableArray * _videoPieceDuration; // +0x40
}
+ (double)viewH;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setupWithProgressVM:(id)arg1;
- (BOOL)isDragging;
- (void)setProgress:(double)arg1 withAnimatedDuration:(double)arg2;
- (void)layoutSubviews;
- (void)reloadCollectionView;
- (void)updateWithEditVideoAttr:(id)arg1;
- (void)generateVideoPieceDurationArray;
- (unsigned long long)currentPlayIndex;
- (double)getProgress;
- (void)onDrag:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)line;
- (void)setLine:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (unsigned long long)triggerTime;
- (void)setTriggerTime:(unsigned long long)arg1;
- (BOOL)isScrollingTriggerByPlayer;
- (void)setIsScrollingTriggerByPlayer:(BOOL)arg1;
- (id)attr;
- (void)setAttr:(id)arg1;
- (id)videoPieceDuration;
- (void)setVideoPieceDuration:(id)arg1;
- (void).cxx_destruct;
@end
