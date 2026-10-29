@interface WAShareAppMessageCommonParamsModel : NSObject
{
    BOOL _disableForward; // +0x8
    BOOL _useDefaultSnapshot; // +0x9
    BOOL _hasRelievedBuyPlugin; // +0xa
    BOOL _useForChatTool; // +0xb
    BOOL _sdk_isFromMenu; // +0xc
    unsigned int _cardSubType; // +0x10
    int _appBrandPriority; // +0x14
    NSString * _title; // +0x18
    NSString * _desc; // +0x20
    NSString * _path; // +0x28
    NSString * _imageUrl; // +0x30
    NSString * _cacheKey; // +0x38
    NSDictionary * _messageExtraData; // +0x40
    NSString * _webpageUrl; // +0x48
    NSString * _to; // +0x50
    NSString * _signature; // +0x58
    NSString * _thumbDataHash; // +0x60
    NSString * _videoPath; // +0x68
    NSString * _videoThumbPath; // +0x70
    NSString * _videoMD5; // +0x78
    NSString * _videoButtonText; // +0x80
    NSString * _playDesc; // +0x88
    NSString * _type; // +0x90
    NSString * _link; // +0x98
    long long _bizType; // +0xa0
    NSString * _defaultHintUrl; // +0xa8
    NSString * _tailLang; // +0xb0
    NSString * _bizSourceName; // +0xb8
    NSString * _bizSourceIconUrl; // +0xc0
    NSString * _chatroomUsername; // +0xc8
    NSString * _chatToolMode; // +0xd0
    NSString * _webViewUrl; // +0xd8
    NSString * _mode; // +0xe0
    NSString * _minitoolCardInfo; // +0xe8
    NSDictionary * _WAShareAppMessageCommonParamsModel_OriginDictionary; // +0xf0
    NSString * _ownerAppid; // +0xf8
}
+ (id)fromDictionary:(id)arg1;
- (id)description;
- (id)toShareAppMessageContextModelWithWAContact:(id)arg1 cardType:(int)arg2 shouldUseUpdatableShare:(BOOL)arg3 updatableShareTemplateId:(id)arg4 isTodoMessage:(BOOL)arg5 toDoActivityId:(id)arg6 isPrivateMessage:(BOOL)arg7 secFlagForSinglePageMode:(unsigned int)arg8;
- (BOOL)needSignature;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)cacheKey;
- (void)setCacheKey:(id)arg1;
- (BOOL)disableForward;
- (void)setDisableForward:(BOOL)arg1;
- (id)messageExtraData;
- (void)setMessageExtraData:(id)arg1;
- (BOOL)useDefaultSnapshot;
- (void)setUseDefaultSnapshot:(BOOL)arg1;
- (id)webpageUrl;
- (void)setWebpageUrl:(id)arg1;
- (id)to;
- (void)setTo:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)thumbDataHash;
- (void)setThumbDataHash:(id)arg1;
- (unsigned int)cardSubType;
- (void)setCardSubType:(unsigned int)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)videoThumbPath;
- (void)setVideoThumbPath:(id)arg1;
- (id)videoMD5;
- (void)setVideoMD5:(id)arg1;
- (id)videoButtonText;
- (void)setVideoButtonText:(id)arg1;
- (id)playDesc;
- (void)setPlayDesc:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (BOOL)hasRelievedBuyPlugin;
- (void)setHasRelievedBuyPlugin:(BOOL)arg1;
- (long long)bizType;
- (void)setBizType:(long long)arg1;
- (id)defaultHintUrl;
- (void)setDefaultHintUrl:(id)arg1;
- (id)tailLang;
- (void)setTailLang:(id)arg1;
- (int)appBrandPriority;
- (void)setAppBrandPriority:(int)arg1;
- (id)bizSourceName;
- (void)setBizSourceName:(id)arg1;
- (id)bizSourceIconUrl;
- (void)setBizSourceIconUrl:(id)arg1;
- (id)chatroomUsername;
- (void)setChatroomUsername:(id)arg1;
- (BOOL)useForChatTool;
- (void)setUseForChatTool:(BOOL)arg1;
- (id)chatToolMode;
- (void)setChatToolMode:(id)arg1;
- (id)webViewUrl;
- (void)setWebViewUrl:(id)arg1;
- (id)mode;
- (void)setMode:(id)arg1;
- (id)minitoolCardInfo;
- (void)setMinitoolCardInfo:(id)arg1;
- (BOOL)sdk_isFromMenu;
- (void)setSdk_isFromMenu:(BOOL)arg1;
- (id)WAShareAppMessageCommonParamsModel_OriginDictionary;
- (void)setWAShareAppMessageCommonParamsModel_OriginDictionary:(id)arg1;
- (id)ownerAppid;
- (void)setOwnerAppid:(id)arg1;
- (void).cxx_destruct;
@end
