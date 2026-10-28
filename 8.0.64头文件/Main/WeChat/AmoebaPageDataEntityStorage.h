@interface AmoebaPageDataEntityStorage : NSObject
{
    NSMutableDictionary * m_pageDataMap; // +0x8
}
- (id)init;
- (void)save:(id)arg1 withEntity:(id)arg2;
- (id)get:(id)arg1;
- (void)clear:(id)arg1;
- (void)clear:(unsigned long long)arg1 pageName:(id)arg2;
- (id)getAll;
- (void).cxx_destruct;
@end
