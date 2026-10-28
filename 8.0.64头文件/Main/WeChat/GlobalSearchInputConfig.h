@interface GlobalSearchInputConfig : NSObject
{
    BOOL _AIMergeSearch; // +0x8
    BOOL _hideSearchBar; // +0x9
    BOOL _hideNavBar; // +0xa
    BOOL _useNewBtnMode; // +0xb
    unsigned int _largeInputShowMinTextLength; // +0xc
    NSMutableArray * _checkBoxes; // +0x10
    NSMutableArray * _actionButtons; // +0x18
}
- (id)init;
- (id)description;
- (BOOL)AIMergeSearch;
- (void)setAIMergeSearch:(BOOL)arg1;
- (BOOL)hideSearchBar;
- (void)setHideSearchBar:(BOOL)arg1;
- (BOOL)hideNavBar;
- (void)setHideNavBar:(BOOL)arg1;
- (BOOL)useNewBtnMode;
- (void)setUseNewBtnMode:(BOOL)arg1;
- (unsigned int)largeInputShowMinTextLength;
- (void)setLargeInputShowMinTextLength:(unsigned int)arg1;
- (id)checkBoxes;
- (void)setCheckBoxes:(id)arg1;
- (id)actionButtons;
- (void)setActionButtons:(id)arg1;
- (void).cxx_destruct;
@end
