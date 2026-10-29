@interface WNTranslateTopView : UIView
{
    UILabel * m_contentLabel; // +0x8
    FavActivityIndicatorView * m_loadingView; // +0x10
    UIButton * m_closeBtn; // +0x18
    UIButton * m_changeLanguageBtn; // +0x20
    id <WNTranslateTopViewDelegate> _delegate; // +0x28
}
- (void)beginTranslate;
- (void)didTranslateComplete;
- (void)changeWidthTo:(double)arg1;
- (void)onClose:(id)arg1;
- (void)onChangeLanguage:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

