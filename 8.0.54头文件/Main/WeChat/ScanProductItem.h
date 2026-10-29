@interface ScanProductItem : NSObject <NSCoding>
{
    int _type; // +0x8
    int _asyncFlag; // +0xc
    NSString * _productID; // +0x10
    NSString * _title; // +0x18
    NSString * _subtitle; // +0x20
    NSString * _source; // +0x28
    NSString * _headerBackgroundUrl; // +0x30
    NSString * _headerMask; // +0x38
    NSString * _certification; // +0x40
    NSString * _certificationUrl; // +0x48
    NSString * _detailUrl; // +0x50
    NSString * _thumbUrl; // +0x58
    NSString * _shareUrl; // +0x60
    NSString * _playUrl; // +0x68
    NSString * _feedBackUrl; // +0x70
    NSString * _introTitle; // +0x78
    NSString * _introLink; // +0x80
    NSMutableArray * _actionLists; // +0x88
    NSMutableArray * _detailList; // +0x90
    NSMutableArray * _bannerList; // +0x98
    NSString * _extInfo; // +0xa0
    NSString * _exposeUrl; // +0xa8
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toXml:(int)arg1;
- (id)productID;
- (void)setProductID:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)asyncFlag;
- (void)setAsyncFlag:(int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)source;
- (void)setSource:(id)arg1;
- (id)headerBackgroundUrl;
- (void)setHeaderBackgroundUrl:(id)arg1;
- (id)headerMask;
- (void)setHeaderMask:(id)arg1;
- (id)certification;
- (void)setCertification:(id)arg1;
- (id)certificationUrl;
- (void)setCertificationUrl:(id)arg1;
- (id)detailUrl;
- (void)setDetailUrl:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)shareUrl;
- (void)setShareUrl:(id)arg1;
- (id)playUrl;
- (void)setPlayUrl:(id)arg1;
- (id)feedBackUrl;
- (void)setFeedBackUrl:(id)arg1;
- (id)introTitle;
- (void)setIntroTitle:(id)arg1;
- (id)introLink;
- (void)setIntroLink:(id)arg1;
- (id)actionLists;
- (void)setActionLists:(id)arg1;
- (id)detailList;
- (void)setDetailList:(id)arg1;
- (id)bannerList;
- (void)setBannerList:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)exposeUrl;
- (void)setExposeUrl:(id)arg1;
- (void).cxx_destruct;
@end

