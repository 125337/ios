@interface MMActiveMessageInfoPersist : NSObject
{
    WCTDatabase * _infoDB; // +0x8
}
+ (id)getPathOfInfoPath;
+ (id)getPathOfStatPath;
+ (id)getPathOfActiveMessageDB;
- (id)init;
- (void)closeAndRemoveDB;
- (id)p_getBrowseInfoTable;
- (void)p_createDataBaes;
- (void)addActiveMessageInfo:(id)arg1;
- (id)getAllActiveMessageInfo:(id)arg1 start:(unsigned int)arg2 end:(unsigned int)arg3;
- (id)infoDB;
- (void)setInfoDB:(id)arg1;
- (void).cxx_destruct;
@end

