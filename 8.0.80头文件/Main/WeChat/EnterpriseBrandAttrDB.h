@interface EnterpriseBrandAttrDB : NSObject
{
    WCTDatabase * _db; // +0x8
    WCTTable * _table; // +0x10
}
- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (void)closeDB;
- (id)getAttrByUserName:(id)arg1;
- (BOOL)deleteAttrByUserName:(id)arg1;
- (BOOL)setAttr:(id)arg1 onProperties:(const void *)arg2;
- (void).cxx_destruct;
@end
