@interface MMLiveCastMoreViewItem : MMLiveCastViewItem
{
    BOOL _isSelectable; // +0x8
    NSString * _richTextTitle; // +0x10
    unsigned long long _itemStatus; // +0x18
}
- (void)updateStatusAsLoading;
- (void)updateStatusAsUndergroundLoading;
- (void)updateStatusAsDevicesFound;
- (void)updateStatusAsDevicesNotFound;
- (void)didSelect;
- (id)richTextTitle;
- (void)setRichTextTitle:(id)arg1;
- (BOOL)isSelectable;
- (void)setIsSelectable:(BOOL)arg1;
- (unsigned long long)itemStatus;
- (void)setItemStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

