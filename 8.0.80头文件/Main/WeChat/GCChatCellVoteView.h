@interface GCChatCellVoteView : UIView
{
    UIView * _splitLine; // +0x8
    UILabel * _voteTipLabel; // +0x10
    MMUIButton * _rightLightImageBtn; // +0x18
    UIView * _iconArrayContainerView; // +0x20
    NSMutableDictionary * _userNameImgViewDict; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)cutRightWithHeadOffset:(double)arg1 webImgView:(id)arg2;
- (void)configureWithIconArray:(id)arg1 tip:(id)arg2;
- (void)configureIsVoteByMe:(BOOL)arg1;
- (void)onUserDataDictUpdate:(id)arg1;
- (id)splitLine;
- (void)setSplitLine:(id)arg1;
- (id)voteTipLabel;
- (void)setVoteTipLabel:(id)arg1;
- (id)rightLightImageBtn;
- (void)setRightLightImageBtn:(id)arg1;
- (id)iconArrayContainerView;
- (void)setIconArrayContainerView:(id)arg1;
- (id)userNameImgViewDict;
- (void)setUserNameImgViewDict:(id)arg1;
- (void).cxx_destruct;
@end
