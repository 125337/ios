@interface WAReportItemParamChainModel : MMObject
{
    WAReportBaseItem * _item; // +0x8
}
- (id)initWithItem:(id)arg1;
- (id)reset;
- (id)toString;
- (id /* block */)appendString;
- (id /* block */)appendUInt32;
- (id /* block */)appendUInt64;
- (id /* block */)appendInt;
- (id /* block */)appendUInteger;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end
