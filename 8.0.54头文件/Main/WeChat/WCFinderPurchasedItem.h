@interface WCFinderPurchasedItem : NSObject
{
    WCFinderDataItem * _dataItem; // +0x8
    FinderMixObject * _mixObject; // +0x10
}
+ (id)itemWith:(id)arg1;
- (int)type;
- (id)dataItem;
- (id)ecObject;
- (id)validItem;
- (BOOL)isValid;
- (id)itemId;
- (void)setDataItem:(id)arg1;
- (id)mixObject;
- (void)setMixObject:(id)arg1;
- (void).cxx_destruct;
@end

