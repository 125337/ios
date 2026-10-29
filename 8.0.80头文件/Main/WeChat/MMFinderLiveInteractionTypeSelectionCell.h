@interface MMFinderLiveInteractionTypeSelectionCell : WCTableViewNormalCellManager
{
    BOOL _isSelected; // +0x8
    int _interactionType; // +0xc
    id <MMFinderLiveInteractionTypeSelectionCellDelegate> _delegate; // +0x10
    MMUIView * _contentView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    UIImageView * _selectStateImageView; // +0x28
}
- (id)initWithWidth:(double)arg1 height:(double)arg2 delegate:(id)arg3 interactionType:(int)arg4 isSelected:(BOOL)arg5;
- (void)initCellConfig;
- (void)setupSubviewsWith:(double)arg1 height:(double)arg2;
- (void)initSubviewsWith:(double)arg1 height:(double)arg2;
- (id)interactionTypeStr;
- (void)layoutUI;
- (void)onClickContent;
- (int)interactionType;
- (void)setInteractionType:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)selectStateImageView;
- (void)setSelectStateImageView:(id)arg1;
- (void).cxx_destruct;
@end
