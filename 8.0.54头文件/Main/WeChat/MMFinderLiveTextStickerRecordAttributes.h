@interface MMFinderLiveTextStickerRecordAttributes : MMFinderLiveStickerRecordAttributesBase
{
    NSString * _text; // +0x8
    double _colorR; // +0x10
    double _colorG; // +0x18
    double _colorB; // +0x20
    double _colorA; // +0x28
    unsigned long long _style; // +0x30
    unsigned long long _templateType; // +0x38
    NSString * _templateThumbnail; // +0x40
    NSString * _templateResourceId; // +0x48
    NSString * _templateResourceUri; // +0x50
    NSString * _templateResourceMd5Hash; // +0x58
    NSString * _templateUnextractedResourcePath; // +0x60
    NSString * _templateExtractedResourcePath; // +0x68
}
+ (id)stickerRecordAttributesFromItem:(id)arg1;
- (id)initWithStickerItem:(id)arg1;
- (id)stickerItemFromRecordAttributes;
- (id)text;
- (void)setText:(id)arg1;
- (double)colorR;
- (void)setColorR:(double)arg1;
- (double)colorG;
- (void)setColorG:(double)arg1;
- (double)colorB;
- (void)setColorB:(double)arg1;
- (double)colorA;
- (void)setColorA:(double)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)templateType;
- (void)setTemplateType:(unsigned long long)arg1;
- (id)templateThumbnail;
- (void)setTemplateThumbnail:(id)arg1;
- (id)templateResourceId;
- (void)setTemplateResourceId:(id)arg1;
- (id)templateResourceUri;
- (void)setTemplateResourceUri:(id)arg1;
- (id)templateResourceMd5Hash;
- (void)setTemplateResourceMd5Hash:(id)arg1;
- (id)templateUnextractedResourcePath;
- (void)setTemplateUnextractedResourcePath:(id)arg1;
- (id)templateExtractedResourcePath;
- (void)setTemplateExtractedResourcePath:(id)arg1;
- (void).cxx_destruct;
@end

