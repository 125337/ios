@interface WAAuthorizeSheetInfo : NSObject
{
    BOOL _showPrivacyInfo; // +0x8
    NSString * _iconUrl; // +0x10
    NSString * _appName; // +0x18
    NSString * _applyDescription; // +0x20
    WAAuthorizeSheetPrivacyInfo * _privacyInfo; // +0x28
    NSString * _authTitle; // +0x30
    NSString * _authSubTitle; // +0x38
    NSString * _acceptWording; // +0x40
    NSString * _rejectWording; // +0x48
    WAAuthorizeSheetPrivacyProtectInfo * _privacyProtectInfo; // +0x50
    WAAuthorizePageSheetReportItem * _reportItem; // +0x58
}
+ (id)createWithUserIdPageSheetInfo:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)applyDescription;
- (void)setApplyDescription:(id)arg1;
- (id)privacyInfo;
- (void)setPrivacyInfo:(id)arg1;
- (BOOL)showPrivacyInfo;
- (void)setShowPrivacyInfo:(BOOL)arg1;
- (id)authTitle;
- (void)setAuthTitle:(id)arg1;
- (id)authSubTitle;
- (void)setAuthSubTitle:(id)arg1;
- (id)acceptWording;
- (void)setAcceptWording:(id)arg1;
- (id)rejectWording;
- (void)setRejectWording:(id)arg1;
- (id)privacyProtectInfo;
- (void)setPrivacyProtectInfo:(id)arg1;
- (id)reportItem;
- (void)setReportItem:(id)arg1;
- (void).cxx_destruct;
@end
