@interface MMFinderLiveLandscapeBarrageSettingPanel : MMPageSheetBaseView
{
    id /* block */ _settingPanelCloseCallback; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    UIView * _contentView; // +0x18
    UIView * _gradientBackView; // +0x20
    CAGradientLayer * _gradientLayer; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUIButton * _closeButton; // +0x38
    UIScrollView * _contentScrollView; // +0x40
    MMFinderLiveLandscapeBarrageEntranceItemView * _entranceItem; // +0x48
    MMFinderLiveLandscapeBarrageParamCardItemView * _rangeParamCardItem; // +0x50
    MMFinderLiveLandscapeBarrageParamCardItemView * _displayParamCardItem; // +0x58
}
- (id)initWithTaskId:(id)arg1;
- (void)layoutSubviews;
- (void)initPageSheetConfig;
- (void)initNotifications;
- (void)initUI;
- (void)layoutUI;
- (void)layoutContentView;
- (double)contentViewWidth;
- (double)contentViewHeight;
- (double)getNavHeaderHeight;
- (void)layoutGradientBackView;
- (void)layoutTitleLabel;
- (void)layoutCloseButton;
- (void)layoutContentScrollView;
- (double)getContentScrollViewHeight;
- (void)updateContentScrollContentSize;
- (void)layoutEntranceItem;
- (void)layoutRangeParamCardItem;
- (void)layoutDisplayParamCardItem;
- (id)createParamCard:(unsigned long long)arg1;
- (void)onCloseAction;
- (id)liveTask;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id /* block */)settingPanelCloseCallback;
- (void)setSettingPanelCloseCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)gradientBackView;
- (void)setGradientBackView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)contentScrollView;
- (void)setContentScrollView:(id)arg1;
- (id)entranceItem;
- (void)setEntranceItem:(id)arg1;
- (id)rangeParamCardItem;
- (void)setRangeParamCardItem:(id)arg1;
- (id)displayParamCardItem;
- (void)setDisplayParamCardItem:(id)arg1;
- (void).cxx_destruct;
@end
