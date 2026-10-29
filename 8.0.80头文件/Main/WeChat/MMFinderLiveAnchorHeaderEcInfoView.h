@interface MMFinderLiveAnchorHeaderEcInfoView : UIView <IMMFontMgrExt>
{
    id /* block */ _tapCallback; // +0x8
    MMWebImageView * _tagIconView; // +0x10
    MMUILabel * _tagTextLabel; // +0x18
    MMFinderLiveAnchorHeaderEcMarqueeView * _marqueeView; // +0x20
    FinderLiveAnchorHeaderEcTag * _lastTag; // +0x28
    CGSize _tagContentSize; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)configureWithTag:(id)arg1;
- (void)applyTagContent:(id)arg1;
- (void)updateMarquee:(id)arg1;
- (void)resetContent;
- (BOOL)hasValidContent;
- (void)layoutSubviews;
- (id)currentTagView;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onFontSizeChange;
- (void)onTap;
- (id /* block */)tapCallback;
- (void)setTapCallback:(id /* block */)arg1;
- (id)tagIconView;
- (void)setTagIconView:(id)arg1;
- (id)tagTextLabel;
- (void)setTagTextLabel:(id)arg1;
- (id)marqueeView;
- (void)setMarqueeView:(id)arg1;
- (CGSize)tagContentSize;
- (void)setTagContentSize:(CGSize)arg1;
- (id)lastTag;
- (void)setLastTag:(id)arg1;
- (void).cxx_destruct;
@end
