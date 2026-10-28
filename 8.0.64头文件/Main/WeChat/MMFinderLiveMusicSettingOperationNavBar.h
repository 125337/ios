@interface MMFinderLiveMusicSettingOperationNavBar : UIView
{
    BOOL _hideRightViews; // +0x8
    BOOL _shouldAdaptToDarkLight; // +0x9
    NSString * _noDataTitle; // +0x10
    NSString * _dataLoadedTitle; // +0x18
    NSString * _defaultTitle; // +0x20
    NSString * _dataEditedTitle; // +0x28
    UIColor * _editDoneButtonColor; // +0x30
    UIFont * _customTitleFont; // +0x38
    UIFont * _customSubTitleFont; // +0x40
    NSString * _normalSubtitle; // +0x48
    NSString * _editingSubtitle; // +0x50
    NSString * _noDataSubtitle; // +0x58
    long long _currentState; // +0x60
    id /* block */ _leftButtonActionCallback; // +0x68
    id /* block */ _rightButtonActionCallback; // +0x70
    id /* block */ _addButtonActionCallback; // +0x78
    id /* block */ _operationBarTapCallback; // +0x80
    UIButton * _navLeftButton; // +0x88
    UIView * _navRightButton; // +0x90
    MMUILabel * _titleView; // +0x98
    MMUILabel * _subtitleView; // +0xa0
    MMFinderLiveMusicSettingOperationBar * _settingOpertionBar; // +0xa8
}
+ (double)preferHeight;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 adaptDarkLight:(BOOL)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSubTitleView;
- (void)layoutTitleView;
- (void)layoutNavLeftButton;
- (void)layoutNavRightButton;
- (void)updateUI;
- (id)getCurrentTitleView;
- (id)getCurrentSubTitleView;
- (id)getTitleLabelWithTitle:(id)arg1;
- (id)getCurrentLeftButton;
- (id)getCurrentRightView;
- (id)createOperationBar;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)setCurrentState:(long long)arg1;
- (void)setDataLoadedTitle:(id)arg1;
- (void)setDefaultTitle:(id)arg1;
- (void)setDataEditedTitle:(id)arg1;
- (void)setNoDataTitle:(id)arg1;
- (void)setEditDoneButtonColor:(id)arg1;
- (void)setNormalSubtitle:(id)arg1;
- (void)setEditingSubtitle:(id)arg1;
- (void)setNoDataSubtitle:(id)arg1;
- (id)currentSettingOperationBar;
- (id)noDataTitle;
- (id)dataLoadedTitle;
- (id)defaultTitle;
- (id)dataEditedTitle;
- (id)editDoneButtonColor;
- (id)customTitleFont;
- (void)setCustomTitleFont:(id)arg1;
- (id)customSubTitleFont;
- (void)setCustomSubTitleFont:(id)arg1;
- (BOOL)hideRightViews;
- (void)setHideRightViews:(BOOL)arg1;
- (id)normalSubtitle;
- (id)editingSubtitle;
- (id)noDataSubtitle;
- (long long)currentState;
- (id /* block */)leftButtonActionCallback;
- (void)setLeftButtonActionCallback:(id /* block */)arg1;
- (id /* block */)rightButtonActionCallback;
- (void)setRightButtonActionCallback:(id /* block */)arg1;
- (id /* block */)addButtonActionCallback;
- (void)setAddButtonActionCallback:(id /* block */)arg1;
- (id /* block */)operationBarTapCallback;
- (void)setOperationBarTapCallback:(id /* block */)arg1;
- (id)navLeftButton;
- (void)setNavLeftButton:(id)arg1;
- (id)navRightButton;
- (void)setNavRightButton:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)subtitleView;
- (void)setSubtitleView:(id)arg1;
- (id)settingOpertionBar;
- (void)setSettingOpertionBar:(id)arg1;
- (BOOL)shouldAdaptToDarkLight;
- (void)setShouldAdaptToDarkLight:(BOOL)arg1;
- (void).cxx_destruct;
@end
