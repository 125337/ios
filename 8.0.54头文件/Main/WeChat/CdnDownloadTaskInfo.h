@interface CdnDownloadTaskInfo : NSObject
{
    BOOL _m_isStartFail; // +0x8
    BOOL _m_isPartialEnd; // +0x9
    BOOL _m_isResumed; // +0xa
    int _m_nRetCode; // +0xc
    int _m_nHttpStatusCode; // +0x10
    unsigned int _m_uiScene; // +0x14
    NSString * _m_nsClientMsgID; // +0x18
    unsigned long long _m_uiFileLength; // +0x20
    NSString * _m_nsTransInfo; // +0x28
    NSString * _fileMd5; // +0x30
    NSString * _m_nsFileID; // +0x38
    NSString * _m_nsExtInfo; // +0x40
    unsigned long long _startTime; // +0x48
    unsigned long long _endTime; // +0x50
    unsigned long long _recvedLength; // +0x58
    NSString * _savePath; // +0x60
    C2CDownloadResult _result; // +0x68
}
- (id)init;
- (id)initWithClientMediaID:(id)arg1 result:(const void *)arg2;
- (id)m_nsClientMsgID;
- (void)setM_nsClientMsgID:(id)arg1;
- (unsigned long long)m_uiFileLength;
- (void)setM_uiFileLength:(unsigned long long)arg1;
- (id)m_nsTransInfo;
- (void)setM_nsTransInfo:(id)arg1;
- (BOOL)m_isStartFail;
- (void)setM_isStartFail:(BOOL)arg1;
- (int)m_nRetCode;
- (void)setM_nRetCode:(int)arg1;
- (int)m_nHttpStatusCode;
- (void)setM_nHttpStatusCode:(int)arg1;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (id)fileMd5;
- (void)setFileMd5:(id)arg1;
- (id)m_nsFileID;
- (void)setM_nsFileID:(id)arg1;
- (id)m_nsExtInfo;
- (void)setM_nsExtInfo:(id)arg1;
- (BOOL)m_isPartialEnd;
- (void)setM_isPartialEnd:(BOOL)arg1;
- (BOOL)m_isResumed;
- (void)setM_isResumed:(BOOL)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (unsigned long long)recvedLength;
- (void)setRecvedLength:(unsigned long long)arg1;
- (id)savePath;
- (void)setSavePath:(id)arg1;
- (C2CDownloadResult)result;
- (void)setResult:(C2CDownloadResult)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

