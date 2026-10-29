@interface TextStateHistoryCalendarCollectionView : UICollectionView <TextStateCollectionViewLayoutHistoryCalendarDelegate, UICollectionViewDataSource>
{
    TextStateHistoryCalendar * _calendar; // +0x8
    UITapGestureRecognizer * _tapGesture; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)configure;
- (id)calendarLayout;
- (void)setCalendar:(id)arg1;
- (BOOL)showStoryEntry;
- (void)setShowStoryEntry:(BOOL)arg1;
- (id)itemReuseIdentifierWithInfoCount:(unsigned long long)arg1;
- (void)onTap:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)shouldShowYearForSection:(unsigned long long)arg1;
- (id)calendar;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end

