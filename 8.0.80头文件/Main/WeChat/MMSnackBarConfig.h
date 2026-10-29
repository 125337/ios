@interface MMSnackBarConfig : NSObject
{
    BOOL _loading; // +0x8
    BOOL _blocked; // +0x9
    BOOL _voiceOverAutoFocus; // +0xa
    BOOL _ignoreKeyboardHide; // +0xb
    BOOL _showEndEditing; // +0xc
    BOOL _enableDragToClose; // +0xd
    BOOL _showInCurrentViewController; // +0xe
    int _numberOfTitleLines; // +0x10
    UIImage * _iconImage; // +0x18
    NSString * _iconName; // +0x20
    NSString * _title; // +0x28
    NSMutableAttributedString * _attrTitle; // +0x30
    double _delayDisplayInterval; // +0x38
    double _delayHideInterval; // +0x40
    NSString * _actionTitle; // +0x48
    NSMutableAttributedString * _actionAttrTitle; // +0x50
    NSString * _actionIconName; // +0x58
    double _bottomInsetOffset; // +0x60
    NSString * _voiceOverLabel; // +0x68
    NSString * _voiceOverHint; // +0x70
    double _layoutWidth; // +0x78
}
- (id)init;
- (BOOL)actionEnabled;
- (BOOL)isValid;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)attrTitle;
- (void)setAttrTitle:(id)arg1;
- (int)numberOfTitleLines;
- (void)setNumberOfTitleLines:(int)arg1;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (BOOL)blocked;
- (void)setBlocked:(BOOL)arg1;
- (double)delayDisplayInterval;
- (void)setDelayDisplayInterval:(double)arg1;
- (double)delayHideInterval;
- (void)setDelayHideInterval:(double)arg1;
- (id)actionTitle;
- (void)setActionTitle:(id)arg1;
- (id)actionAttrTitle;
- (void)setActionAttrTitle:(id)arg1;
- (id)actionIconName;
- (void)setActionIconName:(id)arg1;
- (double)bottomInsetOffset;
- (void)setBottomInsetOffset:(double)arg1;
- (id)voiceOverLabel;
- (void)setVoiceOverLabel:(id)arg1;
- (id)voiceOverHint;
- (void)setVoiceOverHint:(id)arg1;
- (BOOL)voiceOverAutoFocus;
- (void)setVoiceOverAutoFocus:(BOOL)arg1;
- (BOOL)ignoreKeyboardHide;
- (void)setIgnoreKeyboardHide:(BOOL)arg1;
- (BOOL)showEndEditing;
- (void)setShowEndEditing:(BOOL)arg1;
- (BOOL)enableDragToClose;
- (void)setEnableDragToClose:(BOOL)arg1;
- (BOOL)showInCurrentViewController;
- (void)setShowInCurrentViewController:(BOOL)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
