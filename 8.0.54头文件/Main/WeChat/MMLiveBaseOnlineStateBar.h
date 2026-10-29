@interface MMLiveBaseOnlineStateBar : MMLiveBaseComponentView
{
    BOOL _removeAvatarIcon; // +0x8
    BOOL _showingRunningBank; // +0x9
    MMUIButton * _onlineStateButton; // +0x10
    id /* block */ _onlineStateButtonClickedBlock; // +0x18
    NSString * _onlineCountTitle; // +0x20
    double _maxWidth; // +0x28
}
- (void)setMaxWidth:(double)arg1;
- (void)sizeToFits;
- (void)refreshWidgetsForFontSizeChange;
- (id)onlineStateButton;
- (void)setOnlineStateButton:(id)arg1;
- (BOOL)removeAvatarIcon;
- (void)setRemoveAvatarIcon:(BOOL)arg1;
- (id /* block */)onlineStateButtonClickedBlock;
- (void)setOnlineStateButtonClickedBlock:(id /* block */)arg1;
- (id)onlineCountTitle;
- (void)setOnlineCountTitle:(id)arg1;
- (BOOL)showingRunningBank;
- (void)setShowingRunningBank:(BOOL)arg1;
- (double)maxWidth;
- (void).cxx_destruct;
@end

