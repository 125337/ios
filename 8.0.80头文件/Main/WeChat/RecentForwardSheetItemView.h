@interface RecentForwardSheetItemView : UIView
{
    BOOL _isEditing; // +0x8
    BOOL _isSelected; // +0x9
    BOOL _forceDarkMode; // +0xa
    CContact * _oContact; // +0x10
    UIImageView * _selectedImageView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUIButton * _smallDeleteButton; // +0x28
    id <RecentForwardSheetItemViewDelegate> _delegate; // +0x30
    UIImageView * _chatBotIcon; // +0x38
}
- (id)initWithContact:(id)arg1 iconWidth:(double)arg2 bottomPadding:(double)arg3 titleFont:(id)arg4 itemMarginLeft:(double)arg5;
- (void)changeSelectedStatus:(BOOL)arg1;
- (void)changeEditingStatus:(BOOL)arg1;
- (void)updateImageView;
- (void)onClickSmallDeleteButton;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)accessibilityTraits;
- (id)oContact;
- (void)setOContact:(id)arg1;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (id)selectedImageView;
- (void)setSelectedImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (BOOL)forceDarkMode;
- (void)setForceDarkMode:(BOOL)arg1;
- (id)smallDeleteButton;
- (void)setSmallDeleteButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)chatBotIcon;
- (void)setChatBotIcon:(id)arg1;
- (void).cxx_destruct;
@end
