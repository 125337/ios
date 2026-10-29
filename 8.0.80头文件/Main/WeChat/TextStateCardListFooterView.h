@interface TextStateCardListFooterView : UIView
{
    BOOL _showPublishEntry; // +0x8
    NSString * _footnote; // +0x10
    id /* block */ _tapPublishButtonHandler; // +0x18
    MMUILabel * _footnoteLabel; // +0x20
    MMUIButton * _publishButton; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFootnote:(id)arg1;
- (void)setShowPublishEntry:(BOOL)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)onTapPublishButton;
- (id)footnote;
- (BOOL)showPublishEntry;
- (id /* block */)tapPublishButtonHandler;
- (void)setTapPublishButtonHandler:(id /* block */)arg1;
- (id)footnoteLabel;
- (void)setFootnoteLabel:(id)arg1;
- (id)publishButton;
- (void)setPublishButton:(id)arg1;
- (void).cxx_destruct;
@end
