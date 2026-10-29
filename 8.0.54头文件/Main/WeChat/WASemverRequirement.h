@interface WASemverRequirement : NSObject
{
    WASemverRange * _range; // +0x8
    WASemverRequirement * _req1; // +0x10
    unsigned long long _op; // +0x18
    WASemverRequirement * _req2; // +0x20
}
- (id)initWithRange:(id)arg1;
- (id)initWithReq1:(id)arg1 op:(unsigned long long)arg2 req2:(id)arg3;
- (id)initWithReqStr:(id)arg1;
- (id)parseString2Req:(id)arg1 type:(unsigned long long)arg2;
- (id)createCaretRequirement:(id)arg1;
- (id)createTildeRequirement:(id)arg1;
- (BOOL)isSatisfiedBy:(id)arg1;
- (id)range;
- (void)setRange:(id)arg1;
- (id)req1;
- (void)setReq1:(id)arg1;
- (unsigned long long)op;
- (void)setOp:(unsigned long long)arg1;
- (id)req2;
- (void)setReq2:(id)arg1;
- (void).cxx_destruct;
@end

