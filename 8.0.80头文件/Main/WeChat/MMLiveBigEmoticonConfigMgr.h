@interface MMLiveBigEmoticonConfigMgr : MMUserService <MMServiceProtocol>
{
    NSString * _emoticonPanelPid; // +0x8
}
- (void)setUserLastSelectedEmoticonPanelPid:(id)arg1;
- (id)userLastSelectedEmoticonPanelPid;
- (void)onServiceClearData;
- (id)emoticonPanelPid;
- (void)setEmoticonPanelPid:(id)arg1;
- (void).cxx_destruct;
@end
