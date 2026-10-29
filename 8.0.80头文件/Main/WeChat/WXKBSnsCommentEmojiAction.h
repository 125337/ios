@interface WXKBSnsCommentEmojiAction : WXKBSnsAction <IAppDataExt>
{
    EmoticonUploader * _emoticonUploader; // +0x8
    AppCommunicateData * _communicateData; // +0x10
    OpenApiAppMsgGenerator * _messageGenerator; // +0x18
}
- (id)initWithDictionary:(id)arg1;
- (void)privatePerform;
- (id)messageGenerator;
- (long long)openSDKMessageType;
- (BOOL)precheck;
- (void)generateEmoticonMessage;
- (id)emoticonUploader;
- (void)setEmoticonUploader:(id)arg1;
- (id)communicateData;
- (void)setCommunicateData:(id)arg1;
- (void)setMessageGenerator:(id)arg1;
- (void).cxx_destruct;
@end
