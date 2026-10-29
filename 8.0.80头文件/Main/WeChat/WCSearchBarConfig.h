@interface WCSearchBarConfig : NSObject
{
    BOOL _enableLargeInput; // +0x8
    BOOL _enableRemoveEditingWords; // +0x9
    BOOL _needSearchButtonWhenInit; // +0xa
    BOOL _suppressAutoFocus; // +0xb
    NSArray * _checkBoxes; // +0x10
    NSArray * _actionButtons; // +0x18
    double _expectedHeight; // +0x20
}
- (id)init;
- (id)description;
- (BOOL)enableLargeInput;
- (void)setEnableLargeInput:(BOOL)arg1;
- (BOOL)enableRemoveEditingWords;
- (void)setEnableRemoveEditingWords:(BOOL)arg1;
- (id)checkBoxes;
- (void)setCheckBoxes:(id)arg1;
- (id)actionButtons;
- (void)setActionButtons:(id)arg1;
- (double)expectedHeight;
- (void)setExpectedHeight:(double)arg1;
- (BOOL)needSearchButtonWhenInit;
- (void)setNeedSearchButtonWhenInit:(BOOL)arg1;
- (BOOL)suppressAutoFocus;
- (void)setSuppressAutoFocus:(BOOL)arg1;
- (void).cxx_destruct;
@end
