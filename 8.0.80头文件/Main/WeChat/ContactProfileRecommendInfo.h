@interface ContactProfileRecommendInfo : NSObject <PBCoding>
{
    BOOL bIsClickExposure; // +0x8
    unsigned int profileMarkMsgId; // +0xc
    unsigned int profilePhoneMsgId; // +0x10
    unsigned int firstImageMsgLocalId; // +0x14
    unsigned int systemMsgLocalId; // +0x18
    unsigned int imageCandidateSourceType; // +0x1c
    NSString * userName; // +0x20
    NSString * profileRemark; // +0x28
    NSString * profilePhone; // +0x30
    NSString * profileDesc; // +0x38
    NSMutableArray * _arrProfileRemark; // +0x40
    NSMutableArray * _arrProfilePhone; // +0x48
    NSMutableArray * _arrProfileLabel; // +0x50
    NSMutableArray * _arrAnalyzeMsgLocalId; // +0x58
    NSMutableDictionary * _dicRemarkType; // +0x60
    NSMutableDictionary * _dicRemarkMsgId; // +0x68
    NSMutableDictionary * _dicPhoneMsgId; // +0x70
    NSMutableDictionary * _dicRemarkCandidateSourceType; // +0x78
    NSMutableDictionary * _dicPhoneCandidateSourceType; // +0x80
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_profileRemark;
+ (void)PBArrayAdd_profilePhone;
+ (void)PBArrayAdd_arrProfileLabel;
+ (void)PBArrayAdd_profileDesc;
+ (void)PBArrayAdd_arrProfileRemark;
+ (void)PBArrayAdd_arrProfilePhone;
+ (void)PBArrayAdd_profileMarkMsgId;
+ (void)PBArrayAdd_profilePhoneMsgId;
+ (void)PBArrayAdd_firstImageMsgLocalId;
+ (void)PBArrayAdd_systemMsgLocalId;
+ (void)PBArrayAdd_arrAnalyzeMsgLocalId;
+ (void)PBArrayAdd_bIsClickExposure;
+ (void)PBArrayAdd_dicRemarkType;
+ (void)PBArrayAdd_dicRemarkMsgId;
+ (void)PBArrayAdd_dicPhoneMsgId;
+ (void)PBArrayAdd_dicRemarkCandidateSourceType;
+ (void)PBArrayAdd_dicPhoneCandidateSourceType;
+ (void)PBArrayAdd_imageCandidateSourceType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)copyFrom:(id)arg1;
- (id)description;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)profileRemark;
- (void)setProfileRemark:(id)arg1;
- (id)profilePhone;
- (void)setProfilePhone:(id)arg1;
- (id)profileDesc;
- (void)setProfileDesc:(id)arg1;
- (unsigned int)profileMarkMsgId;
- (void)setProfileMarkMsgId:(unsigned int)arg1;
- (unsigned int)profilePhoneMsgId;
- (void)setProfilePhoneMsgId:(unsigned int)arg1;
- (unsigned int)firstImageMsgLocalId;
- (void)setFirstImageMsgLocalId:(unsigned int)arg1;
- (unsigned int)systemMsgLocalId;
- (void)setSystemMsgLocalId:(unsigned int)arg1;
- (BOOL)bIsClickExposure;
- (void)setBIsClickExposure:(BOOL)arg1;
- (unsigned int)imageCandidateSourceType;
- (void)setImageCandidateSourceType:(unsigned int)arg1;
- (id)arrProfileRemark;
- (void)setArrProfileRemark:(id)arg1;
- (id)arrProfilePhone;
- (void)setArrProfilePhone:(id)arg1;
- (id)arrProfileLabel;
- (void)setArrProfileLabel:(id)arg1;
- (id)arrAnalyzeMsgLocalId;
- (void)setArrAnalyzeMsgLocalId:(id)arg1;
- (id)dicRemarkType;
- (void)setDicRemarkType:(id)arg1;
- (id)dicRemarkMsgId;
- (void)setDicRemarkMsgId:(id)arg1;
- (id)dicPhoneMsgId;
- (void)setDicPhoneMsgId:(id)arg1;
- (id)dicRemarkCandidateSourceType;
- (void)setDicRemarkCandidateSourceType:(id)arg1;
- (id)dicPhoneCandidateSourceType;
- (void)setDicPhoneCandidateSourceType:(id)arg1;
- (void).cxx_destruct;
@end
