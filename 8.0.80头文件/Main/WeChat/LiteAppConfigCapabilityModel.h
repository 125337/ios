@interface LiteAppConfigCapabilityModel : NSObject
{
    LiteAppConfigVoiceToTextModel * _voiceToText; // +0x8
    LiteAppConfigWebviewJsApiModel * _webviewJsApi; // +0x10
    LiteAppConfigPersistentKvModel * _persistentKv; // +0x18
    LiteAppConfigEmbedModel * _embed; // +0x20
}
- (id)init;
- (id)voiceToText;
- (void)setVoiceToText:(id)arg1;
- (id)webviewJsApi;
- (void)setWebviewJsApi:(id)arg1;
- (id)persistentKv;
- (void)setPersistentKv:(id)arg1;
- (id)embed;
- (void)setEmbed:(id)arg1;
- (void).cxx_destruct;
@end
