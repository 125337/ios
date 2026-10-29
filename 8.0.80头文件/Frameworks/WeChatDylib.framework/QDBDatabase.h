@interface QDBDatabase : NSObject
{
    void * _db; // +0x8
    NSString * _databasePath; // +0x10
    BOOL _isExecutingStatement; // +0x18
    BOOL _logsErrors; // +0x19
    NSMutableSet * _openResultSets; // +0x20
    NSDateFormatter * _dateFormat; // +0x28
}
- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (id)databasePath;
- (const char *)sqlitePath;
- (void *)sqliteHandle;
- (BOOL)databaseExists;
- (BOOL)hasDateFormatter;
- (id)dateFromString:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (void)warnInUse;
- (id)errorWithMessage:(id)arg1;
- (int)lastErrorCode;
- (id)lastErrorMessage;
- (id)lastError;
- (BOOL)open;
- (BOOL)close;
- (void)resultSetDidClose:(id)arg1;
- (void)closeOpenResultSets;
- (id)executeQuery:(id)arg1;
- (id)executeQuery:(id)arg1 valist:(char *)arg2;
- (BOOL)executeUpdate:(id)arg1;
- (BOOL)executeUpdate:(id)arg1 error:(id *)arg2 valist:(char *)arg3;
- (void)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(sqlite3_stmt *)arg3;
- (void)extractSQL:(id)arg1 argumentsList:(char *)arg2 intoString:(id)arg3 arguments:(id)arg4;
- (id)dateFormat;
- (void)setDateFormat:(id)arg1;
- (void)setDatabasePath:(id)arg1;
- (void).cxx_destruct;
@end
