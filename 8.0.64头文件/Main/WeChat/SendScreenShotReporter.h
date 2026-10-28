@interface SendScreenShotReporter : MMRootService <MMServiceProtocol>
{
    MemoryMappedKV * _snapshotKV; // +0x8
}
- (void)didTakeScreenShot;
- (void)setupQuickSendEntryViewReport:(id)arg1 asset:(id)arg2;
- (void)setupQuickSendEntryViewReport:(id)arg1 screenShotTime:(double)arg2;
- (void)didSendAsset:(id)arg1 scene:(long long)arg2;
- (void)asyncCheckIsScreenShotAsset:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)matchWechatSnapshotTime:(id)arg1;
- (id)snapshotKV;
- (void)setSnapshotKV:(id)arg1;
- (void).cxx_destruct;
@end
