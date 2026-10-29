@interface WCFinderLiveAggregationCard : NSObject
{
    unsigned int _cardMode; // +0x8
    unsigned int _cardBackgroundMode; // +0xc
    unsigned int _cardType; // +0x10
    unsigned int _playTogetherLiveType; // +0x14
    unsigned int _groupRefreshTimeIntervalMs; // +0x18
    NSString * _cardId; // +0x20
    NSMutableArray * _cardBackgroundColor; // +0x28
    NSString * _cardBackgroundImgUrl; // +0x30
    NSString * _themeText; // +0x38
    NSString * _themeImgUrl; // +0x40
    NSMutableArray * _themeTextColor; // +0x48
    NSString * _themeId; // +0x50
    NSMutableArray * _object; // +0x58
    NSMutableArray * _liveBackgroundColor; // +0x60
    FinderThemeLiveStreamAppearance * _themeAppearance; // +0x68
    NSString * _themeSubText; // +0x70
    NSMutableArray * _themeSubTextColor; // +0x78
    NSData * _cardBuffer; // +0x80
    NSMutableArray * _anchorGroup; // +0x88
    NSMutableArray * _productGroup; // +0x90
    FinderLiveAggregationCardButton * _button; // +0x98
    FinderLiveAggregationCardBulletMsgList * _bulletMsgList; // +0xa0
    FinderThemeLiveStreamPreLoadConfig * _themePreloadConfig; // +0xa8
    FinderJumpInfo * _jumpInfo; // +0xb0
}
+ (id)finderLiveStreamAggregationCardFrom:(id)arg1;
- (id)toFinderLiveStreamAggregationCard;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (unsigned int)cardMode;
- (void)setCardMode:(unsigned int)arg1;
- (unsigned int)cardBackgroundMode;
- (void)setCardBackgroundMode:(unsigned int)arg1;
- (id)cardBackgroundColor;
- (void)setCardBackgroundColor:(id)arg1;
- (id)cardBackgroundImgUrl;
- (void)setCardBackgroundImgUrl:(id)arg1;
- (id)themeText;
- (void)setThemeText:(id)arg1;
- (id)themeImgUrl;
- (void)setThemeImgUrl:(id)arg1;
- (id)themeTextColor;
- (void)setThemeTextColor:(id)arg1;
- (id)themeId;
- (void)setThemeId:(id)arg1;
- (id)object;
- (void)setObject:(id)arg1;
- (id)liveBackgroundColor;
- (void)setLiveBackgroundColor:(id)arg1;
- (id)themeAppearance;
- (void)setThemeAppearance:(id)arg1;
- (id)themeSubText;
- (void)setThemeSubText:(id)arg1;
- (id)themeSubTextColor;
- (void)setThemeSubTextColor:(id)arg1;
- (id)cardBuffer;
- (void)setCardBuffer:(id)arg1;
- (id)anchorGroup;
- (void)setAnchorGroup:(id)arg1;
- (id)productGroup;
- (void)setProductGroup:(id)arg1;
- (unsigned int)cardType;
- (void)setCardType:(unsigned int)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)bulletMsgList;
- (void)setBulletMsgList:(id)arg1;
- (unsigned int)playTogetherLiveType;
- (void)setPlayTogetherLiveType:(unsigned int)arg1;
- (id)themePreloadConfig;
- (void)setThemePreloadConfig:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (unsigned int)groupRefreshTimeIntervalMs;
- (void)setGroupRefreshTimeIntervalMs:(unsigned int)arg1;
- (void).cxx_destruct;
@end

