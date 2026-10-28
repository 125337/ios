@interface WCTPreparedStatement : NSObject
{
    void * _handleStatement; // +0x8
}
- (id)initWithHandleStatement:(void *)arg1;
- (void *)getRawHandleStatement;
- (BOOL)step;
- (void)reset;
- (void)clearBindings;
- (BOOL)done;
- (BOOL)isStatementReadonly;
- (void)bindInteger:(const long long *)arg1 toIndex:(int)arg2;
- (void)bindDouble:(const double *)arg1 toIndex:(int)arg2;
- (void)bindNullToIndex:(int)arg1;
- (void)bindString:(id)arg1 toIndex:(int)arg2;
- (void)bindData:(id)arg1 toIndex:(int)arg2;
- (void)bindNumber:(id)arg1 toIndex:(int)arg2;
- (void)bindValue:(id)arg1 toIndex:(int)arg2;
- (void)bindProperty:(const void *)arg1 ofObject:(id)arg2 toIndex:(int)arg3;
- (void)bindProperties:(const void *)arg1 ofObject:(id)arg2;
- (int)bindParameterIndex:(const void *)arg1;
- (long long)extractIntegerAtIndex:(int)arg1;
- (double)extractDoubleAtIndex:(int)arg1;
- (id)extractStringAtIndex:(int)arg1;
- (id)extractNumberAtIndex:(int)arg1;
- (id)extractDataAtIndex:(int)arg1;
- (id)extractValueAtIndex:(int)arg1;
- (unsigned long long)extractTypeAtIndex:(int)arg1;
- (int)extractNumberOfColumns;
- (id)extractOriginColumnNameAtIndex:(int)arg1;
- (id)extractColumnNameAtIndex:(int)arg1;
- (id)extractTableNameAtIndex:(int)arg1;
- (id)extractRow;
- (id)extractObjectOnResultColumns:(const void *)arg1;
- (id)extractMultiObjectOnResultColumns:(const void *)arg1;
- (void)extractValueAtIndex:(int)arg1 toProperty:(const void *)arg2 ofObject:(id)arg3;
- (void)extractValueAtIndex:(int)arg1 toColumnBindingHolder:(const void *)arg2 ofObject:(id)arg3;
- (id)allValues;
- (id)allValuesAtIndex:(int)arg1;
- (id)allRows;
- (id)allObjectsOnResultColumns:(const void *)arg1;
- (id)allMultiObjectsOnResultColumns:(const void *)arg1;
@end
