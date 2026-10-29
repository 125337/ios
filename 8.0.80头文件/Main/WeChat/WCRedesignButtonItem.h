@interface WCRedesignButtonItem : WCRedesignBaseItem
{
    NSString * _subtitle; // +0x40
    id /* block */ _tapHandler; // +0x48
    MMUILabel * _subtitleLabel; // +0x50
    UIImageView * _arrowImageView; // +0x58
}
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)initContentView;
- (void)onLayoutContentViewSubviews;
- (void)setM_title:(id)arg1;
- (void)setEnable:(BOOL)arg1;
- (void)setSubtitle:(id)arg1;
- (id)getValue;
- (void)updateAccessibility;
- (void)setTapHandler:(id /* block */)arg1;
- (void)onTapBackground;
- (id)subtitle;
- (id /* block */)tapHandler;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
