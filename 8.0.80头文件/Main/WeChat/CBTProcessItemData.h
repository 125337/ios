@interface CBTProcessItemData : NSObject
{
    long long _itemType; // +0x8
    NSString * _content; // +0x10
}
- (long long)itemType;
- (void)setItemType:(long long)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end
