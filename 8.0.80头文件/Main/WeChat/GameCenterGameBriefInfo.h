@interface GameCenterGameBriefInfo : MMObject <PBCoding>
{
    BOOL _hasEnableChatRoom; // +0x8
    unsigned int _tag; // +0xc
    int _appType; // +0x10
    NSString * _appID; // +0x18
    NSString * _name; // +0x20
    NSString * _remark; // +0x28
    NSString * _brief; // +0x30
    long long _trend; // +0x38
    NSString * _iconURL; // +0x40
    NSString * _downloadURL; // +0x48
    unsigned long long _showType; // +0x50
    NSString * _imageURL; // +0x58
    GameCenterLatestGameInfo * _latestGameInfo; // +0x60
    NSString * _webURL; // +0x68
    NSString * _noticeID; // +0x70
    NSArray * _promotedFeeds; // +0x78
    NSString * _titleForNewLabel; // +0x80
    NSString * _tagForNewApp; // +0x88
    GameCenterLabelInfo * _labelInfo; // +0x90
    NSString * _recommendDesc; // +0x98
    NSString * _externInfo; // +0xa0
    NSString * _h5GameAppid; // +0xa8
    NSString * _h5GameLaunchUrl; // +0xb0
    NSString * _h5GameDetailUrl; // +0xb8
}
+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_remark;
+ (void)PBArrayAdd_brief;
+ (void)PBArrayAdd_trend;
+ (void)PBArrayAdd_iconURL;
+ (void)PBArrayAdd_downloadURL;
+ (void)PBArrayAdd_tag;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_imageURL;
+ (void)PBArrayAdd_latestGameInfo;
+ (void)PBArrayAdd_webURL;
+ (void)PBArrayAdd_noticeID;
+ (void)PBArrayAdd_promotedFeeds;
+ (void)PBArrayAdd_titleForNewLabel;
+ (void)PBArrayAdd_tagForNewApp;
+ (void)PBArrayAdd_hasEnableChatRoom;
+ (void)PBArrayAdd_labelInfo;
+ (void)PBArrayAdd_recommendDesc;
+ (void)PBArrayAdd_externInfo;
+ (void)PBArrayAdd_appType;
+ (void)PBArrayAdd_h5GameAppid;
+ (void)PBArrayAdd_h5GameLaunchUrl;
+ (void)PBArrayAdd_h5GameDetailUrl;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)parseFromBriefInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (BOOL)isValid;
- (BOOL)canSubscribe;
- (BOOL)isWithNew;
- (void)parseFromAppItem:(id)arg1;
- (void)parseFromResp:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)remark;
- (void)setRemark:(id)arg1;
- (id)brief;
- (void)setBrief:(id)arg1;
- (long long)trend;
- (void)setTrend:(long long)arg1;
- (id)iconURL;
- (void)setIconURL:(id)arg1;
- (id)downloadURL;
- (void)setDownloadURL:(id)arg1;
- (unsigned int)tag;
- (void)setTag:(unsigned int)arg1;
- (unsigned long long)showType;
- (void)setShowType:(unsigned long long)arg1;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (id)latestGameInfo;
- (void)setLatestGameInfo:(id)arg1;
- (id)webURL;
- (void)setWebURL:(id)arg1;
- (id)noticeID;
- (void)setNoticeID:(id)arg1;
- (id)promotedFeeds;
- (void)setPromotedFeeds:(id)arg1;
- (id)titleForNewLabel;
- (void)setTitleForNewLabel:(id)arg1;
- (id)tagForNewApp;
- (void)setTagForNewApp:(id)arg1;
- (BOOL)hasEnableChatRoom;
- (void)setHasEnableChatRoom:(BOOL)arg1;
- (id)labelInfo;
- (void)setLabelInfo:(id)arg1;
- (id)recommendDesc;
- (void)setRecommendDesc:(id)arg1;
- (id)externInfo;
- (void)setExternInfo:(id)arg1;
- (int)appType;
- (void)setAppType:(int)arg1;
- (id)h5GameAppid;
- (void)setH5GameAppid:(id)arg1;
- (id)h5GameLaunchUrl;
- (void)setH5GameLaunchUrl:(id)arg1;
- (id)h5GameDetailUrl;
- (void)setH5GameDetailUrl:(id)arg1;
- (void).cxx_destruct;
@end
