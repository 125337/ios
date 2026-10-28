@interface MMIndexedContainerView : MMUIView
{
    BOOL _shouldEnableIndexing; // +0x8
    long long _numOfViewsNoGreaterThanDefault; // +0x10
    long long _defaultIndexBeginPos; // +0x18
    long long _onceFlag; // +0x20
}
- (long long)subviewBottomMostIndex;
- (long long)subviewDefaultIndex;
- (long long)subviewDefaultFrontIndex;
- (long long)subviewTopMostIndex;
- (BOOL)enableSubviewIndexing;
- (BOOL)shouldEnableIndexing;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)exchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;
- (void)addSubview:(id)arg1;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)bringSubviewToFront:(id)arg1;
- (void)sendSubviewToBack:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)addSubview:(id)arg1 atHierarchyIndex:(long long)arg2;
- (void)_addSubview:(id)arg1 atHierarchyIndex:(long long)arg2;
- (void)changeHierarchyIndexForSubview:(id)arg1 newHierarchyIndex:(long long)arg2;
- (void)_changeHierarchyIndexForSubview:(id)arg1 newHierarchyIndex:(long long)arg2;
- (void)handleInsertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)_handleInsertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)handleExchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;
- (void)_handleExchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;
- (void)handleAddSubview:(id)arg1;
- (void)_handleAddSubview:(id)arg1;
- (void)handleInsertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)_handleInsertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)handleInsertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)_handleInsertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)handleBringSubviewToFront:(id)arg1;
- (void)_handleBringSubviewToFront:(id)arg1;
- (void)handleSendSubviewToBack:(id)arg1;
- (void)_handleSendSubviewToBack:(id)arg1;
- (void)handleWillRemoveSubview:(id)arg1;
- (void)updateDefaultIndexRangeAfterInsertSubview:(id)arg1;
- (id)debugHierarchyInfo;
- (void)checkCurrentHierarchy;
- (void)setHierarchyIndex:(long long)arg1 forView:(id)arg2;
- (long long)getHierarchyIndexFromView:(id)arg1;
- (long long)numOfViewsNoGreaterThanDefault;
- (void)setNumOfViewsNoGreaterThanDefault:(long long)arg1;
- (long long)defaultIndexBeginPos;
- (void)setDefaultIndexBeginPos:(long long)arg1;
- (long long)onceFlag;
- (void)setOnceFlag:(long long)arg1;
- (void)setShouldEnableIndexing:(BOOL)arg1;
@end
