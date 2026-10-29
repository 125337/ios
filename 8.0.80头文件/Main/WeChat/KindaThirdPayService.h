@interface KindaThirdPayService : NSObject <ThirdPayExt, MMKThirdPayService>
{
    MMVoidITransmitKvDataCallback * _resultCallback; // +0x8
    NSString * _dcepOrderNo; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)startYunShanFuPayImpl:(id)arg1 resultCallback:(id)arg2;
- (BOOL)isYunShanFuAppInstalled;
- (void)startDcepPayImpl:(id)arg1 requestUrl:(id)arg2 extra:(id)arg3 resultCallback:(id)arg4;
- (BOOL)isDcepAppInstalled;
- (BOOL)isSupportApplePay;
- (BOOL)isSupportNFC;
- (void)handleApplicationNotification:(id)arg1;
- (void)ThirdPayCallback:(id)arg1;
- (id)resultCallback;
- (void)setResultCallback:(id)arg1;
- (id)dcepOrderNo;
- (void)setDcepOrderNo:(id)arg1;
- (void).cxx_destruct;
@end
