@interface WXKBBizCommentAction : WXKBBizAction <IAppDataExt>
{
    AppCommunicateData * _communicateData; // +0x8
    EmoticonUploader * _emoticonUploader; // +0x10
}
- (id)initWithDictionary:(id)arg1;
- (void)privatePerform;
- (BOOL)precheck;
- (void)generateEmoticonMessage;
- (id)communicateData;
- (void)setCommunicateData:(id)arg1;
- (id)emoticonUploader;
- (void)setEmoticonUploader:(id)arg1;
- (void).cxx_destruct;
@end
