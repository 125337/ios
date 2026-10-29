@interface EcsGiftMsgRecordDataBase : NSObject
{
     database; // +0x8
     table; // +0x10
}
+ (id)instance;
- (id)init;
- (void)insert:(id)arg1 msgLocalId:(long long)arg2 userName:(id)arg3 hasMsgClicked:(long long)arg4;
- (unsigned int)getMsgLocalId:(id)arg1;
- (id)getUserName:(id)arg1;
- (void)delete:(id)arg1;
- (long long)getHasMsgClicked:(id)arg1;
- (BOOL)recordExist:(id)arg1;
- (void).cxx_destruct;
@end

