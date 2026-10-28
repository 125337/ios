@interface ActionSheetItemInfo : NSObject
{
    unsigned int _itemType; // +0x8
    id _attachInfo; // +0x10
}
- (unsigned int)itemType;
- (void)setItemType:(unsigned int)arg1;
- (id)attachInfo;
- (void)setAttachInfo:(id)arg1;
- (void).cxx_destruct;
@end
