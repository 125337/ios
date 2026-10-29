@interface EmoticonCustomManageView : MMUIView
{
    BOOL _circleUnselectedStyle; // +0x8
    EmoticonCustomManageWrap * _wrap; // +0x10
    UIView * _contentContainerView; // +0x18
    UIImageView * _emoticonView; // +0x20
    UIView * _selectedMaskView; // +0x28
    MMAssetSelectCheckButton * _selectCheckButton; // +0x30
    UIView * _animationMaskView; // +0x38
    MMBadgeView * _countView; // +0x40
    UIView * _countContainerView; // +0x48
    UIView * _highlightOverlay; // +0x50
    NSString * _addTypeImage; // +0x58
    MMUIActivityIndicatorView * _loadingView; // +0x60
    UIView * _selectCheckCircleButton; // +0x68
    id <EmoticonCustomManageViewDelegate> _delegate; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)resizeWithNewSize:(double)arg1 scaledSize:(double)arg2;
- (id)getMaskView;
- (id)countView;
- (id)makeCircleView;
- (void)configSelectedMarkView;
- (void)configAnimationMask;
- (void)setEmoticonCustomManageWrap:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateSelect;
- (void)updateCountContainerPosition;
- (void)useCircleUnselectedStyle;
- (void)resetAddTypeImage:(id)arg1;
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
- (BOOL)circleUnselectedStyle;
- (void)setCircleUnselectedStyle:(BOOL)arg1;
- (id)addTypeImage;
- (void)setAddTypeImage:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)selectCheckCircleButton;
- (void)setSelectCheckCircleButton:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
@end
