@interface MMFinderLiveKTVPanelTitleView : UIView
{
    BOOL _isRequestPanel; // +0x8
    id /* block */ _switchPanelBlock; // +0x10
    UILabel * _titleLeft; // +0x18
    UILabel * _titleRight; // +0x20
    UIView * _line; // +0x28
}
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onClickTitleLeft;
- (void)onClickTitleRight;
- (id)titleLeft;
- (id)titleRight;
- (id)line;
- (id /* block */)switchPanelBlock;
- (void)setSwitchPanelBlock:(id /* block */)arg1;
- (BOOL)isRequestPanel;
- (void)setIsRequestPanel:(BOOL)arg1;
- (void)setTitleLeft:(id)arg1;
- (void)setTitleRight:(id)arg1;
- (void)setLine:(id)arg1;
- (void).cxx_destruct;
@end
