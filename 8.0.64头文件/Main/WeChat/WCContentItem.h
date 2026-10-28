@interface WCContentItem : NSObject <NSCoding, PBCoding>
{
    int _type; // +0x8
    int _flag; // +0xc
    unsigned int _createtime; // +0x10
    NSString * _title; // +0x18
    NSString * _desc; // +0x20
    NSString * _titlePattern; // +0x28
    NSString * _descPattern; // +0x30
    NSString * _linkUrl; // +0x38
    NSString * _linkUrl2; // +0x40
    long long _subType; // +0x48
    NSString * _username; // +0x50
    NSString * _nickname; // +0x58
    NSMutableArray * _mediaList; // +0x60
    WCNoteInfo * _noteInfo; // +0x68
    WCAppMsgShareInfo * _appMsgShareInfo; // +0x70
    NSString * _emojiMd5; // +0x78
    WCFinderShareToMomentsItem * _finderShareToMomentsItem; // +0x80
    WCMegaVideoShareItem * _finderLongVideoShareItem; // +0x88
    WCFinderTopicShareItem * _finderTopicShareItem; // +0x90
    WCFinderContentColumnSharedItem * _finderContentColumnSharedItem; // +0x98
    WCBrandMpVideoItem * _brandMpVideoItem; // +0xa0
    WCFinderLiveShareItem * _finderLiveShareItem; // +0xa8
    WCFinderShareItemContainer * _finderShareItem; // +0xb0
    WCFinderCollectionShareItem * _finderCollectionShareItem; // +0xb8
    WCFinderLiveShopWindowShareItem * _finderShopWindowShare; // +0xc0
    MMMusicShareItem * _musicShareItem; // +0xc8
    TingShareListenItem * _tingListenItem; // +0xd0
    TingShareCategoryItem * _tingCategoryItem; // +0xd8
    TingShareChatRoomItem * _tingChatRoomItem; // +0xe0
    TingShareLyricsItem * _tingLyricsItem; // +0xe8
    EcsShareSnsInfo * _ecsShareInfo; // +0xf0
    EcsInfo * _ecsInfo; // +0xf8
    WCMomentsTigerInfo * _tigerInfo; // +0x100
    WCMomentsRabbitInfo * _rabbitInfo; // +0x108
    WCMomentsDragonInfo * _dragonInfo; // +0x110
    WCMomentsSpringFestivalInfo * _springFestivalInfo; // +0x118
    WCFinderThemeLiveStreamShareItem * _finderThemeLiveShareItem; // +0x120
    NSMutableDictionary * _feedExperiments; // +0x128
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_linkUrl;
+ (void)PBArrayAdd_linkUrl2;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_subType;
+ (void)PBArrayAdd_flag;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_createtime;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_noteInfo;
+ (void)PBArrayAdd_appMsgShareInfo;
+ (void)PBArrayAdd_finderShareToMomentsItem;
+ (void)PBArrayAdd_finderTopicShareItem;
+ (void)PBArrayAdd_brandMpVideoItem;
+ (void)PBArrayAdd_finderLongVideoShareItem;
+ (void)PBArrayAdd_finderLiveShareItem;
+ (void)PBArrayAdd_finderContentColumnSharedItem;
+ (void)PBArrayAdd_finderShareItem;
+ (void)PBArrayAdd_musicShareItem;
+ (void)PBArrayAdd_tigerInfo;
+ (void)PBArrayAdd_tingListenItem;
+ (void)PBArrayAdd_tingCategoryItem;
+ (void)PBArrayAdd_tingLyricsItem;
+ (void)PBArrayAdd_rabbitInfo;
+ (void)PBArrayAdd_finderThemeLiveShareItem;
+ (void)PBArrayAdd_dragonInfo;
+ (void)PBArrayAdd_finderCollectionShareItem;
+ (void)PBArrayAdd_springFestivalInfo;
+ (void)PBArrayAdd_ecsShareInfo;
+ (void)PBArrayAdd_ecsInfo;
+ (void)PBArrayAdd_feedExperiments;
+ (void)initialize;
+ (BOOL)isPhotoType:(long long)arg1;
+ (BOOL)isTypeThatSupportsLivePhoto:(long long)arg1;
+ (BOOL)isVideoType:(long long)arg1;
- (BOOL)isFinderTopicLikeShareType;
- (id)usedFinderTopicShareItem;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isPhotoType;
- (BOOL)isTypeThatSupportsLivePhoto;
- (BOOL)hasLivePhoto;
- (BOOL)isVideoType;
- (BOOL)isValid;
- (id)debugDescription;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)titlePattern;
- (void)setTitlePattern:(id)arg1;
- (id)descPattern;
- (void)setDescPattern:(id)arg1;
- (id)linkUrl;
- (void)setLinkUrl:(id)arg1;
- (id)linkUrl2;
- (void)setLinkUrl2:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (long long)subType;
- (void)setSubType:(long long)arg1;
- (int)flag;
- (void)setFlag:(int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (unsigned int)createtime;
- (void)setCreatetime:(unsigned int)arg1;
- (id)mediaList;
- (void)setMediaList:(id)arg1;
- (id)noteInfo;
- (void)setNoteInfo:(id)arg1;
- (id)appMsgShareInfo;
- (void)setAppMsgShareInfo:(id)arg1;
- (id)emojiMd5;
- (void)setEmojiMd5:(id)arg1;
- (id)finderShareToMomentsItem;
- (void)setFinderShareToMomentsItem:(id)arg1;
- (id)finderLongVideoShareItem;
- (void)setFinderLongVideoShareItem:(id)arg1;
- (id)finderTopicShareItem;
- (void)setFinderTopicShareItem:(id)arg1;
- (id)finderContentColumnSharedItem;
- (void)setFinderContentColumnSharedItem:(id)arg1;
- (id)brandMpVideoItem;
- (void)setBrandMpVideoItem:(id)arg1;
- (id)finderLiveShareItem;
- (void)setFinderLiveShareItem:(id)arg1;
- (id)finderShareItem;
- (void)setFinderShareItem:(id)arg1;
- (id)finderCollectionShareItem;
- (void)setFinderCollectionShareItem:(id)arg1;
- (id)finderShopWindowShare;
- (void)setFinderShopWindowShare:(id)arg1;
- (id)musicShareItem;
- (void)setMusicShareItem:(id)arg1;
- (id)tingListenItem;
- (void)setTingListenItem:(id)arg1;
- (id)tingCategoryItem;
- (void)setTingCategoryItem:(id)arg1;
- (id)tingChatRoomItem;
- (void)setTingChatRoomItem:(id)arg1;
- (id)tingLyricsItem;
- (void)setTingLyricsItem:(id)arg1;
- (id)ecsShareInfo;
- (void)setEcsShareInfo:(id)arg1;
- (id)ecsInfo;
- (void)setEcsInfo:(id)arg1;
- (id)tigerInfo;
- (void)setTigerInfo:(id)arg1;
- (id)rabbitInfo;
- (void)setRabbitInfo:(id)arg1;
- (id)dragonInfo;
- (void)setDragonInfo:(id)arg1;
- (id)springFestivalInfo;
- (void)setSpringFestivalInfo:(id)arg1;
- (id)finderThemeLiveShareItem;
- (void)setFinderThemeLiveShareItem:(id)arg1;
- (id)feedExperiments;
- (void)setFeedExperiments:(id)arg1;
- (void).cxx_destruct;
@end
