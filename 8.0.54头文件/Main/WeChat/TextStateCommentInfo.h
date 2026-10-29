@interface TextStateCommentInfo : NSObject <WCTTableCoding, TextStateBaseNotifyInfo>
{
    BOOL _hadRead; // +0x8
    BOOL _bNotify; // +0x9
    BOOL _isDeleted; // +0xa
    unsigned int _commentCount; // +0xc
    NSString * _fromUsername; // +0x10
    NSString * _textStateId; // +0x18
    NSString * _content; // +0x20
    NSString * _commentId; // +0x28
    NSString * _rootCommentId; // +0x30
    unsigned long long _timeStamp; // +0x38
    NSString * _extInfo; // +0x40
    NSString * _feedOwnerUsername; // +0x48
    StatusCommentMessageThumb * _messageThumbData; // +0x50
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)fromUsername;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_fromUsername;
+ (const void *)textStateId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_textStateId;
+ (const void *)content;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_content;
+ (const void *)commentId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_commentId;
+ (const void *)rootCommentId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_rootCommentId;
+ (const void *)timeStamp;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_timeStamp;
+ (const void *)hadRead;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_hadRead;
+ (const void *)extInfo;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_extInfo;
+ (const void *)bNotify;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_bNotify;
+ (const void *)isDeleted;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_isDeleted;
+ (const void *)feedOwnerUsername;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_feedOwnerUsername;
+ (const void *)commentCount;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_commentCount;
+ (void)__wcdb_table_constraint_12:(void *)arg1;
+ (void)__wcdb_table_constraint_13:(void *)arg1;
+ (void)__wcdb_table_constraint_14:(void *)arg1;
+ (void)__wcdb_index_15:(void *)arg1;
+ (id)GenerateCommentInfoWithDataItem:(id)arg1;
- (id)displayContent;
- (unsigned int)createTime;
- (id)profileContact;
- (id)username;
- (id)statusID;
- (id)notifyListReportParams;
- (id)fromUsername;
- (void)setFromUsername:(id)arg1;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)commentId;
- (void)setCommentId:(id)arg1;
- (id)rootCommentId;
- (void)setRootCommentId:(id)arg1;
- (unsigned long long)timeStamp;
- (void)setTimeStamp:(unsigned long long)arg1;
- (BOOL)hadRead;
- (void)setHadRead:(BOOL)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (BOOL)bNotify;
- (void)setBNotify:(BOOL)arg1;
- (BOOL)isDeleted;
- (void)setIsDeleted:(BOOL)arg1;
- (id)feedOwnerUsername;
- (void)setFeedOwnerUsername:(id)arg1;
- (unsigned int)commentCount;
- (void)setCommentCount:(unsigned int)arg1;
- (id)messageThumbData;
- (void)setMessageThumbData:(id)arg1;
- (void).cxx_destruct;
@end

