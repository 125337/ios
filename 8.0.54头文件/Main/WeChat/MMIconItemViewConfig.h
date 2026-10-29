@interface MMIconItemViewConfig : NSObject
{
    BOOL _changeIconColorOnAppearanceChange; // +0x8
    NSString * _title; // +0x10
    NSURL * _imageUrl; // +0x18
    id <MMIconItemDelegate> _delegate; // +0x20
    UIImage * _image; // +0x28
    NSString * _uniqueId; // +0x30
    double _iconLength; // +0x38
    double _bgLength; // +0x40
    double _bgCornerRadius; // +0x48
    double _iconLabelPadding; // +0x50
    NSString * _type; // +0x58
    id <MMIconItemConfigDelegate> _configDelegate; // +0x60
}
- (id)init;
- (void)setBgLength:(double)arg1;
- (void)setIconLabelPadding:(double)arg1;
- (void)setIconLength:(double)arg1;
- (void)setBgCornerRadius:(double)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (double)iconLength;
- (double)bgLength;
- (double)bgCornerRadius;
- (double)iconLabelPadding;
- (id)type;
- (void)setType:(id)arg1;
- (BOOL)changeIconColorOnAppearanceChange;
- (void)setChangeIconColorOnAppearanceChange:(BOOL)arg1;
- (id)configDelegate;
- (void)setConfigDelegate:(id)arg1;
- (void).cxx_destruct;
@end

