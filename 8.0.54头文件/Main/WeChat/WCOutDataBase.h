@interface WCOutDataBase : MMObject
{
    WCTDatabase * _dbBase; // +0x8
    WCTTable * _recentCallTable; // +0x10
    WCTTable * _weChatOutMsgTable; // +0x18
}
- (id)init;
- (int)insertCall:(id)arg1;
- (id)selectRecentCallForPhoneNum:(id)arg1 withCountryCode:(id)arg2 limit:(int)arg3;
- (id)dicFromCountryCodeToCount;
- (id)compositeForLastCallItemsAndCountryCodeUseCountDic;
- (BOOL)deleteRecentCallById:(int)arg1;
- (BOOL)deleteRecentCallByPhoneNum:(id)arg1 withCountryCode:(id)arg2;
- (BOOL)insertOrUpdateWcoMsg:(id)arg1;
- (id)getWeChatOutMsgBeginLocalID:(unsigned int)arg1 limit:(int)arg2;
- (void).cxx_destruct;
@end

