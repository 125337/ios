@interface TingLocalPlayer : TingAudioPlayer
{
    NSString * _filePath; // +0x8
    MsgFileDetailLogicController * _msgFileLogicController; // +0x10
}
- (id)audioInfo;
- (BOOL)isPlayRateSupported;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)msgFileLogicController;
- (void)setMsgFileLogicController:(id)arg1;
- (void).cxx_destruct;
@end
