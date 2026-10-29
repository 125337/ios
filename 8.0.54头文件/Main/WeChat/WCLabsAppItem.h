@interface WCLabsAppItem : MMObject <PBCoding>
{
    BOOL _bNoReport; // +0x8
    BOOL _bAllVersion; // +0x9
    BOOL _bClearStatus; // +0xa
    BOOL _bCanShowRedPoint; // +0xb
    BOOL _bItemFromXExpt; // +0xc
    unsigned int _uiSeq; // +0x10
    unsigned int _uiBeginTime; // +0x14
    unsigned int _uiEndTime; // +0x18
    unsigned int _uiPriorityLevel; // +0x1c
    unsigned int _uiMonitorHitId; // +0x20
    unsigned int _uiMonitorHitKey; // +0x24
    unsigned int _uiAppType; // +0x28
    unsigned int _uiBizType; // +0x2c
    unsigned int _uiAppSwitch; // +0x30
    unsigned int _uiPosition; // +0x34
    unsigned int _uiExpireTime; // +0x38
    unsigned int _weAppDebugMode; // +0x3c
    NSString * _nsExpId; // +0x40
    NSString * _nsLabsAppId; // +0x48
    NSString * _nsDetailUrl; // +0x50
    NSString * _nsWeAppUser; // +0x58
    NSString * _nsWeAppPath; // +0x60
    NSString * _nsDeepLink; // +0x68
    NSString * _nsTitleKey; // +0x70
    NSString * _nsTitle_cn; // +0x78
    NSString * _nsTitle_hk; // +0x80
    NSString * _nsTitle_tw; // +0x88
    NSString * _nsTitle_en; // +0x90
    NSString * _nsDescKey; // +0x98
    NSString * _nsDesc_cn; // +0xa0
    NSString * _nsDesc_hk; // +0xa8
    NSString * _nsDesc_tw; // +0xb0
    NSString * _nsDesc_en; // +0xb8
    NSString * _nsIntroduceKey; // +0xc0
    NSString * _nsIntroduce_cn; // +0xc8
    NSString * _nsIntroduce_hk; // +0xd0
    NSString * _nsIntroduce_tw; // +0xd8
    NSString * _nsIntroduce_en; // +0xe0
    NSString * _nsImgUrl_cn; // +0xe8
    NSString * _nsImgUrl_hk; // +0xf0
    NSString * _nsImgUrl_tw; // +0xf8
    NSString * _nsImgUrl_en; // +0x100
    NSString * _nsThumbUrl_cn; // +0x108
    NSString * _nsThumbUrl_hk; // +0x110
    NSString * _nsThumbUrl_tw; // +0x118
    NSString * _nsThumbUrl_en; // +0x120
    NSString * _nsIconUrl; // +0x128
    NSString * _nsImgUrl_cn2; // +0x130
    NSString * _nsImgUrl_hk2; // +0x138
    NSString * _nsImgUrl_tw2; // +0x140
    NSString * _nsImgUrl_en2; // +0x148
    NSString * _nsImgUrl_cn3; // +0x150
    NSString * _nsImgUrl_hk3; // +0x158
    NSString * _nsImgUrl_tw3; // +0x160
    NSString * _nsImgUrl_en3; // +0x168
}
+ (void)PBArrayAdd_nsExpId;
+ (void)PBArrayAdd_uiSeq;
+ (void)PBArrayAdd_uiBeginTime;
+ (void)PBArrayAdd_uiEndTime;
+ (void)PBArrayAdd_uiPriorityLevel;
+ (void)PBArrayAdd_bNoReport;
+ (void)PBArrayAdd_uiMonitorHitId;
+ (void)PBArrayAdd_uiMonitorHitKey;
+ (void)PBArrayAdd_nsLabsAppId;
+ (void)PBArrayAdd_uiAppType;
+ (void)PBArrayAdd_uiBizType;
+ (void)PBArrayAdd_uiAppSwitch;
+ (void)PBArrayAdd_bAllVersion;
+ (void)PBArrayAdd_nsDetailUrl;
+ (void)PBArrayAdd_nsWeAppUser;
+ (void)PBArrayAdd_nsWeAppPath;
+ (void)PBArrayAdd_nsDeepLink;
+ (void)PBArrayAdd_uiPosition;
+ (void)PBArrayAdd_nsTitleKey;
+ (void)PBArrayAdd_nsTitle_cn;
+ (void)PBArrayAdd_nsTitle_hk;
+ (void)PBArrayAdd_nsTitle_tw;
+ (void)PBArrayAdd_nsTitle_en;
+ (void)PBArrayAdd_nsDescKey;
+ (void)PBArrayAdd_nsDesc_cn;
+ (void)PBArrayAdd_nsDesc_hk;
+ (void)PBArrayAdd_nsDesc_tw;
+ (void)PBArrayAdd_nsDesc_en;
+ (void)PBArrayAdd_nsIntroduceKey;
+ (void)PBArrayAdd_nsIntroduce_cn;
+ (void)PBArrayAdd_nsIntroduce_hk;
+ (void)PBArrayAdd_nsIntroduce_tw;
+ (void)PBArrayAdd_nsIntroduce_en;
+ (void)PBArrayAdd_uiExpireTime;
+ (void)PBArrayAdd_weAppDebugMode;
+ (void)PBArrayAdd_bClearStatus;
+ (void)PBArrayAdd_bCanShowRedPoint;
+ (void)PBArrayAdd_nsImgUrl_cn;
+ (void)PBArrayAdd_nsImgUrl_hk;
+ (void)PBArrayAdd_nsImgUrl_tw;
+ (void)PBArrayAdd_nsImgUrl_en;
+ (void)PBArrayAdd_nsThumbUrl_cn;
+ (void)PBArrayAdd_nsThumbUrl_hk;
+ (void)PBArrayAdd_nsThumbUrl_tw;
+ (void)PBArrayAdd_nsThumbUrl_en;
+ (void)PBArrayAdd_nsIconUrl;
+ (void)PBArrayAdd_nsImgUrl_cn2;
+ (void)PBArrayAdd_nsImgUrl_hk2;
+ (void)PBArrayAdd_nsImgUrl_tw2;
+ (void)PBArrayAdd_nsImgUrl_en2;
+ (void)PBArrayAdd_nsImgUrl_cn3;
+ (void)PBArrayAdd_nsImgUrl_hk3;
+ (void)PBArrayAdd_nsImgUrl_tw3;
+ (void)PBArrayAdd_nsImgUrl_en3;
+ (void)PBArrayAdd_bItemFromXExpt;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isLegalItem;
- (BOOL)shouldBeReplaceByOther:(id)arg1;
- (id)getBizTypeWording;
- (BOOL)isWeAppItem;
- (id)getWeAppSceneNote;
- (BOOL)isIndependentNativeItem;
- (BOOL)isAssisstantNativeItem;
- (BOOL)hasOpenFunc;
- (BOOL)isExpired;
- (BOOL)isNotYetBegin;
- (BOOL)isOnLineItem;
- (BOOL)isOffLineItem;
- (BOOL)isExpireAndNotShow;
- (long long)compare:(id)arg1;
- (id)description;
- (id)getTitle;
- (id)getBizConfigTitle;
- (id)getDesc;
- (id)getIntroduce;
- (id)getThumbUrl;
- (id)getImgUrl;
- (id)getImgUrl2;
- (id)getImgUrl3;
- (id)getStringWithoutConsiderLang:(id)arg1 wordTw:(id)arg2 wordHk:(id)arg3 wordEn:(id)arg4;
- (id)getRealIconUrl;
- (BOOL)idkeyRpt;
- (id)nsExpId;
- (void)setNsExpId:(id)arg1;
- (unsigned int)uiSeq;
- (void)setUiSeq:(unsigned int)arg1;
- (unsigned int)uiBeginTime;
- (void)setUiBeginTime:(unsigned int)arg1;
- (unsigned int)uiEndTime;
- (void)setUiEndTime:(unsigned int)arg1;
- (unsigned int)uiPriorityLevel;
- (void)setUiPriorityLevel:(unsigned int)arg1;
- (BOOL)bNoReport;
- (void)setBNoReport:(BOOL)arg1;
- (unsigned int)uiMonitorHitId;
- (void)setUiMonitorHitId:(unsigned int)arg1;
- (unsigned int)uiMonitorHitKey;
- (void)setUiMonitorHitKey:(unsigned int)arg1;
- (id)nsLabsAppId;
- (void)setNsLabsAppId:(id)arg1;
- (unsigned int)uiAppType;
- (void)setUiAppType:(unsigned int)arg1;
- (unsigned int)uiBizType;
- (void)setUiBizType:(unsigned int)arg1;
- (unsigned int)uiAppSwitch;
- (void)setUiAppSwitch:(unsigned int)arg1;
- (BOOL)bAllVersion;
- (void)setBAllVersion:(BOOL)arg1;
- (id)nsDetailUrl;
- (void)setNsDetailUrl:(id)arg1;
- (id)nsWeAppUser;
- (void)setNsWeAppUser:(id)arg1;
- (id)nsWeAppPath;
- (void)setNsWeAppPath:(id)arg1;
- (id)nsDeepLink;
- (void)setNsDeepLink:(id)arg1;
- (unsigned int)uiPosition;
- (void)setUiPosition:(unsigned int)arg1;
- (id)nsTitleKey;
- (void)setNsTitleKey:(id)arg1;
- (id)nsTitle_cn;
- (void)setNsTitle_cn:(id)arg1;
- (id)nsTitle_hk;
- (void)setNsTitle_hk:(id)arg1;
- (id)nsTitle_tw;
- (void)setNsTitle_tw:(id)arg1;
- (id)nsTitle_en;
- (void)setNsTitle_en:(id)arg1;
- (id)nsDescKey;
- (void)setNsDescKey:(id)arg1;
- (id)nsDesc_cn;
- (void)setNsDesc_cn:(id)arg1;
- (id)nsDesc_hk;
- (void)setNsDesc_hk:(id)arg1;
- (id)nsDesc_tw;
- (void)setNsDesc_tw:(id)arg1;
- (id)nsDesc_en;
- (void)setNsDesc_en:(id)arg1;
- (id)nsIntroduceKey;
- (void)setNsIntroduceKey:(id)arg1;
- (id)nsIntroduce_cn;
- (void)setNsIntroduce_cn:(id)arg1;
- (id)nsIntroduce_hk;
- (void)setNsIntroduce_hk:(id)arg1;
- (id)nsIntroduce_tw;
- (void)setNsIntroduce_tw:(id)arg1;
- (id)nsIntroduce_en;
- (void)setNsIntroduce_en:(id)arg1;
- (unsigned int)uiExpireTime;
- (void)setUiExpireTime:(unsigned int)arg1;
- (unsigned int)weAppDebugMode;
- (void)setWeAppDebugMode:(unsigned int)arg1;
- (BOOL)bClearStatus;
- (void)setBClearStatus:(BOOL)arg1;
- (BOOL)bCanShowRedPoint;
- (void)setBCanShowRedPoint:(BOOL)arg1;
- (id)nsImgUrl_cn;
- (void)setNsImgUrl_cn:(id)arg1;
- (id)nsImgUrl_hk;
- (void)setNsImgUrl_hk:(id)arg1;
- (id)nsImgUrl_tw;
- (void)setNsImgUrl_tw:(id)arg1;
- (id)nsImgUrl_en;
- (void)setNsImgUrl_en:(id)arg1;
- (id)nsThumbUrl_cn;
- (void)setNsThumbUrl_cn:(id)arg1;
- (id)nsThumbUrl_hk;
- (void)setNsThumbUrl_hk:(id)arg1;
- (id)nsThumbUrl_tw;
- (void)setNsThumbUrl_tw:(id)arg1;
- (id)nsThumbUrl_en;
- (void)setNsThumbUrl_en:(id)arg1;
- (id)nsIconUrl;
- (void)setNsIconUrl:(id)arg1;
- (id)nsImgUrl_cn2;
- (void)setNsImgUrl_cn2:(id)arg1;
- (id)nsImgUrl_hk2;
- (void)setNsImgUrl_hk2:(id)arg1;
- (id)nsImgUrl_tw2;
- (void)setNsImgUrl_tw2:(id)arg1;
- (id)nsImgUrl_en2;
- (void)setNsImgUrl_en2:(id)arg1;
- (id)nsImgUrl_cn3;
- (void)setNsImgUrl_cn3:(id)arg1;
- (id)nsImgUrl_hk3;
- (void)setNsImgUrl_hk3:(id)arg1;
- (id)nsImgUrl_tw3;
- (void)setNsImgUrl_tw3:(id)arg1;
- (id)nsImgUrl_en3;
- (void)setNsImgUrl_en3:(id)arg1;
- (BOOL)bItemFromXExpt;
- (void)setBItemFromXExpt:(BOOL)arg1;
- (void).cxx_destruct;
@end

