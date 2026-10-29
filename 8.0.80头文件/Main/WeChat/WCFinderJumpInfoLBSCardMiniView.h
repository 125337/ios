@interface WCFinderJumpInfoLBSCardMiniView : UIView
{
    int _showPosition; // +0x8
    id <WCFinderJumpInfoLBSCardViewDelegate> _delegate; // +0x10
    FinderJumpInfo_Style * _style; // +0x18
    UIImageView * _iconView; // +0x20
    UILabel * _poiTitle; // +0x28
    UILabel * _poiWording; // +0x30
    MMUIButton * _favButton; // +0x38
    WCFinderJumpInfo * _jumpInfo; // +0x40
    double _layoutWidth; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateUI;
- (void)layoutSubviews;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateWithStyle:(id)arg1;
- (void)onFavBtnClicked:(id)arg1;
- (void)onCardClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)poiTitle;
- (void)setPoiTitle:(id)arg1;
- (id)poiWording;
- (void)setPoiWording:(id)arg1;
- (id)favButton;
- (void)setFavButton:(id)arg1;
- (int)showPosition;
- (void)setShowPosition:(int)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
