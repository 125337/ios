@interface WCFinderLikeEasterEggLikeListBannerView : UIView
{
    id /* block */ _onTapBlock; // +0x8
    WCFinderLikeEasterEggLikeListBannerViewReportModel * _reportModel; // +0x10
    CEmoticonWrap * _emoticon; // +0x18
    UIImageView * _icon; // +0x20
    UILabel * _label; // +0x28
    MMEmoticonView * _emoticonView; // +0x30
    UIImageView * _arrowView; // +0x38
}
+ (double)bannerHeight;
- (id)init;
- (void)updateWithEmoticon:(id)arg1;
- (void)_setupUI;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)_onTap;
- (id)icon;
- (id)label;
- (id)emoticonView;
- (id)arrowView;
- (void)_setupReport;
- (id /* block */)onTapBlock;
- (void)setOnTapBlock:(id /* block */)arg1;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (id)emoticon;
- (void)setEmoticon:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setEmoticonView:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end
