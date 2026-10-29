@interface FaceRecogReadNumGuideView : MMUIView <UIScrollViewDelegate>
{
    UIScrollView * _pageScrollView; // +0x8
    MMUILabel * _guideTitleLabel; // +0x10
    UIImageView * _firstStepNumberIconView; // +0x18
    MMUILabel * _firstStepContentLabel; // +0x20
    UIImageView * _firstStepIconView; // +0x28
    UIImageView * _secondStepNumberIconView; // +0x30
    MMUILabel * _secondStepContentLabel; // +0x38
    UIImageView * _secondStepIconView; // +0x40
    UIButton * _finishBtn; // +0x48
    UIView * _connectLineView; // +0x50
    FaceRecogGuideInfo * _guideInfo; // +0x58
    id <FaceRecogGuideViewDelegate> _delegate; // +0x60
}
- (id)initWithDelegate:(id)arg1;
- (void)initView;
- (void)initScrollView;
- (void)initFirstPage;
- (void)initLineView;
- (void)initData;
- (id)pageScrollView;
- (void)setPageScrollView:(id)arg1;
- (id)guideTitleLabel;
- (void)setGuideTitleLabel:(id)arg1;
- (id)firstStepNumberIconView;
- (void)setFirstStepNumberIconView:(id)arg1;
- (id)firstStepContentLabel;
- (void)setFirstStepContentLabel:(id)arg1;
- (id)firstStepIconView;
- (void)setFirstStepIconView:(id)arg1;
- (id)secondStepNumberIconView;
- (void)setSecondStepNumberIconView:(id)arg1;
- (id)secondStepContentLabel;
- (void)setSecondStepContentLabel:(id)arg1;
- (id)secondStepIconView;
- (void)setSecondStepIconView:(id)arg1;
- (id)finishBtn;
- (void)setFinishBtn:(id)arg1;
- (id)connectLineView;
- (void)setConnectLineView:(id)arg1;
- (id)guideInfo;
- (void)setGuideInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
