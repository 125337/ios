@interface EmoticonCustomManageView : MMUIView
{
    EmoticonCustomManageWrap * _wrap; // +0x8
    UIView * _contentContainerView; // +0x10
    UIImageView * _emoticonView; // +0x18
    UIView * _selectedMaskView; // +0x20
    MMAssetSelectCheckButton * _selectCheckButton; // +0x28
    UIView * _animationMaskView; // +0x30
    MMBadgeView * _countView; // +0x38
    UIView * _countContainerView; // +0x40
    UIView * _highlightOverlay; // +0x48
    id <EmoticonCustomManageViewDelegate> _delegate; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)resizeWithNewSize:(double)arg1 scaledSize:(double)arg2;
- (id)getMaskView;
- (id)countView;
- (void)configSelectedMarkView;
- (void)configAnimationMask;
- (void)setEmoticonCustomManageWrap:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateSelect;
- (void)updateCountContainerPosition;
- (void)doFlashAnimation;
- (void)onGestureTap;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)showHighLight:(BOOL)arg1;
- (id)wrap;
- (void)setWrap:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (id)selectedMaskView;
- (void)setSelectedMaskView:(id)arg1;
- (id)selectCheckButton;
- (void)setSelectCheckButton:(id)arg1;
- (id)animationMaskView;
- (void)setAnimationMaskView:(id)arg1;
- (void)setCountView:(id)arg1;
- (id)countContainerView;
- (void)setCountContainerView:(id)arg1;
- (id)highlightOverlay;
- (void)setHighlightOverlay:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
@end
