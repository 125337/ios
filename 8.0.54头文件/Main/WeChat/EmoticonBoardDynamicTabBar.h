@interface EmoticonBoardDynamicTabBar : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    CADisplayLink * _transitionDisplayLink; // +0x8
    long long _progressCount; // +0x10
    long long _currentCount; // +0x18
    NSValue * _recentTouchPointValue; // +0x20
    double _transitionPositionPercent; // +0x28
    MMTimer * _countDownTimer; // +0x30
    EmoticonTabItem * _settingItem; // +0x38
    EmoticonTabItem * _plusItem; // +0x40
    EmoticonTabItem * _searchItem; // +0x48
    BOOL _darkMode; // +0x50
    BOOL _hasFloatingFoldButton; // +0x51
    BOOL _hasPlusButton; // +0x52
    BOOL _hasSettingButton; // +0x53
    BOOL _hasSearchButton; // +0x54
    id <EmoticonBoardDynamicTabBarDelegate> _delegate; // +0x58
    NSString * _selectedPid; // +0x60
    NSArray * _emoticonTabItems; // +0x68
    NSMutableArray * _innerTabItems; // +0x70
    UIView * _contentView; // +0x78
    UIButton * _foldButton; // +0x80
    UIView * _buttonFloatingBackgroundView; // +0x88
    UICollectionView * _collectionView; // +0x90
    EmoticonBoardDynamicTabBarLayout * _collectionLayout; // +0x98
    UIView * _lineView; // +0xa0
    UIEdgeInsets _inset; // +0xa8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configCollectionViewLayout;
- (void)configCollectionView;
- (void)configHardcodeEmoticonItems;
- (void)configButtons;
- (void)setEmoticonTabItems:(id)arg1;
- (void)setSelectedPid:(id)arg1;
- (void)setHasFloatingFoldButton:(BOOL)arg1;
- (void)setDarkMode:(BOOL)arg1;
- (unsigned long long)tabCount;
- (void)reloadData;
- (void)setSelectedPid:(id)arg1 shouldAdjustContentOffset:(BOOL)arg2;
- (void)onClickFloatingButton;
- (void)setInset:(UIEdgeInsets)arg1;
- (void)setHasSettingButton:(BOOL)arg1;
- (void)setHasPlusButton:(BOOL)arg1;
- (void)setHasSearchButton:(BOOL)arg1;
- (CGPoint)safeXContentOffsetFromContentOffset:(CGPoint)arg1 collectionView:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedPid;
- (BOOL)darkMode;
- (UIEdgeInsets)inset;
- (BOOL)hasFloatingFoldButton;
- (BOOL)hasPlusButton;
- (BOOL)hasSettingButton;
- (BOOL)hasSearchButton;
- (id)emoticonTabItems;
- (id)innerTabItems;
- (void)setInnerTabItems:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)foldButton;
- (void)setFoldButton:(id)arg1;
- (id)buttonFloatingBackgroundView;
- (void)setButtonFloatingBackgroundView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end

