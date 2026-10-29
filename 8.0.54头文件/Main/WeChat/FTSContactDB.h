@interface FTSContactDB : NSObject
{
    FTSDB * _database; // +0x8
}
- (BOOL)initDB:(id)arg1;
- (BOOL)dropAllIndex;
- (BOOL)existValidIndexOfContact:(id)arg1;
- (BOOL)existIndex;
- (unsigned int)getIndexCount;
- (BOOL)insertOrUpdateIndexForContacts:(id)arg1 updateCount:(unsigned int *)arg2 indexRecord:(id)arg3;
- (BOOL)deleteIndexForContacts:(id)arg1 indexRecord:(id)arg2;
- (BOOL)deleteIndexForUsername:(id)arg1 indexRecord:(id)arg2;
- (id)searchContact:(id)arg1 contactType:(int)arg2 withHelper:(id)arg3 andCancelBlock:(id /* block */)arg4;
- (void).cxx_destruct;
@end

