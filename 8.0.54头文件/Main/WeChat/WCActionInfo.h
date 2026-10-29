@interface WCActionInfo : NSObject <NSCoding, PBCoding>
{
    int _scene; // +0x8
    int _type; // +0xc
    int _appInstalledActionScene; // +0x10
    int _appUninstalledActionScene; // +0x14
    NSString * _mediaTagName; // +0x18
    NSString * _appID; // +0x20
    NSString * _url; // +0x28
    NSString * _wordingKey; // +0x30
    NSString * _messageExt; // +0x38
    NSString * _messageAction; // +0x40
    NSString * _appInstalledWordingKey; // +0x48
    NSString * _appUninstalledWordingKey; // +0x50
    NSString * _customAppInstalledWording; // +0x58
    NSString * _customAppInstalledWording4ZhTw; // +0x60
    NSString * _customAppInstalledWording4EnUs; // +0x68
    NSString * _customAppUninstalledWording; // +0x70
    NSString * _customAppUninstalledWording4ZhTw; // +0x78
    NSString * _customAppUninstalledWording4EnUs; // +0x80
}
+ (void)PBArrayAdd_mediaTagName;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_wordingKey;
+ (void)PBArrayAdd_messageExt;
+ (void)PBArrayAdd_messageAction;
+ (void)PBArrayAdd_appInstalledActionScene;
+ (void)PBArrayAdd_appUninstalledActionScene;
+ (void)PBArrayAdd_appInstalledWordingKey;
+ (void)PBArrayAdd_appUninstalledWordingKey;
+ (void)PBArrayAdd_customAppInstalledWording;
+ (void)PBArrayAdd_customAppInstalledWording4ZhTw;
+ (void)PBArrayAdd_customAppInstalledWording4EnUs;
+ (void)PBArrayAdd_customAppUninstalledWording;
+ (void)PBArrayAdd_customAppUninstalledWording4ZhTw;
+ (void)PBArrayAdd_customAppUninstalledWording4EnUs;
+ (void)initialize;
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValidForShow;
- (id)getProperWording;
- (id)getWordingkey;
- (id)messageExtDict;
- (id)toXML;
- (id)mediaTagName;
- (void)setMediaTagName:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)wordingKey;
- (void)setWordingKey:(id)arg1;
- (id)messageExt;
- (void)setMessageExt:(id)arg1;
- (id)messageAction;
- (void)setMessageAction:(id)arg1;
- (int)appInstalledActionScene;
- (void)setAppInstalledActionScene:(int)arg1;
- (int)appUninstalledActionScene;
- (void)setAppUninstalledActionScene:(int)arg1;
- (id)appInstalledWordingKey;
- (void)setAppInstalledWordingKey:(id)arg1;
- (id)appUninstalledWordingKey;
- (void)setAppUninstalledWordingKey:(id)arg1;
- (id)customAppInstalledWording;
- (void)setCustomAppInstalledWording:(id)arg1;
- (id)customAppInstalledWording4ZhTw;
- (void)setCustomAppInstalledWording4ZhTw:(id)arg1;
- (id)customAppInstalledWording4EnUs;
- (void)setCustomAppInstalledWording4EnUs:(id)arg1;
- (id)customAppUninstalledWording;
- (void)setCustomAppUninstalledWording:(id)arg1;
- (id)customAppUninstalledWording4ZhTw;
- (void)setCustomAppUninstalledWording4ZhTw:(id)arg1;
- (id)customAppUninstalledWording4EnUs;
- (void)setCustomAppUninstalledWording4EnUs:(id)arg1;
- (void).cxx_destruct;
@end

