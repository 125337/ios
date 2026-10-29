@interface WXMediaInternalMessage : NSObject
{
    BOOL appBrandWithShareTicket; // +0x8
    BOOL isAppBrandUpdatableMessage; // +0x9
    BOOL isSecrectMessage; // +0xa
    BOOL bIsShowLaunchFailToast; // +0xb
    BOOL _disableForward; // +0xc
    int _weworkSubType; // +0x10
    unsigned int _musicVideoDuration; // +0x14
    unsigned int _isVideo; // +0x18
    unsigned int _videoDuration; // +0x1c
    NSString * title; // +0x20
    NSString * description; // +0x28
    NSData * thumbData; // +0x30
    NSString * mediaTagName; // +0x38
    unsigned long long objectType; // +0x40
    NSString * extInfo; // +0x48
    NSString * fileExt; // +0x50
    NSData * fileData; // +0x58
    NSString * mediaUrl; // +0x60
    NSString * mediaLowBandUrl; // +0x68
    NSString * mediaDataUrl; // +0x70
    NSString * mediaLowBandDataUrl; // +0x78
    NSString * messageExt; // +0x80
    NSString * messageAction; // +0x88
    NSArray * fileDatas; // +0x90
    NSString * appBrandUserName; // +0x98
    NSString * appBrandPath; // +0xa0
    NSDictionary * appBrandExtraInfoDic; // +0xa8
    NSString * parameter; // +0xb0
    NSString * fullScheme; // +0xb8
    unsigned long long showType; // +0xc0
    NSData * _hdThumbData; // +0xc8
    NSString * _appBrandAppid; // +0xd0
    unsigned long long _miniProgramType; // +0xd8
    NSDictionary * _webPageExtraInfoDic; // +0xe0
    NSString * _sightCdnVideoUrl; // +0xe8
    NSString * _sightCdnThumbUrl; // +0xf0
    NSString * _sightAppThumbUrl; // +0xf8
    NSString * _enterpriseCardContent; // +0x100
    long long _enterpriseCardMsgType; // +0x108
    NSString * _songAlbumUrl; // +0x110
    NSString * _songLyric; // +0x118
    long long _brandOfficialFlag; // +0x120
    long long _relievedBuyFlag; // +0x128
    NSString * _musicVideoSingerName; // +0x130
    NSString * _musicVideoAlbumName; // +0x138
    NSString * _musicVideoMusicGenre; // +0x140
    unsigned long long _musicVideoIssueDate; // +0x148
    NSString * _musicVideoIdentification; // +0x150
    NSData * _musicVideoHdAlbumThumbData; // +0x158
    NSString * _musicVideoOperationUrl; // +0x160
    NSString * _videoFileLocalIdentifier; // +0x168
    NSString * _musicMid; // +0x170
    NSString * _shareData; // +0x178
    NSData * _gameThumbData; // +0x180
    CGSize _hdThumbImageSize; // +0x188
}
+ (id)message;
- (id)init;
- (id)logDescription;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)description;
- (void)setDescription:(id)arg1;
- (id)thumbData;
- (void)setThumbData:(id)arg1;
- (id)mediaTagName;
- (void)setMediaTagName:(id)arg1;
- (unsigned long long)objectType;
- (void)setObjectType:(unsigned long long)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)fileExt;
- (void)setFileExt:(id)arg1;
- (id)fileData;
- (void)setFileData:(id)arg1;
- (id)mediaUrl;
- (void)setMediaUrl:(id)arg1;
- (id)mediaLowBandUrl;
- (void)setMediaLowBandUrl:(id)arg1;
- (id)mediaDataUrl;
- (void)setMediaDataUrl:(id)arg1;
- (id)mediaLowBandDataUrl;
- (void)setMediaLowBandDataUrl:(id)arg1;
- (id)messageExt;
- (void)setMessageExt:(id)arg1;
- (id)messageAction;
- (void)setMessageAction:(id)arg1;
- (id)fileDatas;
- (void)setFileDatas:(id)arg1;
- (id)appBrandUserName;
- (void)setAppBrandUserName:(id)arg1;
- (id)appBrandPath;
- (void)setAppBrandPath:(id)arg1;
- (BOOL)appBrandWithShareTicket;
- (void)setAppBrandWithShareTicket:(BOOL)arg1;
- (BOOL)isAppBrandUpdatableMessage;
- (void)setIsAppBrandUpdatableMessage:(BOOL)arg1;
- (BOOL)isSecrectMessage;
- (void)setIsSecrectMessage:(BOOL)arg1;
- (id)appBrandExtraInfoDic;
- (void)setAppBrandExtraInfoDic:(id)arg1;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id)fullScheme;
- (void)setFullScheme:(id)arg1;
- (unsigned long long)showType;
- (void)setShowType:(unsigned long long)arg1;
- (BOOL)bIsShowLaunchFailToast;
- (void)setBIsShowLaunchFailToast:(BOOL)arg1;
- (id)hdThumbData;
- (void)setHdThumbData:(id)arg1;
- (CGSize)hdThumbImageSize;
- (void)setHdThumbImageSize:(CGSize)arg1;
- (id)appBrandAppid;
- (void)setAppBrandAppid:(id)arg1;
- (BOOL)disableForward;
- (void)setDisableForward:(BOOL)arg1;
- (unsigned long long)miniProgramType;
- (void)setMiniProgramType:(unsigned long long)arg1;
- (id)webPageExtraInfoDic;
- (void)setWebPageExtraInfoDic:(id)arg1;
- (id)sightCdnVideoUrl;
- (void)setSightCdnVideoUrl:(id)arg1;
- (id)sightCdnThumbUrl;
- (void)setSightCdnThumbUrl:(id)arg1;
- (id)sightAppThumbUrl;
- (void)setSightAppThumbUrl:(id)arg1;
- (id)enterpriseCardContent;
- (void)setEnterpriseCardContent:(id)arg1;
- (long long)enterpriseCardMsgType;
- (void)setEnterpriseCardMsgType:(long long)arg1;
- (int)weworkSubType;
- (void)setWeworkSubType:(int)arg1;
- (id)songAlbumUrl;
- (void)setSongAlbumUrl:(id)arg1;
- (id)songLyric;
- (void)setSongLyric:(id)arg1;
- (long long)brandOfficialFlag;
- (void)setBrandOfficialFlag:(long long)arg1;
- (long long)relievedBuyFlag;
- (void)setRelievedBuyFlag:(long long)arg1;
- (id)musicVideoSingerName;
- (void)setMusicVideoSingerName:(id)arg1;
- (id)musicVideoAlbumName;
- (void)setMusicVideoAlbumName:(id)arg1;
- (id)musicVideoMusicGenre;
- (void)setMusicVideoMusicGenre:(id)arg1;
- (unsigned long long)musicVideoIssueDate;
- (void)setMusicVideoIssueDate:(unsigned long long)arg1;
- (id)musicVideoIdentification;
- (void)setMusicVideoIdentification:(id)arg1;
- (id)musicVideoHdAlbumThumbData;
- (void)setMusicVideoHdAlbumThumbData:(id)arg1;
- (unsigned int)musicVideoDuration;
- (void)setMusicVideoDuration:(unsigned int)arg1;
- (id)musicVideoOperationUrl;
- (void)setMusicVideoOperationUrl:(id)arg1;
- (id)videoFileLocalIdentifier;
- (void)setVideoFileLocalIdentifier:(id)arg1;
- (id)musicMid;
- (void)setMusicMid:(id)arg1;
- (unsigned int)isVideo;
- (void)setIsVideo:(unsigned int)arg1;
- (unsigned int)videoDuration;
- (void)setVideoDuration:(unsigned int)arg1;
- (id)shareData;
- (void)setShareData:(id)arg1;
- (id)gameThumbData;
- (void)setGameThumbData:(id)arg1;
- (void).cxx_destruct;
@end

