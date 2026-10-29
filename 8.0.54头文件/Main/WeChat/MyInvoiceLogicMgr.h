@interface MyInvoiceLogicMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
+ (void)ReportInvoiceClick:(long long)arg1;
+ (id)getInvoiceSettingConfigRootDir;
+ (id)getInvoiceSettingConfinPath;
+ (BOOL)saveSettingData:(BOOL)arg1;
+ (BOOL)getSettingData;
- (id)init;
- (void)dealloc;
- (void)GetInvoiceInfo:(unsigned int)arg1;
- (void)SaveInvoiceInfo:(id)arg1;
- (void)DeleteInvoiceInfo:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@end

