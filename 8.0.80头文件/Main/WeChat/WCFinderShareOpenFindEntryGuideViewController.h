@interface WCFinderShareOpenFindEntryGuideViewController : WCFinderCustomPanelSheet
{
    id /* block */ _confirmAction; // +0x70
    id /* block */ _secondaryAction; // +0x78
    id /* block */ _willCloseAction; // +0x80
    WCFinderShareOpenFindEntryGuideParams * _params; // +0x88
    UILabel * _topTitleLabel; // +0x90
    WCFinderRichTextView * _subtitleLabel; // +0x98
    UIImageView * _centerImageView; // +0xa0
    UIButton * _confirmButton; // +0xa8
    UIButton * _denyButton; // +0xb0
}
- (id)initWithParams:(id)arg1;
- (id)_guideImage;
- (void)_updateCenterImage;
- (id)_layoutContentView;
- (double)_layoutContentWidth;
- (CGSize)_centerImageSizeWithImage:(id)arg1;
- (void)_updateTitleLayout;
- (void)_updateCenterImageLayout;
- (void)_updateButtonLayoutAndContentHeight;
- (void)_relayoutContentSubviews;
- (id)loadContentView;
- (void)reloadLayout;
- (long long)closeButtonStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)panelSheetWillCloseWithAction:(unsigned long long)arg1;
- (id /* block */)confirmAction;
- (void)setConfirmAction:(id /* block */)arg1;
- (id /* block */)secondaryAction;
- (void)setSecondaryAction:(id /* block */)arg1;
- (id /* block */)willCloseAction;
- (void)setWillCloseAction:(id /* block */)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)topTitleLabel;
- (void)setTopTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)centerImageView;
- (void)setCenterImageView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)denyButton;
- (void)setDenyButton:(id)arg1;
- (void).cxx_destruct;
@end
