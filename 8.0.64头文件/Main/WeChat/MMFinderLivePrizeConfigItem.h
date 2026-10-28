@interface MMFinderLivePrizeConfigItem : NSObject
{
    BOOL _statusDisable; // +0x8
    BOOL _isSelect; // +0x9
    BOOL _isFromStaterVC; // +0xa
    BOOL _isLotteryRunning; // +0xb
    unsigned int _status; // +0xc
    unsigned int _itemId; // +0x10
    unsigned int _type; // +0x14
    unsigned int _opType; // +0x18
    NSString * _icon; // +0x20
    UIColor * _iconColor; // +0x28
    NSString * _title; // +0x30
    NSString * _titleStatusWording; // +0x38
    NSString * _goodsTitle; // +0x40
    NSString * _goodsDes; // +0x48
    NSString * _statusWording; // +0x50
    FinderLiveLotteryMethodItem * _lotteryItem; // +0x58
    FinderLiveGiftMethodItem * _giftItem; // +0x60
    NSMutableArray * _textArray; // +0x68
    double _cellHeight; // +0x70
    double _cellMargin; // +0x78
    double _cellCorner; // +0x80
    double _iconWidth; // +0x88
    double _iconHeight; // +0x90
    double _headerTitleMargin; // +0x98
    double _contentBizCustomHeight; // +0xa0
    double _contentBizCustomMargin; // +0xa8
    double _textHeight; // +0xb0
    double _textMargin; // +0xb8
    double _textGap; // +0xc0
    double _headerHeight; // +0xc8
    double _footerHeight; // +0xd0
    double _footerTop; // +0xd8
    double _bizTitleLeft; // +0xe0
    double _bizTitleHeight; // +0xe8
    double _descTop; // +0xf0
    UIColor * _prizeStateLabelColor; // +0xf8
    MMFinderLiveTaskId * _liveTaskId; // +0x100
    unsigned long long _objectId; // +0x108
}
+ (id)getPrizeConfigTextItemWithTitle:(id)arg1 detail:(id)arg2;
- (id)initWithPrizeConfigItem:(id)arg1 isFromStaterVC:(BOOL)arg2 isLotteryRunning:(BOOL)arg3;
- (id)initWithFinderLiveLotteryMethodItem:(id)arg1 opType:(unsigned int)arg2 liveTaskId:(id)arg3 objectId:(unsigned long long)arg4;
- (void)updateLotteryMethodItem:(id)arg1;
- (void)updateCellData;
- (BOOL)judgeStatusDisable;
- (BOOL)judgeStatusDetail;
- (void)updateTextArray;
- (void)updateHeaderDetail;
- (id)textArray;
- (BOOL)isGiftPrizeType;
- (BOOL)isLotteryPrizeType;
- (BOOL)isLotteryPrizeCustom;
- (BOOL)isLotteryPrizeGift;
- (BOOL)isLotteryPrizeShopProduct;
- (BOOL)isLotteryPrizeGameTeamUp;
- (BOOL)canShowFooterView;
- (BOOL)isCurrentDisplay;
- (id)originConfigItem;
- (id)description;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)iconColor;
- (void)setIconColor:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleStatusWording;
- (void)setTitleStatusWording:(id)arg1;
- (id)goodsTitle;
- (void)setGoodsTitle:(id)arg1;
- (id)goodsDes;
- (void)setGoodsDes:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (id)statusWording;
- (void)setStatusWording:(id)arg1;
- (BOOL)statusDisable;
- (void)setStatusDisable:(BOOL)arg1;
- (BOOL)isSelect;
- (void)setIsSelect:(BOOL)arg1;
- (BOOL)isFromStaterVC;
- (void)setIsFromStaterVC:(BOOL)arg1;
- (BOOL)isLotteryRunning;
- (void)setIsLotteryRunning:(BOOL)arg1;
- (unsigned int)itemId;
- (void)setItemId:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)lotteryItem;
- (void)setLotteryItem:(id)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (void)setTextArray:(id)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (double)cellMargin;
- (void)setCellMargin:(double)arg1;
- (double)cellCorner;
- (void)setCellCorner:(double)arg1;
- (double)iconWidth;
- (void)setIconWidth:(double)arg1;
- (double)iconHeight;
- (void)setIconHeight:(double)arg1;
- (double)headerTitleMargin;
- (void)setHeaderTitleMargin:(double)arg1;
- (double)contentBizCustomHeight;
- (void)setContentBizCustomHeight:(double)arg1;
- (double)contentBizCustomMargin;
- (void)setContentBizCustomMargin:(double)arg1;
- (double)textHeight;
- (void)setTextHeight:(double)arg1;
- (double)textMargin;
- (void)setTextMargin:(double)arg1;
- (double)textGap;
- (void)setTextGap:(double)arg1;
- (double)headerHeight;
- (void)setHeaderHeight:(double)arg1;
- (double)footerHeight;
- (void)setFooterHeight:(double)arg1;
- (double)footerTop;
- (void)setFooterTop:(double)arg1;
- (double)bizTitleLeft;
- (void)setBizTitleLeft:(double)arg1;
- (double)bizTitleHeight;
- (void)setBizTitleHeight:(double)arg1;
- (double)descTop;
- (void)setDescTop:(double)arg1;
- (id)prizeStateLabelColor;
- (void)setPrizeStateLabelColor:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
