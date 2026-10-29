@interface MPScreenshotContextInfo : NSObject <PBCoding>
{
    unsigned int _itemShowType; // +0x8
    unsigned int _idx; // +0xc
    NSString * _imageUUID; // +0x10
    NSString * _articleURL; // +0x18
    unsigned long long _timestamp; // +0x20
    unsigned long long _bizuin; // +0x28
    unsigned long long _mid; // +0x30
}
+ (void)PBArrayAdd_imageUUID;
+ (void)PBArrayAdd_articleURL;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_itemShowType;
+ (void)PBArrayAdd_bizuin;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_idx;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)articleInfo;
- (id)imageUUID;
- (void)setImageUUID:(id)arg1;
- (id)articleURL;
- (void)setArticleURL:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (unsigned long long)bizuin;
- (void)setBizuin:(unsigned long long)arg1;
- (unsigned long long)mid;
- (void)setMid:(unsigned long long)arg1;
- (unsigned int)idx;
- (void)setIdx:(unsigned int)arg1;
- (void).cxx_destruct;
@end
