@interface MMMusicInfo : NSObject <PBCoding, NSCoding, NSCopying>
{
    NSString * m_nsMusicID; // +0x8
    NSString * m_nsTitle; // +0x10
    NSString * m_nsSinger; // +0x18
    NSString * m_nsEPName; // +0x20
    NSString * m_nsCoverImg; // +0x28
    NSString * m_nsCoverImgHD; // +0x30
    NSString * m_nsLyrics; // +0x38
    NSString * m_nsWebUrl; // +0x40
    NSString * m_nsDataUrl; // +0x48
    NSString * m_nsLowBandUrl; // +0x50
    NSString * m_nsAppId; // +0x58
    NSString * m_nsJSAPIWebUrl; // +0x60
    NSString * m_webViewId; // +0x68
    NSString * m_nsWAUsername; // +0x70
    NSString * m_nsWAAppId; // +0x78
    NSString * m_nsLiteAppId; // +0x80
    double m_nsStartTime; // +0x88
    NSString * m_nsWebViewSrcId; // +0x90
    NSString * m_nsMusicBarUrl; // +0x98
    BOOL m_isLocalFile; // +0xa0
    BOOL m_disableBanner; // +0xa1
    BOOL m_isSpam; // +0xa2
    BOOL m_isHLS; // +0xa3
    BOOL m_isBannerDirectToWebView; // +0xa4
    NSString * m_nsBizUserName; // +0xa8
    NSString * m_favId; // +0xb0
    int m_originSourceType; // +0xb8
    MusicLiveGetSongStatusResp_MusicianInfo * m_nsMusician; // +0xc0
    BOOL _ignoreCache; // +0xc8
    unsigned int _playActionSourceType; // +0xcc
    double m_playbackRate; // +0xd0
    unsigned long long uiStyle; // +0xd8
    NSString * m_spamAlertWording; // +0xe0
    NSString * m_genre; // +0xe8
    double m_publicTime; // +0xf0
    MMMusicShareItem * m_musicShareItem; // +0xf8
    NSString * mpAudioId; // +0x100
    NSString * _referrer; // +0x108
    UIImage * _minimizeMVThumbImage; // +0x110
    NSString * _minimizeMVThumbUrl; // +0x118
    UIImage * _m_localCoverImage; // +0x120
    id _m_userData; // +0x128
    UIViewController * _m_mvViewController; // +0x130
    AudioFileBehaviorReporter * _behaviorReporter; // +0x138
}
+ (id)singerNameFromArray:(id)arg1;
+ (void)PBArrayAdd_m_nsMusicID;
+ (void)PBArrayAdd_m_nsTitle;
+ (void)PBArrayAdd_m_nsSinger;
+ (void)PBArrayAdd_m_nsEPName;
+ (void)PBArrayAdd_m_nsCoverImg;
+ (void)PBArrayAdd_m_nsCoverImgHD;
+ (void)PBArrayAdd_m_nsLyrics;
+ (void)PBArrayAdd_m_nsWebUrl;
+ (void)PBArrayAdd_m_nsDataUrl;
+ (void)PBArrayAdd_m_nsLowBandUrl;
+ (void)PBArrayAdd_m_nsAppId;
+ (void)PBArrayAdd_m_nsJSAPIWebUrl;
+ (void)PBArrayAdd_m_webViewId;
+ (void)PBArrayAdd_m_nsWAUsername;
+ (void)PBArrayAdd_m_nsWAAppId;
+ (void)PBArrayAdd_m_nsStartTime;
+ (void)PBArrayAdd_m_nsWebViewSrcId;
+ (void)PBArrayAdd_m_nsMusicBarUrl;
+ (void)PBArrayAdd_m_isLocalFile;
+ (void)PBArrayAdd_m_disableBanner;
+ (void)PBArrayAdd_m_isSpam;
+ (void)PBArrayAdd_m_isHLS;
+ (void)PBArrayAdd_m_isBannerDirectToWebView;
+ (void)PBArrayAdd_m_favId;
+ (void)PBArrayAdd_m_playbackRate;
+ (void)PBArrayAdd_uiStyle;
+ (void)PBArrayAdd_m_spamAlertWording;
+ (void)PBArrayAdd_m_genre;
+ (void)PBArrayAdd_m_publicTime;
+ (void)PBArrayAdd_m_musicShareItem;
+ (void)PBArrayAdd_m_nsMusician;
+ (void)PBArrayAdd_m_nsLiteAppId;
+ (void)PBArrayAdd_mpAudioId;
+ (void)initialize;
+ (id)genMusicInfoFromMsg:(id)arg1;
- (id)initWithLiveMusicInfo:(id)arg1;
- (id)stringWithouHighlightedMark:(id)arg1;
- (id)initWithFlutterMusicInfo:(id)arg1 uiStyle:(unsigned long long)arg2;
- (id)toFlutterMusicInfo;
- (id)initWithSendMusicRequest:(id)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isChannelMusic;
- (BOOL)isQQMusic;
- (BOOL)isQQMusicAppId;
- (BOOL)isShakeOversea;
- (BOOL)isMusicUrlEmpty;
- (BOOL)isLyricsEmpty;
- (BOOL)m_disableBanner;
- (id)m_nsMusicID;
- (void)setM_nsMusicID:(id)arg1;
- (id)m_nsTitle;
- (void)setM_nsTitle:(id)arg1;
- (id)m_nsSinger;
- (void)setM_nsSinger:(id)arg1;
- (id)m_nsEPName;
- (void)setM_nsEPName:(id)arg1;
- (id)m_nsCoverImg;
- (void)setM_nsCoverImg:(id)arg1;
- (id)m_nsCoverImgHD;
- (void)setM_nsCoverImgHD:(id)arg1;
- (id)m_nsLyrics;
- (void)setM_nsLyrics:(id)arg1;
- (id)m_nsWebUrl;
- (void)setM_nsWebUrl:(id)arg1;
- (id)m_nsDataUrl;
- (void)setM_nsDataUrl:(id)arg1;
- (id)m_nsLowBandUrl;
- (void)setM_nsLowBandUrl:(id)arg1;
- (id)m_nsAppId;
- (void)setM_nsAppId:(id)arg1;
- (id)m_nsJSAPIWebUrl;
- (void)setM_nsJSAPIWebUrl:(id)arg1;
- (id)m_webViewId;
- (void)setM_webViewId:(id)arg1;
- (id)m_nsWAUsername;
- (void)setM_nsWAUsername:(id)arg1;
- (id)m_nsWAAppId;
- (void)setM_nsWAAppId:(id)arg1;
- (double)m_nsStartTime;
- (void)setM_nsStartTime:(double)arg1;
- (id)m_nsWebViewSrcId;
- (void)setM_nsWebViewSrcId:(id)arg1;
- (id)m_nsMusicBarUrl;
- (void)setM_nsMusicBarUrl:(id)arg1;
- (BOOL)m_isLocalFile;
- (void)setM_isLocalFile:(BOOL)arg1;
- (void)setM_disableBanner:(BOOL)arg1;
- (BOOL)m_isSpam;
- (void)setM_isSpam:(BOOL)arg1;
- (BOOL)m_isHLS;
- (void)setM_isHLS:(BOOL)arg1;
- (BOOL)m_isBannerDirectToWebView;
- (void)setM_isBannerDirectToWebView:(BOOL)arg1;
- (id)m_favId;
- (void)setM_favId:(id)arg1;
- (double)m_playbackRate;
- (void)setM_playbackRate:(double)arg1;
- (unsigned long long)uiStyle;
- (void)setUiStyle:(unsigned long long)arg1;
- (id)m_spamAlertWording;
- (void)setM_spamAlertWording:(id)arg1;
- (id)m_genre;
- (void)setM_genre:(id)arg1;
- (double)m_publicTime;
- (void)setM_publicTime:(double)arg1;
- (id)m_musicShareItem;
- (void)setM_musicShareItem:(id)arg1;
- (id)m_nsMusician;
- (void)setM_nsMusician:(id)arg1;
- (id)m_nsLiteAppId;
- (void)setM_nsLiteAppId:(id)arg1;
- (id)mpAudioId;
- (void)setMpAudioId:(id)arg1;
- (int)m_originSourceType;
- (void)setM_originSourceType:(int)arg1;
- (id)m_nsBizUserName;
- (void)setM_nsBizUserName:(id)arg1;
- (id)referrer;
- (void)setReferrer:(id)arg1;
- (id)minimizeMVThumbImage;
- (void)setMinimizeMVThumbImage:(id)arg1;
- (id)minimizeMVThumbUrl;
- (void)setMinimizeMVThumbUrl:(id)arg1;
- (id)m_localCoverImage;
- (void)setM_localCoverImage:(id)arg1;
- (id)m_userData;
- (void)setM_userData:(id)arg1;
- (unsigned int)playActionSourceType;
- (void)setPlayActionSourceType:(unsigned int)arg1;
- (id)m_mvViewController;
- (void)setM_mvViewController:(id)arg1;
- (BOOL)ignoreCache;
- (void)setIgnoreCache:(BOOL)arg1;
- (id)behaviorReporter;
- (void)setBehaviorReporter:(id)arg1;
- (void).cxx_destruct;
@end

