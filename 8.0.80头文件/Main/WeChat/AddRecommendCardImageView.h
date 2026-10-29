@interface AddRecommendCardImageView : MMUIView
{
    unsigned int _imageCandidateSourceType; // +0x8
    CardImageView * m_leftCardImageView; // +0x10
    MMUIView * m_spacerLine; // +0x18
    MMUILabel * m_titleLabel; // +0x20
    CardImageView * m_recommendCardImageView; // +0x28
    id <AddRecommendCardImageViewDelegate> _delegate; // +0x30
    NSString * _reportSessionId; // +0x38
    NSString * _nsUserName; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (id)genTitleLabel:(id)arg1;
- (void)setImage:(id)arg1;
- (id)getImage;
- (void)onTapAddCardImg:(id)arg1;
- (void)onTapSelectRecommendCardImageView:(id)arg1;
- (void)selectRecommendCardImageViewAnimationOneLine:(id /* block */)arg1;
- (void)selectRecommendCardImageViewAnimationTwoLine:(id /* block */)arg1 targetRect:(CGRect)arg2;
- (void)selectRecommendCardImageViewAnimationTwoLineLast:(id /* block */)arg1 targetRect:(CGRect)arg2 cardImageToMoreFootView:(id)arg3;
- (void)reportExp;
- (id)getDicReportParams;
- (id)leftCardImageView;
- (void)setLeftCardImageView:(id)arg1;
- (id)spacerLine;
- (void)setSpacerLine:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)recommendCardImageView;
- (void)setRecommendCardImageView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (id)nsUserName;
- (void)setNsUserName:(id)arg1;
- (unsigned int)imageCandidateSourceType;
- (void)setImageCandidateSourceType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
