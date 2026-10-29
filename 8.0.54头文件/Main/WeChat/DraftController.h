@interface DraftController : NSObject <NSCoding>
{
    NSMutableArray * m_arrReceiver; // +0x8
    NSMutableArray * m_arrCc; // +0x10
    NSMutableArray * m_arrBcc; // +0x18
    NSString * m_topic; // +0x20
    NSString * m_content; // +0x28
    NSArray * m_storedMailAttachments; // +0x30
}
+ (id)readAllDraft:(id)arg1;
+ (BOOL)writeAllDraft:(id)arg1 mailID:(id)arg2;
+ (void)deleteDraft:(id)arg1;
+ (void)deleteAllDraft;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)m_arrReceiver;
- (void)setM_arrReceiver:(id)arg1;
- (id)m_arrBcc;
- (void)setM_arrBcc:(id)arg1;
- (id)m_arrCc;
- (void)setM_arrCc:(id)arg1;
- (id)m_topic;
- (void)setM_topic:(id)arg1;
- (id)m_content;
- (void)setM_content:(id)arg1;
- (id)m_storedMailAttachments;
- (void)setM_storedMailAttachments:(id)arg1;
- (void).cxx_destruct;
@end

