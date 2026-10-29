@interface WCTMigrationBaseInfo : NSObject
{
    NSString * _sourceTable; // +0x8
    NSString * _sourceDatabase; // +0x10
    Expression _filterCondition; // +0x18
    NSString * _table; // +0x178
}
- (id)initWithBaseInfo:(const void *)arg1;
- (id)table;
- (id)sourceTable;
- (Expression)filterCondition;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

