@interface TextStatePublishOfficialIconItem : NSObject
{
    TextStateIcon * _icon; // +0x8
    unsigned long long _descriptionLineNumber; // +0x10
    double _itemHeight; // +0x18
}
- (id)initWithIcon:(id)arg1;
- (void)updateItemHeight;
- (id)icon;
- (void)setIcon:(id)arg1;
- (unsigned long long)descriptionLineNumber;
- (void)setDescriptionLineNumber:(unsigned long long)arg1;
- (double)itemHeight;
- (void)setItemHeight:(double)arg1;
- (void).cxx_destruct;
@end
