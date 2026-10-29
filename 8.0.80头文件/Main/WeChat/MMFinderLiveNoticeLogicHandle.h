@interface MMFinderLiveNoticeLogicHandle : MMUserService <MMServiceProtocol>
{
    MMFinderLiveReserveNoticeLogic * _noticeReserveLogic; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)noticeReserveLogic;
- (void)setNoticeReserveLogic:(id)arg1;
- (void).cxx_destruct;
@end
