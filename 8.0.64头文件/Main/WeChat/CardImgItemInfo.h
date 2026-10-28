@interface CardImgItemInfo : NSObject <PBCoding, NSCoding>
{
    unsigned int _midSize; // +0x8
    unsigned int _thumbSize; // +0xc
    NSString * _url; // +0x10
    NSString * _aeskey; // +0x18
    NSString * _md5; // +0x20
    NSString * _fileId; // +0x28
}
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_aeskey;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_fileId;
+ (void)PBArrayAdd_midSize;
+ (void)PBArrayAdd_thumbSize;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (BOOL)checkIsValid;
- (id)getCardImageItemFileIdOrUrl;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)aeskey;
- (void)setAeskey:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (unsigned int)midSize;
- (void)setMidSize:(unsigned int)arg1;
- (unsigned int)thumbSize;
- (void)setThumbSize:(unsigned int)arg1;
- (void).cxx_destruct;
@end
