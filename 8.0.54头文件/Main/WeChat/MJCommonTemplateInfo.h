@interface MJCommonTemplateInfo : NSObject <PBCoding, NSCopying>
{
    NSString * _title; // +0x8
    unsigned long long _usageCount; // +0x10
    NSString * _tplMessage; // +0x18
    NSString * _previewCovelUrl; // +0x20
    NSString * _previewCoverFileMd5; // +0x28
    NSString * _previewVideo_Url; // +0x30
    NSString * _previewWxamUrl; // +0x38
    NSString * _previewWxamFileMd5; // +0x40
    NSString * _previewGifUrl; // +0x48
    NSString * _previewGifFileMd5; // +0x50
    NSString * _tmplDescUrl; // +0x58
    NSString * _tmplDescFileMd5; // +0x60
    unsigned long long _tmplDescVersion; // +0x68
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_usageCount;
+ (void)PBArrayAdd_tplMessage;
+ (void)PBArrayAdd_previewCovelUrl;
+ (void)PBArrayAdd_previewVideo_Url;
+ (void)PBArrayAdd_tmplDescUrl;
+ (void)PBArrayAdd_tmplDescVersion;
+ (void)PBArrayAdd_previewWxamUrl;
+ (void)PBArrayAdd_previewGifUrl;
+ (void)PBArrayAdd_previewCoverFileMd5;
+ (void)PBArrayAdd_previewWxamFileMd5;
+ (void)PBArrayAdd_previewGifFileMd5;
+ (void)PBArrayAdd_tmplDescFileMd5;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithCommonTemplateInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned long long)usageCount;
- (void)setUsageCount:(unsigned long long)arg1;
- (id)tplMessage;
- (void)setTplMessage:(id)arg1;
- (id)previewCovelUrl;
- (void)setPreviewCovelUrl:(id)arg1;
- (id)previewCoverFileMd5;
- (void)setPreviewCoverFileMd5:(id)arg1;
- (id)previewVideo_Url;
- (void)setPreviewVideo_Url:(id)arg1;
- (id)previewWxamUrl;
- (void)setPreviewWxamUrl:(id)arg1;
- (id)previewWxamFileMd5;
- (void)setPreviewWxamFileMd5:(id)arg1;
- (id)previewGifUrl;
- (void)setPreviewGifUrl:(id)arg1;
- (id)previewGifFileMd5;
- (void)setPreviewGifFileMd5:(id)arg1;
- (id)tmplDescUrl;
- (void)setTmplDescUrl:(id)arg1;
- (id)tmplDescFileMd5;
- (void)setTmplDescFileMd5:(id)arg1;
- (unsigned long long)tmplDescVersion;
- (void)setTmplDescVersion:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

