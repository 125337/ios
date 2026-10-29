@interface WeChatEmotionSectionInfo : MMObject
{
    unsigned long long _sectionType; // +0x8
    long long _numOfItems; // +0x10
    long long _scene; // +0x18
    NSString * _title; // +0x20
}
- (unsigned long long)sectionType;
- (void)setSectionType:(unsigned long long)arg1;
- (long long)numOfItems;
- (void)setNumOfItems:(long long)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end

