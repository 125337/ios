@interface WCAdRandomPickCardItemsInfo : NSObject <NSCoding>
{
    NSString * _titleColorAvailable; // +0x8
    NSString * _titleColorAvailableDark; // +0x10
    NSString * _titleColorPicked; // +0x18
    NSString * _titleColorPickedDark; // +0x20
    NSString * _backgroundImageUrl; // +0x28
    NSArray * _cardItems; // +0x30
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)titleColorAvailable;
- (void)setTitleColorAvailable:(id)arg1;
- (id)titleColorAvailableDark;
- (void)setTitleColorAvailableDark:(id)arg1;
- (id)titleColorPicked;
- (void)setTitleColorPicked:(id)arg1;
- (id)titleColorPickedDark;
- (void)setTitleColorPickedDark:(id)arg1;
- (id)backgroundImageUrl;
- (void)setBackgroundImageUrl:(id)arg1;
- (id)cardItems;
- (void)setCardItems:(id)arg1;
- (void).cxx_destruct;
@end
