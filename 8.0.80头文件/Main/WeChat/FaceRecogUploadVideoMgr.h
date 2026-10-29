@interface FaceRecogUploadVideoMgr : MMUserService <FaceRecogUploadLogicDelegate, MMServiceProtocol>
{
    NSMutableDictionary * m_dicLogic; // +0x8
}
- (void)addUploadLogic:(id)arg1;
- (void)onUploadFaceVideoFinish:(id)arg1;
- (void).cxx_destruct;
@end
