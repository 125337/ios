@interface QMCStopSlotItemView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _isSelected; // +0x8
    id /* block */ _onButtonTap; // +0x10
    id /* block */ _onCardTap; // +0x18
    id /* block */ _imageLoader; // +0x20
    UIStackView * _leftStack; // +0x28
    UIStackView * _titleRow; // +0x30
    UILabel * _titleLabel; // +0x38
    UIImageView * _chevronView; // +0x40
    UILabel * _subtitleLabel; // +0x48
    QMCStopTagRowView * _tagRow; // +0x50
    UIStackView * _actionsRow; // +0x58
    NSMutableArray * _actionButtons; // +0x60
    NSMutableArray * _buttonDataArray; // +0x68
    NSArray * _cachedTags; // +0x70
    NSDictionary * _cachedMainJump; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupSubviews;
- (void)configureWithBizData:(id)arg1;
- (void)setCardSelected:(BOOL)arg1;
- (void)_configureTags:(id)arg1;
- (id)_createTagLabel:(id)arg1;
- (void)_configureButtons:(id)arg1;
- (void)_handleCardTap:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_handleButtonTap:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id /* block */)onButtonTap;
- (void)setOnButtonTap:(id /* block */)arg1;
- (id /* block */)onCardTap;
- (void)setOnCardTap:(id /* block */)arg1;
- (id /* block */)imageLoader;
- (void)setImageLoader:(id /* block */)arg1;
- (id)leftStack;
- (void)setLeftStack:(id)arg1;
- (id)titleRow;
- (void)setTitleRow:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)chevronView;
- (void)setChevronView:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)tagRow;
- (void)setTagRow:(id)arg1;
- (id)actionsRow;
- (void)setActionsRow:(id)arg1;
- (id)actionButtons;
- (void)setActionButtons:(id)arg1;
- (id)buttonDataArray;
- (void)setButtonDataArray:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (id)cachedTags;
- (void)setCachedTags:(id)arg1;
- (id)cachedMainJump;
- (void)setCachedMainJump:(id)arg1;
- (void).cxx_destruct;
@end
