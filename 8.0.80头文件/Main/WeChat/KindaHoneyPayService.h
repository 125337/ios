@interface KindaHoneyPayService : NSObject <WCPaySelectSingleContactControlLogicDelegate, MMKHoneyPayService>
{
    MMVoidStringCallback * _callBack; // +0x8
}
- (void)updateBubbleMsg:(id)arg1 msgContent:(id)arg2 username:(id)arg3;
- (void)handleOfflineThings:(int)arg1 bindSerial:(id)arg2;
- (void)selectSingeContactImpl:(id)arg1 resultCallback:(id)arg2;
- (void)stopSelectSingleContact;
- (void)dealloc;
- (void)selectSingleContactLogic:(id)arg1 didSelectContact:(id)arg2;
- (void)jumpToBankcardList;
- (id)callBack;
- (void)setCallBack:(id)arg1;
- (void).cxx_destruct;
@end
