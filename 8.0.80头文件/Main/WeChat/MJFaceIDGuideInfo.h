@interface MJFaceIDGuideInfo : NSObject <PBCoding, NSCopying>
{
    unsigned long long _acctStatus; // +0x8
    NSString * _promptTitle; // +0x10
    NSString * _promptDetail; // +0x18
    MJFaceIDCaptureInfo * _captureInfo; // +0x20
    NSString * _faceIdCoverUrl; // +0x28
    NSString * _faceIdSmallUrl; // +0x30
    NSString * _faceIdPlaceHolderUrl; // +0x38
}
+ (void)PBArrayAdd_acctStatus;
+ (void)PBArrayAdd_promptTitle;
+ (void)PBArrayAdd_promptDetail;
+ (void)PBArrayAdd_captureInfo;
+ (void)PBArrayAdd_faceIdCoverUrl;
+ (void)PBArrayAdd_faceIdSmallUrl;
+ (void)PBArrayAdd_faceIdPlaceHolderUrl;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithFaceIDGuideInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (unsigned long long)acctStatus;
- (void)setAcctStatus:(unsigned long long)arg1;
- (id)promptTitle;
- (void)setPromptTitle:(id)arg1;
- (id)promptDetail;
- (void)setPromptDetail:(id)arg1;
- (id)captureInfo;
- (void)setCaptureInfo:(id)arg1;
- (id)faceIdCoverUrl;
- (void)setFaceIdCoverUrl:(id)arg1;
- (id)faceIdSmallUrl;
- (void)setFaceIdSmallUrl:(id)arg1;
- (id)faceIdPlaceHolderUrl;
- (void)setFaceIdPlaceHolderUrl:(id)arg1;
- (void).cxx_destruct;
@end
