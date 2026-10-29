@interface WAMainFrameChatBotSugSectionView : WAMainFrameTaskBarSectionBaseView
{
    id /* block */ _onSugTapHandler; // +0x8
    id /* block */ _onSugLongPressHandler; // +0x10
    WAMainFrameChatBotSugButton * _sugCapsule; // +0x18
}
+ (long long)contentHeight;
- (void)initView;
- (void)updateSugText:(id)arg1;
- (void)setSugLoading:(BOOL)arg1;
- (void)layoutSubviews;
- (id /* block */)onSugTapHandler;
- (void)setOnSugTapHandler:(id /* block */)arg1;
- (id /* block */)onSugLongPressHandler;
- (void)setOnSugLongPressHandler:(id /* block */)arg1;
- (id)sugCapsule;
- (void)setSugCapsule:(id)arg1;
- (void).cxx_destruct;
@end
