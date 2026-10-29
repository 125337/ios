@interface CameraScanGoodsItemExchangeInfo : NSObject
{
    BOOL _needPoi; // +0x8
    NSString * _title; // +0x10
    long long _itemStatus; // +0x18
    long long _itemCategoryId; // +0x20
}
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)itemStatus;
- (void)setItemStatus:(long long)arg1;
- (long long)itemCategoryId;
- (void)setItemCategoryId:(long long)arg1;
- (BOOL)needPoi;
- (void)setNeedPoi:(BOOL)arg1;
- (void).cxx_destruct;
@end

