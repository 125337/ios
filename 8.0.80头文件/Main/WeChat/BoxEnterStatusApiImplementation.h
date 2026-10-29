@interface BoxEnterStatusApiImplementation : NSObject <BoxEnterStatusApi, MMFlutterPlugin>
{
    BoxEnterUnreadStatusInfo * _enterInfo; // +0x8
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)getBoxEnterStatusInfoWithError:(id *)arg1;
- (id)enterInfo;
- (void)setEnterInfo:(id)arg1;
- (void).cxx_destruct;
@end
