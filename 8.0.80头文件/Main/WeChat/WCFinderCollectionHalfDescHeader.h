@interface WCFinderCollectionHalfDescHeader : UIView <WCFinderFeedContentTextClickActionDelegate>
{
    id <WCFinderCollectionHalfDescHeaderDelegate> _delegate; // +0x8
    WCFinderCollectionHalfViewParams * _params; // +0x10
    MMUIButton * _moreBtn; // +0x18
    UIView * _customRightView; // +0x20
    UILabel * _titleLabel; // +0x28
    WCFinderFeedContentTextView * _descTextView; // +0x30
    UIButton * _episodeBtn; // +0x38
    MMUIButton * _shareBtn; // +0x40
    MMUIButton * _favouriteBtn; // +0x48
    double _layoutWidth; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (id)curRightView;
- (void)setupUI;
- (id)createSecondaryButtonWithTitle:(id)arg1 action:(SEL)arg2;
- (void)updateWithParams:(id)arg1 customRightView:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)didClickMore;
- (void)clickModFeedButtonAction:(id)arg1;
- (void)clickShareButtonAction:(id)arg1;
- (void)clickFavouriteButtonAction:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)moreBtn;
- (void)setMoreBtn:(id)arg1;
- (id)customRightView;
- (void)setCustomRightView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descTextView;
- (void)setDescTextView:(id)arg1;
- (id)episodeBtn;
- (void)setEpisodeBtn:(id)arg1;
- (id)shareBtn;
- (void)setShareBtn:(id)arg1;
- (id)favouriteBtn;
- (void)setFavouriteBtn:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
