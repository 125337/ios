@interface EmojiInfoObj : MMObject <PBCoding, NSCopying>
{
    BOOL _disableExtern; // +0x8
    NSString * _md5; // +0x10
    NSString * _url; // +0x18
    NSString * _thumbUrl; // +0x20
    NSString * _designerId; // +0x28
    NSString * _encryptUrl; // +0x30
    NSString * _aesKey; // +0x38
    NSString * _productId; // +0x40
    NSString * _externUrl; // +0x48
    NSString * _externMd5; // +0x50
    NSString * _activityId; // +0x58
    NSString * _attachedText; // +0x60
    NSString * _attachedTextColor; // +0x68
    NSString * _lensId; // +0x70
    NSString * _emojiAttr; // +0x78
    NSString * _linkId; // +0x80
    NSString * _storeMeaning; // +0x88
    EmojiStatisticsInfo * _staticsInfo; // +0x90
    NSString * _tpUrlString; // +0x98
    NSString * _authkey; // +0xa0
    CGSize _wxamImageSizeToCheck; // +0xa8
}
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_designerId;
+ (void)PBArrayAdd_encryptUrl;
+ (void)PBArrayAdd_aesKey;
+ (void)PBArrayAdd_productId;
+ (void)PBArrayAdd_externUrl;
+ (void)PBArrayAdd_attachedText;
+ (void)PBArrayAdd_externMd5;
+ (void)PBArrayAdd_activityId;
+ (void)PBArrayAdd_attachedTextColor;
+ (void)PBArrayAdd_lensId;
+ (void)PBArrayAdd_linkId;
+ (void)PBArrayAdd_storeMeaning;
+ (void)PBArrayAdd_emojiAttr;
+ (void)PBArrayAdd_staticsInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)emojiInfo;
- (id)initWithEmojiInfo:(id)arg1;
- (void)copyDownloadInfoFromMsg:(id)arg1;
- (id)description;
- (BOOL)isStoreEmoticon;
- (BOOL)hasWxAMDownloadInfo;
- (BOOL)hasEncryptDownloadInfo;
- (BOOL)canCdnDownload;
- (BOOL)hasTpDownloadInfo;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)designerId;
- (void)setDesignerId:(id)arg1;
- (id)encryptUrl;
- (void)setEncryptUrl:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)externUrl;
- (void)setExternUrl:(id)arg1;
- (id)externMd5;
- (void)setExternMd5:(id)arg1;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (id)attachedText;
- (void)setAttachedText:(id)arg1;
- (id)attachedTextColor;
- (void)setAttachedTextColor:(id)arg1;
- (id)lensId;
- (void)setLensId:(id)arg1;
- (id)emojiAttr;
- (void)setEmojiAttr:(id)arg1;
- (id)linkId;
- (void)setLinkId:(id)arg1;
- (id)storeMeaning;
- (void)setStoreMeaning:(id)arg1;
- (id)staticsInfo;
- (void)setStaticsInfo:(id)arg1;
- (BOOL)disableExtern;
- (void)setDisableExtern:(BOOL)arg1;
- (id)tpUrlString;
- (void)setTpUrlString:(id)arg1;
- (id)authkey;
- (void)setAuthkey:(id)arg1;
- (CGSize)wxamImageSizeToCheck;
- (void)setWxamImageSizeToCheck:(CGSize)arg1;
- (void).cxx_destruct;
@end

