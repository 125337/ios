@interface ThirdAppBindReportObject : NSObject
{
    BOOL _bind; // +0x8
    unsigned long long _type; // +0x10
    NSString * _sessionId; // +0x18
    unsigned long long _bindStatus; // +0x20
}
- (id)init;
- (void)setBind:(BOOL)arg1;
- (void)reportAction:(unsigned long long)arg1;
- (void)reportAction:(unsigned long long)arg1 withErrorCode:(long long)arg2;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (BOOL)isBound;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)bindStatus;
- (void)setBindStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

