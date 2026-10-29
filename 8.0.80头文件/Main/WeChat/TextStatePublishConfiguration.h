@interface TextStatePublishConfiguration : NSObject
{
    BOOL _canEditBackground; // +0x8
    BOOL _canEditIcon; // +0x9
    BOOL _showToast; // +0xa
    BOOL _preserveLastPrivacyIfNeeded; // +0xb
    BOOL _checkExceed; // +0xc
    NSString * _title; // +0x10
    NSString * _subtitle; // +0x18
}
+ (id)defaultConfiguration;
+ (id)editConfiguration;
+ (id)followConfiguration;
- (BOOL)canEditBackground;
- (void)setCanEditBackground:(BOOL)arg1;
- (BOOL)canEditIcon;
- (void)setCanEditIcon:(BOOL)arg1;
- (BOOL)showToast;
- (void)setShowToast:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (BOOL)preserveLastPrivacyIfNeeded;
- (void)setPreserveLastPrivacyIfNeeded:(BOOL)arg1;
- (BOOL)checkExceed;
- (void)setCheckExceed:(BOOL)arg1;
- (void).cxx_destruct;
@end
