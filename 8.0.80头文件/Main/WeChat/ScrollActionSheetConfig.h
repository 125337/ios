@interface ScrollActionSheetConfig : NSObject
{
    id <MMScrollActionSheetDelegate> _delegate; // +0x8
    NSMutableArray * _itemTypes; // +0x10
}
- (id)init;
- (id)initWithDelegate:(id)arg1 itemTypes:(id)arg2;
- (void)addItemType:(int)arg1;
- (void)addItemTypes:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)itemTypes;
- (void)setItemTypes:(id)arg1;
- (void).cxx_destruct;
@end
