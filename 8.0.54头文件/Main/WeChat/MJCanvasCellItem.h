@interface MJCanvasCellItem : NSObject
{
    BOOL _isSelected; // +0x8
    NSString * _title; // +0x10
    NSString * _iconName; // +0x18
    OMJAspectRatio * _aspectRatio; // +0x20
}
- (id)initWithTitle:(id)arg1 iconName:(id)arg2 aspectRatio:(id)arg3;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (id)aspectRatio;
- (void)setAspectRatio:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end

