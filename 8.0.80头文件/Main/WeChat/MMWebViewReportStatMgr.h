@interface MMWebViewReportStatMgr : MMUserService <MMServiceProtocol>
{
    unsigned long long m_iMenuActionRet; // +0x8
}
- (id)init;
- (void)setM_iMenuActionRet:(unsigned long long)arg1;
- (void)reportWebPageInfoWhenForwardMsgOrFav:(id)arg1 actionType:(unsigned long long)arg2 fromScene:(unsigned long long)arg3 ret:(unsigned long long)arg4;
- (unsigned long long)m_iMenuActionRet;
@end
