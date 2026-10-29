@interface _TtCC6WeChat17KaraFeatureCenter6Device : _TtCC6WeChat17KaraFeatureCenter9Component <IDiskUsageMgr>
{
     _sizeOfWeChatDataInMB; // +0x70
     _sizeOfChatHistoriesInMB; // +0x78
     _model; // +0x80
     _screenSize; // +0x88
     _iOS; // +0x90
     _battery; // +0x98
     _applicationState; // +0xa0
}
- (void)onDiskUsageMgrFinishOneScan:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
@end

