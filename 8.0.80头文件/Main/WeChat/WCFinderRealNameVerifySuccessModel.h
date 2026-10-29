@interface WCFinderRealNameVerifySuccessModel : NSObject
{
    BOOL _needFaceVerify; // +0x8
    FinderRealNameVerifyPrepareInfo * _prepareInfo; // +0x10
    NSString * _verifyUrl; // +0x18
    NSString * _faceVerifyUrl; // +0x20
}
- (id)prepareInfo;
- (void)setPrepareInfo:(id)arg1;
- (id)verifyUrl;
- (void)setVerifyUrl:(id)arg1;
- (id)faceVerifyUrl;
- (void)setFaceVerifyUrl:(id)arg1;
- (BOOL)needFaceVerify;
- (void)setNeedFaceVerify:(BOOL)arg1;
- (void).cxx_destruct;
@end
