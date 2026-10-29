@interface MMContactReportMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * m_dicContactReport; // +0x8
}
- (void)recordContactActionStartReport:(unsigned int)arg1;
- (unsigned long long)getContactActionStartReport:(unsigned int)arg1;
- (void).cxx_destruct;
@end
