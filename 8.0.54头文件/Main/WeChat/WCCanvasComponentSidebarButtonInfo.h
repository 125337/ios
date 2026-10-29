@interface WCCanvasComponentSidebarButtonInfo : MMObject <NSCoding>
{
    NSString * _imageUrl; // +0x8
    NSString * _wording; // +0x10
    WCCanvasComponentItem * _buttonItem; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)buttonItem;
- (void)setButtonItem:(id)arg1;
- (void).cxx_destruct;
@end

