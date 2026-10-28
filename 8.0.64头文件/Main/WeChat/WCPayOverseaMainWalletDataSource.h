@interface WCPayOverseaMainWalletDataSource : NSObject
{
    NSMutableArray * _m_dataSource; // +0x8
}
- (id)initWithTpaCountry:(unsigned int)arg1 PayFunctionListRespObject:(id)arg2 IBGGetWalletCgiCache:(id)arg3 ReadList:(id)arg4 rowCount:(unsigned long long)arg5;
- (id)initWithTpaCountry:(unsigned int)arg1 PayFunctionListRespObject:(id)arg2 IBGGetWalletCgiCache:(id)arg3 ReadList:(id)arg4 rowCount:(unsigned long long)arg5 rightTopNew:(BOOL)arg6;
- (void)calculateFooterView;
- (void)updateWithPayFunctionListRespObject:(id)arg1 ReadList:(id)arg2 rowCount:(unsigned long long)arg3 walletRegionDesc:(id)arg4 rightTopNew:(BOOL)arg5;
- (id)dataAtSection:(long long)arg1;
- (long long)count;
- (id)m_dataSource;
- (void)setM_dataSource:(id)arg1;
- (void).cxx_destruct;
@end
