@interface SessionDraftInfo : NSObject
{
    unsigned int _draftStatus; // +0x8
    NSString * _draftContent; // +0x10
    long long _referMsgSvrId; // +0x18
    NSString * _referPartXML; // +0x20
}
- (BOOL)hasDraftContent;
- (void)updateFromMMKV;
- (id)draftContent;
- (void)setDraftContent:(id)arg1;
- (long long)referMsgSvrId;
- (void)setReferMsgSvrId:(long long)arg1;
- (id)referPartXML;
- (void)setReferPartXML:(id)arg1;
- (unsigned int)draftStatus;
- (void)setDraftStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end
