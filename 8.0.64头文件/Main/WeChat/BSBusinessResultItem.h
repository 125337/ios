@interface BSBusinessResultItem : NSObject
{
    unsigned int _type; // +0x8
    unsigned long long _docId; // +0x10
    BSBusinessContactItem * _contactItem; // +0x18
    BSBusinessCommonItem * _commonItem; // +0x20
    BSBusinessProductItem * _productItem; // +0x28
}
+ (id)fromServerObj:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned long long)docId;
- (void)setDocId:(unsigned long long)arg1;
- (id)contactItem;
- (void)setContactItem:(id)arg1;
- (id)commonItem;
- (void)setCommonItem:(id)arg1;
- (id)productItem;
- (void)setProductItem:(id)arg1;
- (void).cxx_destruct;
@end
