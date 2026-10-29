@interface WCAccountPhoneBindGuidanceData : NSObject
{
    BOOL _guidanceHideIcon; // +0x8
    NSString * _guidanceTitle; // +0x10
    NSString * _guidanceTip; // +0x18
    NSString * _guidanceBtn; // +0x20
    NSString * _guidanceScene; // +0x28
    NSString * _doubleCheckContent; // +0x30
    NSString * _doubleCheckOKText; // +0x38
    NSString * _doubleCheckCancelText; // +0x40
    NSString * _guidanceHelp_tips; // +0x48
    NSString * _guidanceHelp_jumpUrl; // +0x50
}
- (id)guidanceTitle;
- (void)setGuidanceTitle:(id)arg1;
- (id)guidanceTip;
- (void)setGuidanceTip:(id)arg1;
- (id)guidanceBtn;
- (void)setGuidanceBtn:(id)arg1;
- (BOOL)guidanceHideIcon;
- (void)setGuidanceHideIcon:(BOOL)arg1;
- (id)guidanceScene;
- (void)setGuidanceScene:(id)arg1;
- (id)doubleCheckContent;
- (void)setDoubleCheckContent:(id)arg1;
- (id)doubleCheckOKText;
- (void)setDoubleCheckOKText:(id)arg1;
- (id)doubleCheckCancelText;
- (void)setDoubleCheckCancelText:(id)arg1;
- (id)guidanceHelp_tips;
- (void)setGuidanceHelp_tips:(id)arg1;
- (id)guidanceHelp_jumpUrl;
- (void)setGuidanceHelp_jumpUrl:(id)arg1;
- (void).cxx_destruct;
@end

