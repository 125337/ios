@interface CBTAsstBoardMenuItemView : MMUIButton
{
    id <CBTAsstBoardMenuItemDelegate> _delegate; // +0x8
    CBTAsstBoardMenuViewModel * _viewModel; // +0x10
    CBTAsstHomePageMenuInfo * _menuItem; // +0x18
    UILabel * _descLabel; // +0x20
    UILabel * _questionLabel; // +0x28
    unsigned long long _amoebaExposeStartTimeMs; // +0x30
    long long _trackedMaxExpPct; // +0x38
    struct _layout; // +0x40
}
- (id)initWithMenuItem:(id)arg1 viewModel:(id)arg2 layout:(struct)arg3;
- (void)setupTitleLabel;
- (void)applyAccessibility;
- (id)resolvedTextColor;
- (id)currentArrowImage;
- (void)refreshTheme;
- (void)traitCollectionDidChange:(id)arg1;
- (void)onTouchDown;
- (void)onTouchCancel;
- (void)onClick;
- (void)didMoveToWindow;
- (void)seedInitialMaxExpPctIfNeeded;
- (long long)currentVisiblePct;
- (void)updateMaxExpPct:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)menuItem;
- (void)setMenuItem:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)questionLabel;
- (void)setQuestionLabel:(id)arg1;
- (struct)layout;
- (void)setLayout:(struct)arg1;
- (unsigned long long)amoebaExposeStartTimeMs;
- (void)setAmoebaExposeStartTimeMs:(unsigned long long)arg1;
- (long long)trackedMaxExpPct;
- (void)setTrackedMaxExpPct:(long long)arg1;
- (void).cxx_destruct;
@end
