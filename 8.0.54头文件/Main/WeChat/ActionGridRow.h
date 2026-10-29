@interface ActionGridRow : NSObject <NSCoding>
{
    NSArray * _rowItemList; // +0x8
    NSString * _title; // +0x10
}
- (id)toXml;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)rowItemList;
- (void)setRowItemList:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end

