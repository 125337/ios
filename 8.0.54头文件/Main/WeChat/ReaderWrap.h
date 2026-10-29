@interface ReaderWrap : NSObject
{
    NSString * m_nsTitle; // +0x8
    NSString * m_nsUrl; // +0x10
    NSString * m_nsNativeUrl; // +0x18
    NSString * m_nsShortUrl; // +0x20
    NSString * m_nsTid; // +0x28
    NSString * m_nsSource; // +0x30
    NSString * m_nsSourceIcon; // +0x38
    NSDate * m_pubTime; // +0x40
    unsigned int m_uiType; // +0x48
    BOOL m_bHasVedio; // +0x4c
    NSString * m_nsCategory; // +0x50
    NSString * m_nsUserName; // +0x58
    NSString * m_nsNickName; // +0x60
    ReaderTopNewWrap * m_TopNewWrap; // +0x68
    unsigned int m_uiDelFlag; // +0x70
    unsigned int m_uiContentAttributeBitSetFlag; // +0x74
    unsigned int m_uiItemShowType; // +0x78
    UIColor * m_topColor; // +0x80
    NSMutableArray * m_arrStyles; // +0x88
    NSMutableArray * m_arrLines; // +0x90
    BOOL _is_pay_recepit; // +0x98
    BOOL _isPaidContent; // +0x99
    BOOL _showComplaintButtonOldTemplate; // +0x9a
    BOOL _hasRedPacketCover; // +0x9b
    unsigned int m_playLength; // +0x9c
    unsigned int m_picNum; // +0xa0
    unsigned int m_tweetType; // +0xa4
    unsigned int _pay_recepit_detail_op_type; // +0xa8
    unsigned int _m_videoWidth; // +0xac
    unsigned int _m_videoHeight; // +0xb0
    unsigned int _m_commentTopicId; // +0xb4
    unsigned int _templateShowType; // +0xb8
    unsigned int _templateOpType; // +0xbc
    unsigned int _voiceType; // +0xc0
    unsigned int _opItemShowType; // +0xc4
    int _is_top_msg; // +0xc8
    NSString * m_groupId; // +0xd0
    NSString * _m_nsCover16_9; // +0xd8
    NSString * _m_nsCover1_1; // +0xe0
    NSString * _message_folder_id; // +0xe8
    NSString * _pay_recepit_detail_word; // +0xf0
    NSString * _pay_recepit_detail_url; // +0xf8
    NSString * _pay_recepit_middle_tips_word; // +0x100
    TemplateLiteAppOPWrap * _pay_recepit_detail_liteapp_wrap; // +0x108
    MiddleTipsWithBackground * _middle_tips_with_background; // +0x110
    NSString * _m_playUrl; // +0x118
    NSString * _m_player; // +0x120
    NSString * _m_videoId; // +0x128
    unsigned long long _musicSource; // +0x130
    TemplateImageTextWrap * _imageTextWrap; // +0x138
    TemplateHeaderWrap * _headerWrap; // +0x140
    TemplateDetailToplineWrap * _toplineWrap; // +0x148
    NSMutableArray * _leftColumns; // +0x150
    NSMutableArray * _rightColumns; // +0x158
    NSMutableArray * _opItems; // +0x160
    TemplateWeappOPWrap * _weappOpWrap; // +0x168
    TemplateTingPlayListOPWrap * _tingPlaylistOpWrap; // +0x170
    TemplateScheduleOPWrap * _scheduleOpWrap; // +0x178
    TemplateAdvertiseOPWrap * _advertiseOpWrap; // +0x180
    TemplateFinderLiveOPWrap * _finderLiveOpWrap; // +0x188
    TemplateFinderGameLiveOPWrap * _finderGameLiveOpWrap; // +0x190
    TemplateLiteAppOPWrap * _liteAppOpWrap; // +0x198
    TemplateFinderMemberCenterOPWrap * _finderMemberCenterOpWrap; // +0x1a0
    TemplateWebSearchOPWrap * _webSearchOpWrap; // +0x1a8
    WCFinderShareToMomentsItem * _finderShareItem; // +0x1b0
    NSString * _voiceId; // +0x1b8
    NSString * _tid; // +0x1c0
    NSString * _nonceId; // +0x1c8
    NSString * _rightCoverUrl; // +0x1d0
    NSString * _textTitle; // +0x1d8
    TemplateMsgControlInfo * _msgControlInfo; // +0x1e0
    unsigned long long _m_index; // +0x1e8
    BrandFinderLiveDataWrapper * _finderLiveData; // +0x1f0
    NSString * _top_msg_content; // +0x1f8
    ProductActivity * _productActivty; // +0x200
}
+ (BOOL)isReaderMsgJumpToWeapp:(id)arg1;
+ (BOOL)hasReaderMsgJumpToWeapp:(id)arg1;
+ (BOOL)isSingleBrandFinderLiveMsg:(id)arg1;
+ (BOOL)isBrandFinderLiveMsg:(id)arg1 withReaderWrapIndex:(unsigned int)arg2;
+ (BOOL)containReaderWrapFinderMsg:(id)arg1;
+ (BOOL)isReaderWrapHasUniqueFinderMsg:(id)arg1;
+ (BOOL)isReaderWrapFinderMsg:(id)arg1;
+ (BOOL)isReaderWrapFinderMsgAndShouldUseNewMpStyle:(id)arg1;
+ (id)getBrandFinderMsgNewMpStyleCover:(id)arg1 isHorizontolPic:(BOOL)arg2;
+ (id)getBrandFinderMsgNewMpStyleTitle:(id)arg1;
+ (void)convertReaderMsgToWeappMsg:(id)arg1 inMessage:(id)arg2;
+ (XmlReaderNode_t *)getReaderNode:(XmlReaderNode_t *)arg1;
+ (id)getFirstReaderTitle:(id)arg1;
+ (id)getArrReaderWaps:(id)arg1;
+ (id)getMessageFTSText:(id)arg1;
+ (BOOL)parseKeyLineWrap:(id)arg1 valueLineWrap:(id)arg2 xmlNode:(XmlReaderNode_t *)arg3;
+ (BOOL)parseLineWrap:(id)arg1 xmlNode:(XmlReaderNode_t *)arg2;
+ (id)parseUIColorFromWXColorsNode:(XmlReaderNode_t *)arg1;
+ (id)parseWCColorFromColorStr:(id)arg1 defaultColor:(id)arg2;
+ (id)getNotifyMsgFromReaderNode:(XmlReaderNode_t *)arg1;
+ (BOOL)isBrandAttributedNotifyMsgInMsgContentBeforeChangeForDisplayWithMsgWrap:(id)arg1;
- (id)description;
- (id)m_nsTitleWidthDefault;
- (id)m_nsTitle;
- (void)setM_nsTitle:(id)arg1;
- (id)m_nsUrl;
- (void)setM_nsUrl:(id)arg1;
- (id)m_nsNativeUrl;
- (void)setM_nsNativeUrl:(id)arg1;
- (id)m_nsShortUrl;
- (void)setM_nsShortUrl:(id)arg1;
- (id)m_nsTid;
- (void)setM_nsTid:(id)arg1;
- (id)m_nsSource;
- (void)setM_nsSource:(id)arg1;
- (id)m_nsSourceIcon;
- (void)setM_nsSourceIcon:(id)arg1;
- (id)m_pubTime;
- (void)setM_pubTime:(id)arg1;
- (unsigned int)m_uiType;
- (void)setM_uiType:(unsigned int)arg1;
- (BOOL)m_bHasVedio;
- (void)setM_bHasVedio:(BOOL)arg1;
- (id)m_nsCategory;
- (void)setM_nsCategory:(id)arg1;
- (id)m_nsUserName;
- (void)setM_nsUserName:(id)arg1;
- (id)m_nsNickName;
- (void)setM_nsNickName:(id)arg1;
- (id)m_TopNewWrap;
- (void)setM_TopNewWrap:(id)arg1;
- (unsigned int)m_uiDelFlag;
- (void)setM_uiDelFlag:(unsigned int)arg1;
- (id)m_topColor;
- (void)setM_topColor:(id)arg1;
- (unsigned int)m_uiItemShowType;
- (void)setM_uiItemShowType:(unsigned int)arg1;
- (id)m_arrStyles;
- (void)setM_arrStyles:(id)arg1;
- (id)m_arrLines;
- (void)setM_arrLines:(id)arg1;
- (unsigned int)m_uiContentAttributeBitSetFlag;
- (void)setM_uiContentAttributeBitSetFlag:(unsigned int)arg1;
- (unsigned int)m_playLength;
- (void)setM_playLength:(unsigned int)arg1;
- (unsigned int)m_picNum;
- (void)setM_picNum:(unsigned int)arg1;
- (unsigned int)m_tweetType;
- (void)setM_tweetType:(unsigned int)arg1;
- (id)m_groupId;
- (void)setM_groupId:(id)arg1;
- (id)m_nsCover16_9;
- (void)setM_nsCover16_9:(id)arg1;
- (id)m_nsCover1_1;
- (void)setM_nsCover1_1:(id)arg1;
- (BOOL)is_pay_recepit;
- (void)setIs_pay_recepit:(BOOL)arg1;
- (id)message_folder_id;
- (void)setMessage_folder_id:(id)arg1;
- (id)pay_recepit_detail_word;
- (void)setPay_recepit_detail_word:(id)arg1;
- (id)pay_recepit_detail_url;
- (void)setPay_recepit_detail_url:(id)arg1;
- (id)pay_recepit_middle_tips_word;
- (void)setPay_recepit_middle_tips_word:(id)arg1;
- (unsigned int)pay_recepit_detail_op_type;
- (void)setPay_recepit_detail_op_type:(unsigned int)arg1;
- (id)pay_recepit_detail_liteapp_wrap;
- (void)setPay_recepit_detail_liteapp_wrap:(id)arg1;
- (id)middle_tips_with_background;
- (void)setMiddle_tips_with_background:(id)arg1;
- (id)m_playUrl;
- (void)setM_playUrl:(id)arg1;
- (id)m_player;
- (void)setM_player:(id)arg1;
- (id)m_videoId;
- (void)setM_videoId:(id)arg1;
- (unsigned int)m_videoWidth;
- (void)setM_videoWidth:(unsigned int)arg1;
- (unsigned int)m_videoHeight;
- (void)setM_videoHeight:(unsigned int)arg1;
- (BOOL)isPaidContent;
- (void)setIsPaidContent:(BOOL)arg1;
- (unsigned int)m_commentTopicId;
- (void)setM_commentTopicId:(unsigned int)arg1;
- (unsigned long long)musicSource;
- (void)setMusicSource:(unsigned long long)arg1;
- (unsigned int)templateShowType;
- (void)setTemplateShowType:(unsigned int)arg1;
- (id)imageTextWrap;
- (void)setImageTextWrap:(id)arg1;
- (id)headerWrap;
- (void)setHeaderWrap:(id)arg1;
- (id)toplineWrap;
- (void)setToplineWrap:(id)arg1;
- (id)leftColumns;
- (void)setLeftColumns:(id)arg1;
- (id)rightColumns;
- (void)setRightColumns:(id)arg1;
- (id)opItems;
- (void)setOpItems:(id)arg1;
- (unsigned int)templateOpType;
- (void)setTemplateOpType:(unsigned int)arg1;
- (BOOL)showComplaintButtonOldTemplate;
- (void)setShowComplaintButtonOldTemplate:(BOOL)arg1;
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
- (id)finderGameLiveOpWrap;
- (void)setFinderGameLiveOpWrap:(id)arg1;
- (id)liteAppOpWrap;
- (void)setLiteAppOpWrap:(id)arg1;
- (id)finderMemberCenterOpWrap;
- (void)setFinderMemberCenterOpWrap:(id)arg1;
- (id)webSearchOpWrap;
- (void)setWebSearchOpWrap:(id)arg1;
- (id)finderShareItem;
- (void)setFinderShareItem:(id)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (unsigned int)voiceType;
- (void)setVoiceType:(unsigned int)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)rightCoverUrl;
- (void)setRightCoverUrl:(id)arg1;
- (id)textTitle;
- (void)setTextTitle:(id)arg1;
- (id)msgControlInfo;
- (void)setMsgControlInfo:(id)arg1;
- (BOOL)hasRedPacketCover;
- (void)setHasRedPacketCover:(BOOL)arg1;
- (unsigned int)opItemShowType;
- (void)setOpItemShowType:(unsigned int)arg1;
- (unsigned long long)m_index;
- (void)setM_index:(unsigned long long)arg1;
- (id)finderLiveData;
- (void)setFinderLiveData:(id)arg1;
- (int)is_top_msg;
- (void)setIs_top_msg:(int)arg1;
- (id)top_msg_content;
- (void)setTop_msg_content:(id)arg1;
- (id)productActivty;
- (void)setProductActivty:(id)arg1;
- (void).cxx_destruct;
@end

