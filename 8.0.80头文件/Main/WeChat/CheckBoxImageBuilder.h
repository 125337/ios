@interface CheckBoxImageBuilder : NSObject
{
    BOOL _isSelected; // +0x8
    BOOL _isEnable; // +0x9
    BOOL _isOverlay; // +0xa
    unsigned long long _imageIconViewSizeType; // +0x10
    UIColor * _tintColor; // +0x18
    UIColor * _bgColor; // +0x20
}
- (id)init;
- (id)mediumBoxBuilder;
- (id)smallBoxBuilder;
- (id)miniBoxBuilder;
- (id /* block */)withEnable;
- (id /* block */)withOverlay;
- (id /* block */)withSelected;
- (id /* block */)withTintColor;
- (id /* block */)withBgColor;
- (id)standardImage;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isEnable;
- (void)setIsEnable:(BOOL)arg1;
- (unsigned long long)imageIconViewSizeType;
- (void)setImageIconViewSizeType:(unsigned long long)arg1;
- (BOOL)isOverlay;
- (void)setIsOverlay:(BOOL)arg1;
- (id)tintColor;
- (void)setTintColor:(id)arg1;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (void).cxx_destruct;
@end
