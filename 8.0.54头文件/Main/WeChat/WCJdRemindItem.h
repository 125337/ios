@interface WCJdRemindItem : MMObject <PBCoding>
{
    unsigned long long ui64SvrMsgId; // +0x8
    unsigned int uiBizType; // +0x10
    NSString * nsActivityId; // +0x18
    unsigned int uiExpireTime; // +0x20
    unsigned int uiStartTime; // +0x24
    unsigned int uiUrlExpireTime; // +0x28
    unsigned int uiUrlStartTime; // +0x2c
    unsigned int uiTitleExpireTime; // +0x30
    unsigned int uiTitleStartTime; // +0x34
    BOOL bFindNeedShowRedDot; // +0x38
    BOOL bCellShowRedDot; // +0x39
    NSString * nsCellTitle; // +0x40
    NSString * nsTitle; // +0x48
    NSString * nsIcon; // +0x50
    NSString * nsPushContent; // +0x58
    NSString * nsJumpUrl; // +0x60
    NSString * nsAlertViewWording; // +0x68
    NSString * nsConfirmWording; // +0x70
    NSString * nsCancelWording; // +0x78
    BOOL bHasRead; // +0x80
    NSString * nsJumpWeapp; // +0x88
    NSString * nsJumpWeappPath; // +0x90
    long long nsJumpWeappVersion; // +0x98
}
+ (void)PBArrayAdd_ui64SvrMsgId;
+ (void)PBArrayAdd_uiBizType;
+ (void)PBArrayAdd_nsActivityId;
+ (void)PBArrayAdd_uiExpireTime;
+ (void)PBArrayAdd_bFindNeedShowRedDot;
+ (void)PBArrayAdd_bCellShowRedDot;
+ (void)PBArrayAdd_nsCellTitle;
+ (void)PBArrayAdd_nsPushContent;
+ (void)PBArrayAdd_nsJumpUrl;
+ (void)PBArrayAdd_nsAlertViewWording;
+ (void)PBArrayAdd_nsConfirmWording;
+ (void)PBArrayAdd_nsCancelWording;
+ (void)PBArrayAdd_bHasRead;
+ (void)PBArrayAdd_uiStartTime;
+ (void)PBArrayAdd_uiUrlStartTime;
+ (void)PBArrayAdd_uiUrlExpireTime;
+ (void)PBArrayAdd_nsIcon;
+ (void)PBArrayAdd_nsTitle;
+ (void)PBArrayAdd_uiTitleStartTime;
+ (void)PBArrayAdd_uiTitleExpireTime;
+ (void)PBArrayAdd_nsJumpWeapp;
+ (void)PBArrayAdd_nsJumpWeappPath;
+ (void)PBArrayAdd_nsJumpWeappVersion;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)ui64SvrMsgId;
- (void)setUi64SvrMsgId:(unsigned long long)arg1;
- (unsigned int)uiBizType;
- (void)setUiBizType:(unsigned int)arg1;
- (id)nsActivityId;
- (void)setNsActivityId:(id)arg1;
- (unsigned int)uiExpireTime;
- (void)setUiExpireTime:(unsigned int)arg1;
- (BOOL)bFindNeedShowRedDot;
- (void)setBFindNeedShowRedDot:(BOOL)arg1;
- (BOOL)bCellShowRedDot;
- (void)setBCellShowRedDot:(BOOL)arg1;
- (id)nsCellTitle;
- (void)setNsCellTitle:(id)arg1;
- (id)nsPushContent;
- (void)setNsPushContent:(id)arg1;
- (id)nsJumpUrl;
- (void)setNsJumpUrl:(id)arg1;
- (id)nsAlertViewWording;
- (void)setNsAlertViewWording:(id)arg1;
- (id)nsConfirmWording;
- (void)setNsConfirmWording:(id)arg1;
- (id)nsCancelWording;
- (void)setNsCancelWording:(id)arg1;
- (BOOL)bHasRead;
- (void)setBHasRead:(BOOL)arg1;
- (unsigned int)uiStartTime;
- (void)setUiStartTime:(unsigned int)arg1;
- (unsigned int)uiUrlStartTime;
- (void)setUiUrlStartTime:(unsigned int)arg1;
- (unsigned int)uiUrlExpireTime;
- (void)setUiUrlExpireTime:(unsigned int)arg1;
- (id)nsIcon;
- (void)setNsIcon:(id)arg1;
- (id)nsTitle;
- (void)setNsTitle:(id)arg1;
- (unsigned int)uiTitleStartTime;
- (void)setUiTitleStartTime:(unsigned int)arg1;
- (unsigned int)uiTitleExpireTime;
- (void)setUiTitleExpireTime:(unsigned int)arg1;
- (id)nsJumpWeapp;
- (void)setNsJumpWeapp:(id)arg1;
- (id)nsJumpWeappPath;
- (void)setNsJumpWeappPath:(id)arg1;
- (long long)nsJumpWeappVersion;
- (void)setNsJumpWeappVersion:(long long)arg1;
- (void).cxx_destruct;
@end

