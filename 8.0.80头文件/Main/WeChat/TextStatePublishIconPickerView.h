@interface TextStatePublishIconPickerView : UIScrollView <TextStatePublishCustomIconViewDelegate, TextStatePublishRecentUseIconViewDelegate, TextStatePublishOfficialIconCollectionViewDelegate, TextStateEmojiBoardViewDelegate, UIScrollViewDelegate, TextStateMgrExt, TextStatePublishIconPicker>
{
    id /* block */ _iconPickHandler; // +0x8
    TextStatePublishIconList * _publishIconList; // +0x10
    id <TextStatePublishCustomIconViewDelegate> _customIconViewDelegate; // +0x18
    TextStatePublishReportObject * _reportObject; // +0x20
    TextStateEmojiBoardReportObject * _emojiBoardReportObject; // +0x28
    TextStatePublishCustomIconPanelReportObject * _customIconPanelReportObject; // +0x30
    unsigned long long _components; // +0x38
    UIView * _contentView; // +0x40
    UIView * _sideView; // +0x48
    TextStatePublishCustomIconView * _customIconView; // +0x50
    TextStatePublishRecentUseIconView * _recentUseIconView; // +0x58
    TextStatePublishOfficialIconCollectionView * _recommendIconView; // +0x60
    TextStateEmojiBoardView * _emojiBoardView; // +0x68
    CAGradientLayer * _gradientMaskLayer; // +0x70
}
- (id)initWithComponents:(unsigned long long)arg1;
- (void)initSubviews;
- (void)initGradientLayer;
- (void)updateGradientLayer;
- (void)setFrame:(CGRect)arg1;
- (void)updateLayout;
- (void)setPublishIconList:(id)arg1;
- (void)setReportObject:(id)arg1;
- (id)emojiBoardReportObject;
- (double)customIconExpandHeight;
- (void)resetToTop;
- (void)refresh;
- (BOOL)enableDragToClose;
- (void)shrinkCustomIconViewIfNeeded;
- (BOOL)shrinkCustomIconView:(id)arg1;
- (void)onTapNonexpandedView:(id)arg1;
- (void)onTapCancelButton:(id)arg1;
- (void)onTapDoneButton:(id)arg1;
- (void)onTapSwitchIconButton:(id)arg1;
- (void)onTextExceedMaxLength:(id)arg1;
- (void)onDescrpitionTextDidBeginEditing:(id)arg1;
- (void)onSwitchIconButtonSelected:(BOOL)arg1 customIconView:(id)arg2;
- (id)autoReplacedIconWithDescription:(id)arg1;
- (void)onDescTextShouldRequestRecommend:(id)arg1;
- (void)onEmojiBoardItemSelected:(id)arg1 groupDescription:(id)arg2 iconSelectFrom:(long long)arg3;
- (id)getCurrentInputCustomIconDesc;
- (void)showEmojiBoardWithAnimation;
- (void)hideEmojiBoardWithAnimation;
- (void)onSelectOfficialIcon:(id)arg1;
- (void)onSelectRecentUseIcon:(id)arg1;
- (void)onRecentUseIconListCleared;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onTextStateIconUpdate;
- (id)getSdkPublishEventReportParams:(id)arg1;
- (void)reportCustomIconPanelExpand;
- (void)reportCustomIconPanelShrinkIfNeed;
- (id /* block */)iconPickHandler;
- (void)setIconPickHandler:(id /* block */)arg1;
- (id)publishIconList;
- (id)customIconViewDelegate;
- (void)setCustomIconViewDelegate:(id)arg1;
- (id)reportObject;
- (void)setEmojiBoardReportObject:(id)arg1;
- (id)customIconPanelReportObject;
- (void)setCustomIconPanelReportObject:(id)arg1;
- (unsigned long long)components;
- (void)setComponents:(unsigned long long)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)sideView;
- (void)setSideView:(id)arg1;
- (id)customIconView;
- (void)setCustomIconView:(id)arg1;
- (id)recentUseIconView;
- (void)setRecentUseIconView:(id)arg1;
- (id)recommendIconView;
- (void)setRecommendIconView:(id)arg1;
- (id)emojiBoardView;
- (void)setEmojiBoardView:(id)arg1;
- (id)gradientMaskLayer;
- (void)setGradientMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end
