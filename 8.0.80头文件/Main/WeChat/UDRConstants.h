@interface UDRConstants : MMRootService <MMServiceProtocol>
{
    NSMutableArray * _kUDRBizMetaArray; // +0x8
}
+ (id)sharedInstance;
- (void)onServiceInit;
- (void)dealloc;
- (id)getClsNameArray;
- (id)kUDRBizMetaArray;
- (void)setKUDRBizMetaArray:(id)arg1;
- (void).cxx_destruct;
@end
