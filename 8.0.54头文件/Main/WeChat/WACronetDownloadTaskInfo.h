@interface WACronetDownloadTaskInfo : NSObject
{
    int _m_nRetCode; // +0x8
    int _m_nHttpStatusCode; // +0xc
    NSString * _m_nsClientMsgID; // +0x10
    NSString * _m_nsTransInfo; // +0x18
    CronetTaskResult _result; // +0x20
}
- (id)initWithClientMediaID:(id)arg1 result:(const void *)arg2;
- (id)m_nsClientMsgID;
- (void)setM_nsClientMsgID:(id)arg1;
- (id)m_nsTransInfo;
- (void)setM_nsTransInfo:(id)arg1;
- (int)m_nRetCode;
- (void)setM_nRetCode:(int)arg1;
- (int)m_nHttpStatusCode;
- (void)setM_nHttpStatusCode:(int)arg1;
- (CronetTaskResult)result;
- (void)setResult:(CronetTaskResult)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

