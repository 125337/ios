@interface WCFinderCollectionHalfDescHeader : UIView <WCFinderFeedContentTextClickActionDelegate>
{
    id <WCFinderCollectionHalfDescHeaderDelegate> _delegate; // +0x8
    WCFinderCollectionHalfViewParams * _params; // +0x10
    MMUIButton * _moreBtn; // +0x18
    UIView * _customRightView; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _episodeLabel; // +0x30
    WCFinderFeedContentTextView * _descTextView; // +0x38
    double _layoutWidth; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)curRightView;
- (void)setupUI;
- (void)updateWithParams:(id)arg1 customRightView:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)didClickMore;
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
- (id)episodeLabel;
- (void)setEpisodeLabel:(id)arg1;
- (id)descTextView;
- (void)setDescTextView:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end

