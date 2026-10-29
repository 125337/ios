@interface WCEventTrackingSystemConfig : NSObject
{
    BOOL _openEventTacking; // +0x8
    BOOL _trackUIButton; // +0x9
    BOOL _trackRichTextView; // +0xa
    BOOL _trackTableViewCell; // +0xb
    BOOL _trackAlert; // +0xc
    BOOL _trackUISwitch; // +0xd
}
+ (id)defaultConfig;
- (BOOL)openEventTacking;
- (void)setOpenEventTacking:(BOOL)arg1;
- (BOOL)trackUIButton;
- (void)setTrackUIButton:(BOOL)arg1;
- (BOOL)trackRichTextView;
- (void)setTrackRichTextView:(BOOL)arg1;
- (BOOL)trackTableViewCell;
- (void)setTrackTableViewCell:(BOOL)arg1;
- (BOOL)trackAlert;
- (void)setTrackAlert:(BOOL)arg1;
- (BOOL)trackUISwitch;
- (void)setTrackUISwitch:(BOOL)arg1;
@end

