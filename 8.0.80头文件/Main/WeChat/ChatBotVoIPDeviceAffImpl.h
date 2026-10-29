@interface ChatBotVoIPDeviceAffImpl : NSObject <ChatbotDeviceCPP2NativeCallerBase>
{
    ChatbotDeviceCPP2NativeCallerCallback * _zidlCallback; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)getDeviceInfoAsync:(unsigned long long)arg1;
- (id)getAudioDeviceInfo;
- (float)getCurrentVolume;
- (id)getErrMsgByErrCode:(int)arg1;
- (BOOL)getDebugToolEnable;
- (id)zidlCallback;
- (void)setZidlCallback:(id)arg1;
- (void).cxx_destruct;
@end
