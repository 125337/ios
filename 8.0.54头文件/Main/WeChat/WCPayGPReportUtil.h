@interface WCPayGPReportUtil : NSObject
+ (void)logGroupPayClickReport:(unsigned int)arg1 subType:(unsigned int)arg2;
+ (void)logGroupPayClickReport:(unsigned int)arg1 subType:(unsigned int)arg2 mode:(unsigned int)arg3;
+ (void)logGroupPayEventReport:(unsigned int)arg1;
+ (void)logGroupPayDataReport:(unsigned int)arg1 chatroomMemberCount:(unsigned int)arg2 participateCount:(unsigned int)arg3 amount:(unsigned long long)arg4 theme:(id)arg5 detailData:(id)arg6;
+ (void)logGroupPayIDKey:(unsigned int)arg1;
@end

