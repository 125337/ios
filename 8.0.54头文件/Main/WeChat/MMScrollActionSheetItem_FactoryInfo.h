@interface MMScrollActionSheetItem_FactoryInfo : NSObject
{
    int _itemType; // +0x8
    int _position; // +0xc
    NSString * _title; // +0x10
    UIImage * _iconImg; // +0x18
}
- (int)itemType;
- (void)setItemType:(int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconImg;
- (void)setIconImg:(id)arg1;
- (int)position;
- (void)setPosition:(int)arg1;
- (void).cxx_destruct;
@end

