@interface WCFinderAuthorContactRecommendView : UIView
{
    WCFinderHeadImageView * _headImgView; // +0x8
    RichTextView * _nameLabel; // +0x10
    WCFinderAuthInfoIconView * _authIconView; // +0x18
    WCFinderAuthorContactRecommendViewStyle * _style; // +0x20
    double _nsFWidth; // +0x28
    UILabel * _followTextLabel; // +0x30
    UIView * _followStateView; // +0x38
    UILabel * _recommendTextLabel; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 style:(id)arg2;
- (void)setupUI;
- (void)setFWidth:(double)arg1;
- (void)updateWithContact:(id)arg1;
- (void)updateWithContact:(id)arg1 recommendReason:(id)arg2;
- (void)layoutUI;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)prepareForReuse;
- (id)headImgView;
- (void)setHeadImgView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (double)nsFWidth;
- (void)setNsFWidth:(double)arg1;
- (id)followTextLabel;
- (void)setFollowTextLabel:(id)arg1;
- (id)followStateView;
- (void)setFollowStateView:(id)arg1;
- (id)recommendTextLabel;
- (void)setRecommendTextLabel:(id)arg1;
- (void).cxx_destruct;
@end

