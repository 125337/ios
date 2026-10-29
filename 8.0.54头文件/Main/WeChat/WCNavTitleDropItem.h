@interface WCNavTitleDropItem : NSObject
{
    BOOL _isSelected; // +0x8
    unsigned long long _dataType; // +0x10
    UIImage * _image; // +0x18
    NSString * _title; // +0x20
}
- (unsigned long long)dataType;
- (void)setDataType:(unsigned long long)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end

