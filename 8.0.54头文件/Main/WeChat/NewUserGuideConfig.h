@interface NewUserGuideConfig : NSObject <PBCoding>
{
    BOOL _bShowMainFrameTip; // +0x8
    BOOL _bShowContactsAddTip; // +0x9
    BOOL _bShowVoiceTip; // +0xa
    BOOL _bShowVoipAndPhoneTip; // +0xb
    BOOL _bShowNearByRedDot; // +0xc
    BOOL _bShowShakeRedDot; // +0xd
    BOOL _bShowSightTip; // +0xe
    unsigned int _uiRegTime; // +0x10
    unsigned int _uiStartCount; // +0x14
}
+ (void)PBArrayAdd_uiRegTime;
+ (void)PBArrayAdd_uiStartCount;
+ (void)PBArrayAdd_bShowMainFrameTip;
+ (void)PBArrayAdd_bShowContactsAddTip;
+ (void)PBArrayAdd_bShowVoiceTip;
+ (void)PBArrayAdd_bShowVoipAndPhoneTip;
+ (void)PBArrayAdd_bShowNearByRedDot;
+ (void)PBArrayAdd_bShowShakeRedDot;
+ (void)PBArrayAdd_bShowSightTip;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (unsigned int)uiRegTime;
- (void)setUiRegTime:(unsigned int)arg1;
- (unsigned int)uiStartCount;
- (void)setUiStartCount:(unsigned int)arg1;
- (BOOL)bShowMainFrameTip;
- (void)setBShowMainFrameTip:(BOOL)arg1;
- (BOOL)bShowContactsAddTip;
- (void)setBShowContactsAddTip:(BOOL)arg1;
- (BOOL)bShowVoiceTip;
- (void)setBShowVoiceTip:(BOOL)arg1;
- (BOOL)bShowVoipAndPhoneTip;
- (void)setBShowVoipAndPhoneTip:(BOOL)arg1;
- (BOOL)bShowNearByRedDot;
- (void)setBShowNearByRedDot:(BOOL)arg1;
- (BOOL)bShowShakeRedDot;
- (void)setBShowShakeRedDot:(BOOL)arg1;
- (BOOL)bShowSightTip;
- (void)setBShowSightTip:(BOOL)arg1;
@end

