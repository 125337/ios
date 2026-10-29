@interface WCSnsLikeEasterEggInfo : NSObject <NSCoding, PBCoding>
{
    BOOL _isLikeEmoji; // +0x8
    long long _type; // +0x10
    NSString * _emojiText; // +0x18
    NSString * _md5; // +0x20
    NSString * _cdnUrl; // +0x28
    NSString * _thumbUrl; // +0x30
    NSString * _encryptUrl; // +0x38
    NSString * _aesKey; // +0x40
    NSString * _externUrl; // +0x48
    NSString * _externMd5; // +0x50
    NSString * _productID; // +0x58
    NSString * _designerID; // +0x60
    long long _width; // +0x68
    long long _height; // +0x70
}
+ (id)infoWithEmoticonWrap:(id)arg1;
+ (id)infoWithEmojiText:(id)arg1;
+ (void)completeDownloadUrlsIfNeeded:(id)arg1;
+ (id)urlCacheKeyForMd5:(id)arg1;
+ (void)saveUrlCacheWithObj:(id)arg1;
+ (void)applyUrlFieldsFromObj:(id)arg1 toInfo:(id)arg2;
+ (void)preloadEmoticonWithInfo:(id)arg1;
+ (void)preloadEasterEggResourcesWithDataItem:(id)arg1;
+ (void)reportSnsFeedLikeWithLike:(BOOL)arg1 dataItem:(id)arg2 triggeredEgg:(BOOL)arg3 pageScene:(long long)arg4 fromPage:(long long)arg5;
+ (BOOL)canPlayLikeEasterEggWithDataItem:(id)arg1;
+ (id)displayEasterEggInfoForDataItem:(id)arg1;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_emojiText;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_cdnUrl;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_encryptUrl;
+ (void)PBArrayAdd_aesKey;
+ (void)PBArrayAdd_externUrl;
+ (void)PBArrayAdd_externMd5;
+ (void)PBArrayAdd_productID;
+ (void)PBArrayAdd_designerID;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_isLikeEmoji;
+ (void)initialize;
+ (id)fromXMLParentNode:(XmlReaderNode_t *)arg1;
- (id)toEmojiInfoObj;
- (id)toEmoticonWrap;
- (id)getPBPropertyTable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)toXML;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)emojiText;
- (void)setEmojiText:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)encryptUrl;
- (void)setEncryptUrl:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)externUrl;
- (void)setExternUrl:(id)arg1;
- (id)externMd5;
- (void)setExternMd5:(id)arg1;
- (id)productID;
- (void)setProductID:(id)arg1;
- (id)designerID;
- (void)setDesignerID:(id)arg1;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (BOOL)isLikeEmoji;
- (void)setIsLikeEmoji:(BOOL)arg1;
- (void).cxx_destruct;
@end
