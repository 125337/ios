@interface MMSnackBarConfig : NSObject
{
    BOOL _loading; // +0x8
    BOOL _blocked; // +0x9
    UIImage * _iconImage; // +0x10
    NSString * _iconName; // +0x18
    NSString * _title; // +0x20
    NSMutableAttributedString * _attrTitle; // +0x28
    double _delayDisplayInterval; // +0x30
    NSString * _actionTitle; // +0x38
    NSMutableAttributedString * _actionAttrTitle; // +0x40
    NSString * _actionIconName; // +0x48
    double _bottomInsetOffset; // +0x50
    NSString * _voiceOverLabel; // +0x58
    NSString * _voiceOverHint; // +0x60
    double _layoutWidth; // +0x68
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
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (BOOL)blocked;
- (void)setBlocked:(BOOL)arg1;
- (double)delayDisplayInterval;
- (void)setDelayDisplayInterval:(double)arg1;
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
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end

