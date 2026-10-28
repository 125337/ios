@interface ScanTaskOperation : WCSilentTask
{
    unsigned int _startTimestamp; // +0x8
    unsigned int _endTimestamp; // +0xc
    NSMutableArray * _sessionArray; // +0x10
}
- (id)initWithSessionAndTime:(id)arg1 StartTimestamp:(unsigned int)arg2 EndTimestamp:(unsigned int)arg3;
- (void)startOperation;
- (void)runLoop;
- (void)report:(unsigned int)arg1 sourceType:(unsigned int)arg2 size:(unsigned long long)arg3 count:(unsigned long long)arg4 date:(unsigned long long)arg5 fileSizeList:(id)arg6;
- (void)report35066:(id)arg1 FileType:(unsigned int)arg2 TalkerType:(unsigned int)arg3 FileIsUploadType:(unsigned int)arg4 MsgIsSendType:(unsigned int)arg5 SendFileScene:(id)arg6 StartTimeStamp:(unsigned long long)arg7;
- (id)getSendFileScene:(unsigned int)arg1 ForwardType:(unsigned int)arg2;
- (void)addFileSize:(unsigned long long)arg1 FileSizeList:(id)arg2;
- (void)addReportDataItem:(id)arg1 IsSend:(BOOL)arg2 Type:(unsigned int)arg3;
- (void)debugPrint;
- (id)sessionArray;
- (void)setSessionArray:(id)arg1;
- (unsigned int)startTimestamp;
- (void)setStartTimestamp:(unsigned int)arg1;
- (unsigned int)endTimestamp;
- (void)setEndTimestamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end
