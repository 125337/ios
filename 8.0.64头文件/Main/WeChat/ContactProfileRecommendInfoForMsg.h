@interface ContactProfileRecommendInfoForMsg : NSObject
{
    unsigned int _firstImageMsgLocalId; // +0x8
    unsigned int _remarkType; // +0xc
    unsigned int _remarkCandidateSourceType; // +0x10
    unsigned int _phoneCandidateSourceType; // +0x14
    unsigned int _imageCandidateSourceType; // +0x18
    NSString * _profileRemark; // +0x20
    NSString * _profilePhone; // +0x28
}
- (id)profileRemark;
- (void)setProfileRemark:(id)arg1;
- (id)profilePhone;
- (void)setProfilePhone:(id)arg1;
- (unsigned int)firstImageMsgLocalId;
- (void)setFirstImageMsgLocalId:(unsigned int)arg1;
- (unsigned int)remarkType;
- (void)setRemarkType:(unsigned int)arg1;
- (unsigned int)remarkCandidateSourceType;
- (void)setRemarkCandidateSourceType:(unsigned int)arg1;
- (unsigned int)phoneCandidateSourceType;
- (void)setPhoneCandidateSourceType:(unsigned int)arg1;
- (unsigned int)imageCandidateSourceType;
- (void)setImageCandidateSourceType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
