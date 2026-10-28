@interface MinimizeTaskFloatingContainerView : UIView <IMiniMizeUserdRecordUpdateExt>
{
    MinimizeTaskFloatingInfo * _containerInfo; // +0x8
    id <MinimizeTaskFloatingContainerViewDelegate> _delegate; // +0x10
    UIView * _contentContainerView; // +0x18
    UIImageView * _contentImageView; // +0x20
    UIButton * _contentButton; // +0x28
    UIView * _bizIconBlurView; // +0x30
    UIImageView * _bizIconView; // +0x38
    UIImageView * _topMaskView; // +0x40
    UIImageView * _bottomMaskView; // +0x48
    MMUIButton * _closeButton; // +0x50
    UIView * _inactiveMaskView; // +0x58
    UIView * _expandMaskView; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)initUI;
- (void)setContainerInfo:(id)arg1;
- (void)updateTransform;
- (void)updateContent;
- (void)setDragToExpandProgress:(double)arg1 dragOffset:(double)arg2;
- (CGSize)contentSize;
- (void)layoutSubviews;
- (void)onClickAtCloseButton:(id)arg1;
- (void)onClickAtTaskContent:(id)arg1;
- (void)onTaskSnapShotUpdate:(id)arg1 snapshot:(id)arg2;
- (id)containerInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)contentImageView;
- (void)setContentImageView:(id)arg1;
- (id)contentButton;
- (void)setContentButton:(id)arg1;
- (id)bizIconBlurView;
- (void)setBizIconBlurView:(id)arg1;
- (id)bizIconView;
- (void)setBizIconView:(id)arg1;
- (id)topMaskView;
- (void)setTopMaskView:(id)arg1;
- (id)bottomMaskView;
- (void)setBottomMaskView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)inactiveMaskView;
- (void)setInactiveMaskView:(id)arg1;
- (id)expandMaskView;
- (void)setExpandMaskView:(id)arg1;
- (void).cxx_destruct;
@end
