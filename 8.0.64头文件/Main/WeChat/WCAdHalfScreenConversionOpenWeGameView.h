@interface WCAdHalfScreenConversionOpenWeGameView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    WCAdOpenWeGameHalfScreenInfo * _halfScreenInfo; // +0x8
    id /* block */ _resultBlock; // +0x10
    WCAdURLImageView * _gameIconView; // +0x18
    MMUILabel * _gameTitleView; // +0x20
    MMUILabel * _giftNameView; // +0x28
    MMUILabel * _tipWordingView; // +0x30
}
- (id)initWithHalfScreenInfo:(id)arg1 resultBlock:(id /* block */)arg2;
- (void)initCommonUI;
- (void)initDetailUI;
- (id)createLabel:(id)arg1 height:(double)arg2 font:(id)arg3 textColor:(id)arg4;
- (id)gameIconView;
- (id)gameTitleView;
- (id)tipWordingView;
- (id)giftNameView;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)halfScreenInfo;
- (void)setHalfScreenInfo:(id)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (void)setGameIconView:(id)arg1;
- (void)setGameTitleView:(id)arg1;
- (void)setGiftNameView:(id)arg1;
- (void)setTipWordingView:(id)arg1;
- (void).cxx_destruct;
@end
