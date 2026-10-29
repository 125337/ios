@interface FaceRecogPayLiteHandlerConfig : NSObject
{
    BOOL _needFrontPage; // +0x8
    unsigned int _scene; // +0xc
    NSString * _packageName; // +0x10
    NSString * _packageSign; // +0x18
    NSString * _faceVerifyTitle; // +0x20
    NSString * _faceOtherVerifyTitle; // +0x28
    NSString * _faceOtherVerifyTitleFront; // +0x30
}
- (id)packageName;
- (void)setPackageName:(id)arg1;
- (id)packageSign;
- (void)setPackageSign:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)faceVerifyTitle;
- (void)setFaceVerifyTitle:(id)arg1;
- (id)faceOtherVerifyTitle;
- (void)setFaceOtherVerifyTitle:(id)arg1;
- (id)faceOtherVerifyTitleFront;
- (void)setFaceOtherVerifyTitleFront:(id)arg1;
- (BOOL)needFrontPage;
- (void)setNeedFrontPage:(BOOL)arg1;
- (void).cxx_destruct;
@end
