@interface QBBeaconSqlitePersistHandler : NSObject
{
    BOOL isGetfilesuccess; // +0x8
}
+ (id)getDefaultHandler;
- (id)init;
- (BOOL)saveObjects:(id)arg1 key:(id)arg2;
- (BOOL)deleteObjects;
- (BOOL)saveObject:(id)arg1 key:(id)arg2;
- (BOOL)deleteObjectWithKey:(id)arg1;
- (id)getObject:(id)arg1;
- (BOOL)isGetfilesuccess;
- (void)setIsGetfilesuccess:(BOOL)arg1;
@end

