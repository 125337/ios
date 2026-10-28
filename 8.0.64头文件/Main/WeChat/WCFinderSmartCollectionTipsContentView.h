@interface WCFinderSmartCollectionTipsContentView : UIView <UIContentView>
{
    WCFinderSmartCollectionTipsConfiguration * _appliedConfiguration; // +0x8
    UIButton * _episodeBtn; // +0x10
}
+ (id)getTipsStr;
+ (CGSize)getTipsSize:(double)arg1;
+ (double)itemHeightWithLayoutEnvironment:(id)arg1 context:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)_setupUI;
- (void)layoutSubviews;
- (void)clickModFeedButtonAction:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (id)episodeBtn;
- (id)appliedConfiguration;
- (void)setAppliedConfiguration:(id)arg1;
- (void)setEpisodeBtn:(id)arg1;
- (void).cxx_destruct;
@end
