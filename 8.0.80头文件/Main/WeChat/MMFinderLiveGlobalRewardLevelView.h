@interface MMFinderLiveGlobalRewardLevelView : MMUIView
{
    BOOL _showEditButton; // +0x8
    id <MMFinderLiveGlobalRewardLevelViewDelegate> _delegate; // +0x10
    CAGradientLayer * _gradientLayer; // +0x18
    CALayer * _colorLayer; // +0x20
    UIImageView * _globalRewardLevelBackImgView; // +0x28
    MMUILabel * _globalRewardLevelHeadingLabel; // +0x30
    MMUILabel * _globalRewardLevelNumLabel; // +0x38
    MMUIButton * _globalRewardLevelEditButton; // +0x40
    UIImageView * _globalRewardLevelIconView; // +0x48
    UIImageView * _globalRewardLevelIconBgView; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onGlobalRewardLevelEditButtonClicked:(id)arg1;
- (void)updateTargetRank:(unsigned int)arg1;
- (void)updateLayersWithRank:(unsigned int)arg1;
- (void)createGradientLayer;
- (void)createColorLayer;
- (void)setShowEditButton:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)showEditButton;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)colorLayer;
- (void)setColorLayer:(id)arg1;
- (id)globalRewardLevelBackImgView;
- (void)setGlobalRewardLevelBackImgView:(id)arg1;
- (id)globalRewardLevelHeadingLabel;
- (void)setGlobalRewardLevelHeadingLabel:(id)arg1;
- (id)globalRewardLevelNumLabel;
- (void)setGlobalRewardLevelNumLabel:(id)arg1;
- (id)globalRewardLevelEditButton;
- (void)setGlobalRewardLevelEditButton:(id)arg1;
- (id)globalRewardLevelIconView;
- (void)setGlobalRewardLevelIconView:(id)arg1;
- (id)globalRewardLevelIconBgView;
- (void)setGlobalRewardLevelIconBgView:(id)arg1;
- (void).cxx_destruct;
@end
