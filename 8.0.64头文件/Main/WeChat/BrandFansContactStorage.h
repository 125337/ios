@interface BrandFansContactStorage : NSObject
{
    NSCache * _cache; // +0x8
    WCTDatabase * _database; // +0x10
    WCTTable * _contactTable; // +0x18
}
+ (id)dbPathForUserDocumentPath:(id)arg1;
- (id)initDBWithUserDocumentPath:(id)arg1;
- (void)setupDBWithPath:(id)arg1;
- (void)setupTable;
- (id)getContact:(id)arg1;
- (void)deleteContact:(id)arg1;
- (void)addBasicContact:(id)arg1;
- (void)addContact:(id)arg1;
- (id)cache;
- (void)setCache:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)contactTable;
- (void)setContactTable:(id)arg1;
- (void).cxx_destruct;
@end
