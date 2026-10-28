@interface ReaderReporter : NSObject
{
    BOOL _isServiceBrand; // +0x8
    unsigned int _enterTime; // +0xc
    unsigned int _addContactScene; // +0x10
    NSString * _sessionId; // +0x18
    long long _enterScene; // +0x20
    NSString * _usrName; // +0x28
    double _curOffset; // +0x30
    NSMutableArray * _reportItems; // +0x38
    NSMutableSet * _reportTitiles; // +0x40
    NSMutableSet * _reportItemSet; // +0x48
}
+ (id)sharedInstance;
+ (BOOL)isOrderGuideMsgWithContact:(id)arg1;
- (id)init;
- (void)onTableDidScrollWithOffset:(double)arg1;
- (void)checkShowWithText:(id)arg1 ReadersWraps:(id)arg2 readerSubtype:(unsigned int)arg3;
- (BOOL)hadShowTitle:(id)arg1 WithReaders:(id)arg2;
- (void)onShowTitle:(id)arg1 Readers:(id)arg2 readerSubtype:(unsigned int)arg3;
- (void)reportShowInfo;
- (void)doReportServiceBrandMsgMsgExpose;
- (BOOL)isMsgReportTypeValid:(unsigned long long)arg1;
- (unsigned long long)getReportMsgType:(id)arg1;
- (BOOL)neddReportMsg:(id)arg1;
- (void)doServiceMsgClickReportIfNeed:(id)arg1 isSender:(BOOL)arg2;
- (void)doServiceMsgClickReportIfNeed:(id)arg1 contact:(id)arg2;
- (void)doServiceMsgClickReportIfNeed:(id)arg1 contact:(id)arg2 uiReaderIndex:(unsigned int)arg3;
- (void)addToServiceMsgExposeReportIfNeed:(id)arg1 contact:(id)arg2 postion:(long long)arg3;
- (id)getBizServiceMsgReportItem:(id)arg1 contact:(id)arg2 postion:(long long)arg3 isExpose:(BOOL)arg4 uiReaderIndex:(unsigned int)arg5;
- (void)onEnterSessionWithContact:(id)arg1 enterScene:(long long)arg2;
- (void)onExitSessionWithContact:(id)arg1 enterScene:(long long)arg2;
- (void)onMenuClickWithMenuid:(id)arg1;
- (void)reportSendMessageIfNeeded:(id)arg1 usrName:(id)arg2;
- (unsigned int)enterTime;
- (void)setEnterTime:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (id)usrName;
- (void)setUsrName:(id)arg1;
- (BOOL)isServiceBrand;
- (void)setIsServiceBrand:(BOOL)arg1;
- (unsigned int)addContactScene;
- (void)setAddContactScene:(unsigned int)arg1;
- (double)curOffset;
- (void)setCurOffset:(double)arg1;
- (id)reportItems;
- (void)setReportItems:(id)arg1;
- (id)reportTitiles;
- (void)setReportTitiles:(id)arg1;
- (id)reportItemSet;
- (void)setReportItemSet:(id)arg1;
- (void).cxx_destruct;
@end
