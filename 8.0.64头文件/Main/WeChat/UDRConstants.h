@interface UDRConstants : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _kUDRBizMetaArray; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)getClsNameArray;
- (id)kUDRBizMetaArray;
- (void)setKUDRBizMetaArray:(id)arg1;
- (void).cxx_destruct;
@end
