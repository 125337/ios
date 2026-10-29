@interface WCFinderLocationSelectItem : NSObject
{
    WCLocationInfo * _locationInfo; // +0x8
    unsigned long long _itemType; // +0x10
}
+ (id)selectableLocationItemWithLocation:(id)arg1;
+ (id)selectOtherItem;
+ (id)emptyLocationItem;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (unsigned long long)itemType;
- (void)setItemType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
