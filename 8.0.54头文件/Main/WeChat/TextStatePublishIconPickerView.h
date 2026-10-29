@interface TextStatePublishIconPickerView : UIScrollView <TextStatePublishCustomIconViewDelegate, TextStatePublishRecentUseIconViewDelegate, TextStatePublishOfficialIconCollectionViewDelegate, TextStateEmojiBoardViewDelegate, UIScrollViewDelegate, TextStateMgrExt, TextStatePublishIconPicker>
{
    id /* block */ _iconPickHandler; // +0x8
    TextStatePublishIconList * _publishIconList; // +0x10
    id <TextStatePublishCustomIconViewDelegate> _customIconViewDelegate; // +0x18
    TextStatePublishReportObject * _reportObject; // +0x20
    TextStateEmojiBoardReportObject * _emojiBoardReportObject; // +0x28
    unsigned long long _components; // +0x30
    UIView * _contentView; // +0x38
    UIView * _sideView; // +0x40
    TextStatePublishCustomIconView * _customIconView; // +0x48
    TextStatePublishRecentUseIconView * _recentUseIconView; // +0x50
    TextStatePublishOfficialIconCollectionView * _recommendIconView; // +0x58
    TextStateEmojiBoardView * _emojiBoardView; // +0x60
    CAGradientLayer * _gradientMaskLayer; // +0x68
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
- (void)onTextExceedMaxLength:(id)arg1;
- (void)onDescrpitionTextDidBeginEditing:(id)arg1;
- (void)onSwitchIconButtonSelected:(BOOL)arg1 customIconView:(id)arg2;
- (id)autoReplacedIconWithDescription:(id)arg1;
- (void)onEmojiBoardItemSelected:(id)arg1 groupDescription:(id)arg2;
- (void)showEmojiBoardWithAnimation;
- (void)hideEmojiBoardWithAnimation;
- (void)onSelectOfficialIcon:(id)arg1;
- (void)onSelectRecentUseIcon:(id)arg1;
- (void)onRecentUseIconListCleared;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onTextStateIconUpdate;
- (id /* block */)iconPickHandler;
- (void)setIconPickHandler:(id /* block */)arg1;
- (id)publishIconList;
- (id)customIconViewDelegate;
- (void)setCustomIconViewDelegate:(id)arg1;
- (id)reportObject;
- (void)setEmojiBoardReportObject:(id)arg1;
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

