@interface MMScreenShotForwardView : UIView
{
    BOOL _entranceStarted; // +0x8
    double _bottomOffset; // +0x10
    NSArray * _entries; // +0x18
    id /* block */ _onClickEntry; // +0x20
    id /* block */ _onEntryAppear; // +0x28
    NSArray * _entryContainers; // +0x30
    UIView * _shadowHostView; // +0x38
    NSMutableSet * _appearedEntryIdentifiers; // +0x40
    unsigned long long _entranceGeneration; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initShadowHostView;
- (void)configureWithEntries:(id)arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)layoutEntries;
- (void)updateVisibilityAtIndex:(unsigned long long)arg1 visible:(BOOL)arg2;
- (void)setBottomOffset:(double)arg1;
- (void)playEntranceAnimation;
- (void)scheduleEntranceForVisibleEntries;
- (void)playEntranceAtIndex:(unsigned long long)arg1;
- (void)cancelEntranceAnimation;
- (void)setProcessingEntry:(id)arg1;
- (BOOL)containsEntryAtPoint:(CGPoint)arg1;
- (id)entryContainerAtPoint:(CGPoint)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (double)bottomOffset;
- (id)entries;
- (void)setEntries:(id)arg1;
- (id /* block */)onClickEntry;
- (void)setOnClickEntry:(id /* block */)arg1;
- (id /* block */)onEntryAppear;
- (void)setOnEntryAppear:(id /* block */)arg1;
- (id)entryContainers;
- (void)setEntryContainers:(id)arg1;
- (id)shadowHostView;
- (void)setShadowHostView:(id)arg1;
- (id)appearedEntryIdentifiers;
- (void)setAppearedEntryIdentifiers:(id)arg1;
- (unsigned long long)entranceGeneration;
- (void)setEntranceGeneration:(unsigned long long)arg1;
- (BOOL)entranceStarted;
- (void)setEntranceStarted:(BOOL)arg1;
- (void).cxx_destruct;
@end
