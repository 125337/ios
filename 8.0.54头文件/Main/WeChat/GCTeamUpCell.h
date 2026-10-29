@interface GCTeamUpCell : GCChatBaseCell
{
    UIView * _containerView; // +0x8
    MMWebImageView * _backGroundImgView; // +0x10
    UILabel * _topLabel; // +0x18
    UILabel * _midLabel; // +0x20
    MMWebImageView * _bottomImgView; // +0x28
    UILabel * _bottomLabel; // +0x30
    UIButton * _rightBtn; // +0x38
    JumpInfo * _jumpInfo; // +0x40
    UIView * _labelGroupView; // +0x48
}
+ (void)onCalculatLayoutInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)shouldBubbleViewClipsToBounds;
- (void)configureWithCellModel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)backGroundImgView;
- (void)setBackGroundImgView:(id)arg1;
- (id)topLabel;
- (void)setTopLabel:(id)arg1;
- (id)midLabel;
- (void)setMidLabel:(id)arg1;
- (id)bottomImgView;
- (void)setBottomImgView:(id)arg1;
- (id)bottomLabel;
- (void)setBottomLabel:(id)arg1;
- (id)rightBtn;
- (void)setRightBtn:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)labelGroupView;
- (void)setLabelGroupView:(id)arg1;
- (void).cxx_destruct;
@end

