@interface WCAdSliderCardNormalCellView : WCAdSliderCardCellView <IWCAdSliderCardLogicExt>
{
    WCAdURLImageView * _backBorderView; // +0x8
    WCAdURLImageView * _frontBorderView; // +0x10
    WCAdSliderCardDecorationView * _decorationView; // +0x18
    MMUIButton * _buttonView; // +0x20
    WCAdURLImageView * _buttonIcon; // +0x28
    MMUILabel * _buttonTitle; // +0x30
    MMUILabel * _labelTitle; // +0x38
    MMUILabel * _labelDesc; // +0x40
    MMUIButton * _logoView; // +0x48
    ColorGradientView * _colorGradientView; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (id)getCellContentViewMaskPath:(CGRect)arg1;
- (id)createContentContainer;
- (void)initBackBorderView;
- (void)initFrontBorderView;
- (void)initDetailView;
- (void)initButtonView;
- (void)initLogoView;
- (void)updateContentUI;
- (double)updateButtonUI;
- (void)updateLeftViewUI:(double)arg1;
- (void)updateColorGradientView;
- (void)updateBorderView;
- (void)updateDecorationViewVisible;
- (id)fetchReportItem;
- (BOOL)shouldDownloadImageUseCDN;
- (id)sliderCardItem;
- (BOOL)shouldShowButton;
- (BOOL)shouldShowButtonIcon;
- (BOOL)shouldShowTitle;
- (BOOL)shouldShowDesc;
- (id)createTextViewWithContent:(id)arg1 textColor:(id)arg2 font:(id)arg3 maxWidth:(double)arg4;
- (double)calcColorGradientViewHeight;
- (void)onClickButton:(id)arg1;
- (id)sliderCardLogic;
- (void)onOpeningAnimationVisibleStateChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 isVisible:(BOOL)arg3;
- (id)backBorderView;
- (void)setBackBorderView:(id)arg1;
- (id)frontBorderView;
- (void)setFrontBorderView:(id)arg1;
- (id)decorationView;
- (void)setDecorationView:(id)arg1;
- (id)buttonView;
- (void)setButtonView:(id)arg1;
- (id)buttonIcon;
- (void)setButtonIcon:(id)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (id)labelTitle;
- (void)setLabelTitle:(id)arg1;
- (id)labelDesc;
- (void)setLabelDesc:(id)arg1;
- (id)logoView;
- (void)setLogoView:(id)arg1;
- (id)colorGradientView;
- (void)setColorGradientView:(id)arg1;
- (void).cxx_destruct;
@end

