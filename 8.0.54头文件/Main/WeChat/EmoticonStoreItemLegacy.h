@interface EmoticonStoreItemLegacy : MMObject <PBCoding>
{
    unsigned int packType; // +0x8
    unsigned int packFlag; // +0xc
    unsigned int boughtTime; // +0x10
    unsigned int version; // +0x14
    NSString * productID; // +0x18
    NSString * iconUrl; // +0x20
    NSString * packName; // +0x28
    NSString * packDesc; // +0x30
    NSString * packAuthInfo; // +0x38
    NSString * packPrice; // +0x40
    NSString * packThumb; // +0x48
    NSString * coverUrl; // +0x50
    NSString * packCopyright; // +0x58
    NSString * timeLimit; // +0x60
    NSString * introduce; // +0x68
    NSString * tagUrl; // +0x70
    NSString * shareDesc; // +0x78
    NSString * oldRedirectUrl; // +0x80
    PersonalDesigner * personalDesigner; // +0x88
    NSString * exptDesc; // +0x90
    unsigned long long weCoinNum; // +0x98
    unsigned long long packWeCoinPrice; // +0xa0
    EmotionLinkInfo * summaryLinkInfo; // +0xa8
    EmotionLinkInfo * detailLinkInfo; // +0xb0
    NSArray * _packEmojiInfoList; // +0xb8
    NSString * _designerIpsetKey; // +0xc0
    NSArray * _previewEmojiInfos; // +0xc8
}
+ (void)PBArrayAdd_productID;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_packName;
+ (void)PBArrayAdd_packDesc;
+ (void)PBArrayAdd_packAuthInfo;
+ (void)PBArrayAdd_packPrice;
+ (void)PBArrayAdd_packType;
+ (void)PBArrayAdd_packFlag;
+ (void)PBArrayAdd_packThumb;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_boughtTime;
+ (void)PBArrayAdd_packCopyright;
+ (void)PBArrayAdd_timeLimit;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_introduce;
+ (void)PBArrayAdd_tagUrl;
+ (void)PBArrayAdd_shareDesc;
+ (void)PBArrayAdd_oldRedirectUrl;
+ (void)PBArrayAdd_personalDesigner;
+ (void)PBArrayAdd_exptDesc;
+ (void)PBArrayAdd_packEmojiInfoList;
+ (void)PBArrayAdd_weCoinNum;
+ (void)PBArrayAdd_packWeCoinPrice;
+ (void)PBArrayAdd_previewEmojiInfos;
+ (void)PBArrayAdd_summaryLinkInfo;
+ (void)PBArrayAdd_detailLinkInfo;
+ (void)initialize;
+ (id)getItemCacheRootDir;
+ (id)getItemCachePath:(id)arg1;
+ (id)getMd5Pid:(id)arg1;
+ (id)loadItemFromCache:(id)arg1;
+ (void)removeLegacyCacheFor:(id)arg1;
- (id)getPBPropertyTable;
- (id)productID;
- (void)setProductID:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)packName;
- (void)setPackName:(id)arg1;
- (id)packDesc;
- (void)setPackDesc:(id)arg1;
- (id)packAuthInfo;
- (void)setPackAuthInfo:(id)arg1;
- (id)packPrice;
- (void)setPackPrice:(id)arg1;
- (unsigned int)packType;
- (void)setPackType:(unsigned int)arg1;
- (unsigned int)packFlag;
- (void)setPackFlag:(unsigned int)arg1;
- (id)packThumb;
- (void)setPackThumb:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (unsigned int)boughtTime;
- (void)setBoughtTime:(unsigned int)arg1;
- (id)packCopyright;
- (void)setPackCopyright:(id)arg1;
- (id)timeLimit;
- (void)setTimeLimit:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)introduce;
- (void)setIntroduce:(id)arg1;
- (id)tagUrl;
- (void)setTagUrl:(id)arg1;
- (id)shareDesc;
- (void)setShareDesc:(id)arg1;
- (id)oldRedirectUrl;
- (void)setOldRedirectUrl:(id)arg1;
- (id)personalDesigner;
- (void)setPersonalDesigner:(id)arg1;
- (id)exptDesc;
- (void)setExptDesc:(id)arg1;
- (unsigned long long)weCoinNum;
- (void)setWeCoinNum:(unsigned long long)arg1;
- (unsigned long long)packWeCoinPrice;
- (void)setPackWeCoinPrice:(unsigned long long)arg1;
- (id)summaryLinkInfo;
- (void)setSummaryLinkInfo:(id)arg1;
- (id)detailLinkInfo;
- (void)setDetailLinkInfo:(id)arg1;
- (id)packEmojiInfoList;
- (void)setPackEmojiInfoList:(id)arg1;
- (id)designerIpsetKey;
- (void)setDesignerIpsetKey:(id)arg1;
- (id)previewEmojiInfos;
- (void)setPreviewEmojiInfos:(id)arg1;
- (void).cxx_destruct;
@end

