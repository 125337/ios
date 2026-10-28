@interface WCFinderTabView : UIView <WCFinderTabViewProtocol>
{
    BOOL _useAutoFitTitleStrategy; // +0x8
    BOOL _redDotDoesNotOccupyWidth; // +0x9
    id <WCFinderTabViewDelegate> delegate; // +0x10
    UIColor * _normalColor; // +0x18
    UIColor * _selectedColor; // +0x20
    double _fWidth; // +0x28
    double _topInset; // +0x30
    double _bottomInset; // +0x38
    RichTextView * _titleView; // +0x40
    NSString * _bindPath; // +0x48
    UIView * _redDotView; // +0x50
    double _fontSize; // +0x58
    NSString * _customAccessibilityLabel; // +0x60
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)initUI;
- (void)setTitleText:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)sizeToFit;
- (id)titleView;
- (void)updateForState:(unsigned long long)arg1;
- (void)setBindRedDotPath:(id)arg1;
- (void)setRedDotString:(id)arg1;
- (void)clearRedDotView;
- (void)setCustomAccessibilityLabel:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)processRedDotView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)normalColor;
- (void)setNormalColor:(id)arg1;
- (id)selectedColor;
- (void)setSelectedColor:(id)arg1;
- (double)fWidth;
- (void)setFWidth:(double)arg1;
- (double)topInset;
- (void)setTopInset:(double)arg1;
- (double)bottomInset;
- (void)setBottomInset:(double)arg1;
- (BOOL)useAutoFitTitleStrategy;
- (void)setUseAutoFitTitleStrategy:(BOOL)arg1;
- (BOOL)redDotDoesNotOccupyWidth;
- (void)setRedDotDoesNotOccupyWidth:(BOOL)arg1;
- (void)setTitleView:(id)arg1;
- (id)bindPath;
- (void)setBindPath:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (double)fontSize;
- (id)customAccessibilityLabel;
- (void).cxx_destruct;
@end
