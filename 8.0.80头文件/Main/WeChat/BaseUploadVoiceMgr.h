@interface BaseUploadVoiceMgr : MMObject
- (void)InitUploadMgr:(id)arg1 Lock:(id)arg2 Delegate:(id)arg3;
- (void)Start;
- (void)Stop;
- (id)loadPB;
- (void)AddNewPart:(id)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 Offset:(unsigned int)arg4 Len:(unsigned int)arg5 VoiceTime:(unsigned int)arg6 CreateTime:(unsigned int)arg7 EndFlag:(unsigned int)arg8 CancelFlag:(unsigned int)arg9 VoiceFormat:(unsigned int)arg10 ForwardFlag:(unsigned int)arg11 msgSource:(id)arg12 chatName:(id)arg13;
- (void)ResendVoiceMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)getExtCommInfoXml:(id)arg1 LocalID:(unsigned int)arg2;
@end
