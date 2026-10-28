@interface MPLandingPageOpenParameter : MMObject <PBCoding>
{
    unsigned int _itemShowType; // +0x8
    unsigned int _scene; // +0xc
    unsigned int _subscene; // +0x10
    unsigned int _funcFlag; // +0x14
    unsigned int _getA8KeyScene; // +0x18
    unsigned int _fromVCType; // +0x1c
    NSString * _url; // +0x20
    NSString * _bizUserName; // +0x28
    NSString * _bizNickname; // +0x30
    NSString * _title; // +0x38
    NSString * _digest; // +0x40
    NSDate * _pubTime; // +0x48
    NSString * _sessionId; // +0x50
    UIImage * _thumbImage; // +0x58
    NSString * _thumbUrl; // +0x60
    unsigned long long _commentTopicId; // +0x68
    NSString * _channelSessionId; // +0x70
    MPVideoPageOpenParameter * _videoParam; // +0x78
    UINavigationController * _preRenderNavigationController; // +0x80
    NSString * _minimizationOpenBizKey; // +0x88
    CGRect _thumbOriginRect; // +0x90
}
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_bizUserName;
+ (void)PBArrayAdd_bizNickname;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_digest;
+ (void)PBArrayAdd_pubTime;
+ (void)PBArrayAdd_itemShowType;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_subscene;
+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_funcFlag;
+ (void)PBArrayAdd_getA8KeyScene;
+ (void)PBArrayAdd_fromVCType;
+ (void)PBArrayAdd_commentTopicId;
+ (void)PBArrayAdd_videoParam;
+ (void)PBArrayAdd_thumbUrl;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)bizUserName;
- (void)setBizUserName:(id)arg1;
- (id)bizNickname;
- (void)setBizNickname:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)digest;
- (void)setDigest:(id)arg1;
- (id)pubTime;
- (void)setPubTime:(id)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)subscene;
- (void)setSubscene:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (CGRect)thumbOriginRect;
- (void)setThumbOriginRect:(CGRect)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (unsigned int)funcFlag;
- (void)setFuncFlag:(unsigned int)arg1;
- (unsigned int)getA8KeyScene;
- (void)setGetA8KeyScene:(unsigned int)arg1;
- (unsigned int)fromVCType;
- (void)setFromVCType:(unsigned int)arg1;
- (unsigned long long)commentTopicId;
- (void)setCommentTopicId:(unsigned long long)arg1;
- (id)channelSessionId;
- (void)setChannelSessionId:(id)arg1;
- (id)videoParam;
- (void)setVideoParam:(id)arg1;
- (id)preRenderNavigationController;
- (void)setPreRenderNavigationController:(id)arg1;
- (id)minimizationOpenBizKey;
- (void)setMinimizationOpenBizKey:(id)arg1;
- (void).cxx_destruct;
@end
