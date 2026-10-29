@interface WCShareItemLimitCalculator : NSObject
{
    NSArray * _msgList; // +0x8
}
+ (unsigned long long)calculateMaxExpandLevelForMsgList:(id)arg1 limit:(unsigned long long)arg2;
- (id)initWithMsgList:(id)arg1;
- (unsigned long long)determineMaxExpandLevelWithLimit:(unsigned long long)arg1;
- (unsigned long long)totalItemsWithMaxExpandLevel:(unsigned long long)arg1;
- (unsigned long long)countItemsForMsgWrap:(id)arg1 depth:(unsigned long long)arg2 maxExpandLevel:(unsigned long long)arg3;
- (unsigned long long)countItemsForRecordData:(id)arg1 depth:(unsigned long long)arg2 maxExpandLevel:(unsigned long long)arg3;
- (BOOL)isMediaFileExistForMsgWrap:(id)arg1;
- (BOOL)isImageFileExistForMsgWrap:(id)arg1;
- (BOOL)isVideoFileExistForMsgWrap:(id)arg1;
- (BOOL)isAppFileExistForMsgWrap:(id)arg1;
- (id)msgList;
- (void)setMsgList:(id)arg1;
- (void).cxx_destruct;
@end
