@interface MMKindaFaceRegManagerImpl : NSObject <FaceRecogPayHandlerDelegate, MMKindaFaceRegManager>
{
    MMVoidBoolStringI32StringCallback * _m_finishCallback; // +0x8
    MMVoidCallback * _m_cancelCallback; // +0x10
    FaceRecogPayHandler * _m_faceHandler; // +0x18
}
- (void)startFaceImpl:(int)arg1 strPackage:(id)arg2 strPackageSign:(id)arg3 finishCallback:(id)arg4 cancelCallback:(id)arg5 otherVerifyTitle:(id)arg6;
- (void)startFaceImpl:(int)arg1 strPackage:(id)arg2 strPackageSign:(id)arg3 finishCallback:(id)arg4 cancelCallback:(id)arg5 otherVerifyTitle:(id)arg6 faceVerifyTitle:(id)arg7;
- (void)faceRecogPayHandlerDidFinish:(id)arg1;
- (void)faceRecogPayHandlerDidCancel:(id)arg1;
- (id)m_finishCallback;
- (void)setM_finishCallback:(id)arg1;
- (id)m_cancelCallback;
- (void)setM_cancelCallback:(id)arg1;
- (id)m_faceHandler;
- (void)setM_faceHandler:(id)arg1;
- (void).cxx_destruct;
@end
