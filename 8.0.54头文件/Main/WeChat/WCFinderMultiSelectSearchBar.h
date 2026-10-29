@interface WCFinderMultiSelectSearchBar : MMUIView <UITextFieldDelegate>
{
    BOOL _isEditing; // +0x8
    UITextField * _textField; // +0x10
    id <WCFinderMultiSelectSearchBarDelegate> _delegate; // +0x18
    UIView * _tagContainerView; // +0x20
    UILabel * _tagLabel; // +0x28
    UIImageView * _arrowImageView; // +0x30
    UIView * _separateLine; // +0x38
    UIImageView * _searchImageView; // +0x40
    MMUIButton * _clearBtn; // +0x48
    WCFinderPopUpSelectMenuViewController * _popUpMenu; // +0x50
    NSMutableArray * _poiCategoryItemArray; // +0x58
    long long _selectedIndex; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (id)poiCategoryItemArray;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setUpView;
- (void)layoutAllSubviews;
- (void)updateClearBtnHiddenState;
- (void)setIsEditing:(BOOL)arg1;
- (void)endTyping:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)onClickClearAction;
- (void)textFiledChanged;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)showPOICategoryFilter;
- (void)setSelectedIndex:(long long)arg1;
- (void)updateArrowWhenShowFilter:(BOOL)arg1;
- (id)generateMenuItems;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tagContainerView;
- (void)setTagContainerView:(id)arg1;
- (id)tagLabel;
- (void)setTagLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)separateLine;
- (void)setSeparateLine:(id)arg1;
- (id)searchImageView;
- (void)setSearchImageView:(id)arg1;
- (id)clearBtn;
- (void)setClearBtn:(id)arg1;
- (id)popUpMenu;
- (void)setPopUpMenu:(id)arg1;
- (void)setPoiCategoryItemArray:(id)arg1;
- (long long)selectedIndex;
- (BOOL)isEditing;
- (void).cxx_destruct;
@end

