@interface OPItemWrap : NSObject
{
    BOOL _isRichText; // +0x8
    BOOL _isShowRedDot; // +0x9
    BOOL _opItemThumbnalShowPlaybtn; // +0xa
    unsigned int _opType; // +0xc
    unsigned int _tag; // +0x10
    unsigned int _numberOfLines; // +0x14
    NSString * _word; // +0x18
    NSString * _detailTitle; // +0x20
    NSString * _url; // +0x28
    UIColor * _wordColor; // +0x30
    NSString * _icon; // +0x38
    NSString * _darkModeIcon; // +0x40
    NSString * _hintThumbNail; // +0x48
    NSString * _hintDmThumbNail; // +0x50
    NSString * _memberBadge; // +0x58
    UIColor * _memberBadgeWxcolors; // +0x60
    TemplateWeappOPWrap * _weappOpWrap; // +0x68
    TemplateTingPlayListOPWrap * _tingPlaylistOpWrap; // +0x70
    TemplateScheduleOPWrap * _scheduleOpWrap; // +0x78
    TemplateAdvertiseOPWrap * _advertiseOpWrap; // +0x80
    TemplateFinderLiveOPWrap * _finderLiveOpWrap; // +0x88
    TemplateFooterOPWrap * _footerOpWrap; // +0x90
    TemplateFinderGameLiveOPWrap * _finderGameLiveOpWrap; // +0x98
    TemplateFinderFeedOPWrap * _finderFeedOpWrap; // +0xa0
    TemplateLiteAppOPWrap * _liteAppOpWrap; // +0xa8
    TemplateFinderMemberCenterOPWrap * _finderMemberCenterOpWrap; // +0xb0
    TemplateFinderAIGCTaskWrap * _finderAIGCTaskWrap; // +0xb8
    TemplateWebSearchOPWrap * _webSearchOpWrap; // +0xc0
    NSString * _extId; // +0xc8
    NSString * _businessId; // +0xd0
    NSString * _opItemThumbnail; // +0xd8
    BottomCardWrap * _bottomCard; // +0xe0
    EcsJumpInfo * _ecsJumpInfo; // +0xe8
}
- (id)word;
- (void)setWord:(id)arg1;
- (id)detailTitle;
- (void)setDetailTitle:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)wordColor;
- (void)setWordColor:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)darkModeIcon;
- (void)setDarkModeIcon:(id)arg1;
- (id)hintThumbNail;
- (void)setHintThumbNail:(id)arg1;
- (id)hintDmThumbNail;
- (void)setHintDmThumbNail:(id)arg1;
- (id)memberBadge;
- (void)setMemberBadge:(id)arg1;
- (id)memberBadgeWxcolors;
- (void)setMemberBadgeWxcolors:(id)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (unsigned int)tag;
- (void)setTag:(unsigned int)arg1;
- (BOOL)isRichText;
- (void)setIsRichText:(BOOL)arg1;
- (unsigned int)numberOfLines;
- (void)setNumberOfLines:(unsigned int)arg1;
- (id)weappOpWrap;
- (void)setWeappOpWrap:(id)arg1;
- (id)tingPlaylistOpWrap;
- (void)setTingPlaylistOpWrap:(id)arg1;
- (id)scheduleOpWrap;
- (void)setScheduleOpWrap:(id)arg1;
- (id)advertiseOpWrap;
- (void)setAdvertiseOpWrap:(id)arg1;
- (id)finderLiveOpWrap;
- (void)setFinderLiveOpWrap:(id)arg1;
- (id)footerOpWrap;
- (void)setFooterOpWrap:(id)arg1;
- (id)finderGameLiveOpWrap;
- (void)setFinderGameLiveOpWrap:(id)arg1;
- (id)finderFeedOpWrap;
- (void)setFinderFeedOpWrap:(id)arg1;
- (id)liteAppOpWrap;
- (void)setLiteAppOpWrap:(id)arg1;
- (id)finderMemberCenterOpWrap;
- (void)setFinderMemberCenterOpWrap:(id)arg1;
- (id)finderAIGCTaskWrap;
- (void)setFinderAIGCTaskWrap:(id)arg1;
- (id)webSearchOpWrap;
- (void)setWebSearchOpWrap:(id)arg1;
- (BOOL)isShowRedDot;
- (void)setIsShowRedDot:(BOOL)arg1;
- (id)extId;
- (void)setExtId:(id)arg1;
- (id)businessId;
- (void)setBusinessId:(id)arg1;
- (id)opItemThumbnail;
- (void)setOpItemThumbnail:(id)arg1;
- (BOOL)opItemThumbnalShowPlaybtn;
- (void)setOpItemThumbnalShowPlaybtn:(BOOL)arg1;
- (id)bottomCard;
- (void)setBottomCard:(id)arg1;
- (id)ecsJumpInfo;
- (void)setEcsJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
