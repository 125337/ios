@interface PushMailWrap : NSObject <NSCopying>
{
    BOOL bHasAttachment; // +0x8
    NSString * nsSender; // +0x10
    NSString * nsSenderAddress; // +0x18
    NSString * nsSubject; // +0x20
    NSString * nsDigest; // +0x28
    NSString * nsDate; // +0x30
    NSString * nsWapLink; // +0x38
    NSString * nsMailID; // +0x40
    NSString * nsAccount; // +0x48
    NSString * nsArgs; // +0x50
    unsigned long long uiUin; // +0x58
    NSMutableArray * arrToList; // +0x60
    NSMutableArray * arrCCList; // +0x68
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)nsSender;
- (void)setNsSender:(id)arg1;
- (id)nsSenderAddress;
- (void)setNsSenderAddress:(id)arg1;
- (id)nsSubject;
- (void)setNsSubject:(id)arg1;
- (id)nsDigest;
- (void)setNsDigest:(id)arg1;
- (id)nsDate;
- (void)setNsDate:(id)arg1;
- (id)nsWapLink;
- (void)setNsWapLink:(id)arg1;
- (id)nsMailID;
- (void)setNsMailID:(id)arg1;
- (id)nsAccount;
- (void)setNsAccount:(id)arg1;
- (id)nsArgs;
- (void)setNsArgs:(id)arg1;
- (BOOL)bHasAttachment;
- (void)setBHasAttachment:(BOOL)arg1;
- (unsigned long long)uiUin;
- (void)setUiUin:(unsigned long long)arg1;
- (id)arrToList;
- (void)setArrToList:(id)arg1;
- (id)arrCCList;
- (void)setArrCCList:(id)arg1;
- (void).cxx_destruct;
@end
