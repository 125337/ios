@interface CheckBoxImageBuilder : NSObject
{
    BOOL _isSelected; // +0x8
    BOOL _isEnable; // +0x9
    BOOL _isOverlay; // +0xa
    unsigned long long _imageIconViewSizeType; // +0x10
    UIImage * _CheckBoxImage; // +0x18
}
- (id)init;
- (id)mediumBoxBuilder;
- (id)smallBoxBuilder;
- (id /* block */)withEnable;
- (id /* block */)withOverlay;
- (id /* block */)withSelected;
- (id)standardImage;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isEnable;
- (void)setIsEnable:(BOOL)arg1;
- (unsigned long long)imageIconViewSizeType;
- (void)setImageIconViewSizeType:(unsigned long long)arg1;
- (BOOL)isOverlay;
- (void)setIsOverlay:(BOOL)arg1;
- (id)CheckBoxImage;
- (void)setCheckBoxImage:(id)arg1;
- (void).cxx_destruct;
@end

