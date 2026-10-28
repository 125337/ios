@interface WCContactProfileRecommenDataInfo : NSObject <PBCoding>
{
    NSMutableDictionary * _dicProfileRecommen; // +0x8
    NSMutableDictionary * _dicEnxposureProfileRecommen; // +0x10
    NSMutableDictionary * _dicRecommenHelloToChatMsgInfo; // +0x18
    NSMutableDictionary * _dicVerifyEnxposureProfileRecommen; // +0x20
    NSMutableDictionary * _dicFailImageDownloadMsgId; // +0x28
}
+ (void)PBArrayAdd_dicProfileRecommen;
+ (void)PBArrayAdd_dicEnxposureProfileRecommen;
+ (void)PBArrayAdd_dicRecommenHelloToChatMsgInfo;
+ (void)PBArrayAdd_dicVerifyEnxposureProfileRecommen;
+ (void)PBArrayAdd_dicFailImageDownloadMsgId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)dicProfileRecommen;
- (void)setDicProfileRecommen:(id)arg1;
- (id)dicEnxposureProfileRecommen;
- (void)setDicEnxposureProfileRecommen:(id)arg1;
- (id)dicRecommenHelloToChatMsgInfo;
- (void)setDicRecommenHelloToChatMsgInfo:(id)arg1;
- (id)dicVerifyEnxposureProfileRecommen;
- (void)setDicVerifyEnxposureProfileRecommen:(id)arg1;
- (id)dicFailImageDownloadMsgId;
- (void)setDicFailImageDownloadMsgId:(id)arg1;
- (void).cxx_destruct;
@end
