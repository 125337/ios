@interface GameReportOrderItem : MMObject
{
    int _order; // +0x8
    id _value; // +0x10
}
+ (id)itemWithOrder:(unsigned int)arg1 AndValue:(id)arg2;
- (int)order;
- (void)setOrder:(int)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void).cxx_destruct;
@end

