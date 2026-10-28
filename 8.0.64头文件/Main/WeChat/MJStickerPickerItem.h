@interface MJStickerPickerItem : NSObject
{
    BOOL _isLocal; // +0x8
    BOOL _isMultiSubtitlesSupported; // +0x9
    UIImage * _previewImage; // +0x10
    unsigned long long _type; // +0x18
    OMJMaterialInfo * _material; // +0x20
}
+ (unsigned long long)convertStickerItemTypeFrom:(unsigned long long)arg1;
+ (id)pingFangItemWithType:(unsigned long long)arg1;
+ (id)noneTextAnimItem;
+ (id)defaultTextAnimItem;
- (id)initWithMaterial:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithMaterial:(id)arg1 type:(unsigned long long)arg2 isLocal:(BOOL)arg3;
- (void)configWithExtraInfo:(id)arg1;
- (id)identifier;
- (id)previewImageURL;
- (id)materialName;
- (unsigned long long)type;
- (BOOL)isLocal;
- (id)previewImage;
- (void)setPreviewImage:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setIsLocal:(BOOL)arg1;
- (BOOL)isMultiSubtitlesSupported;
- (void)setIsMultiSubtitlesSupported:(BOOL)arg1;
- (id)material;
- (void)setMaterial:(id)arg1;
- (void).cxx_destruct;
@end
